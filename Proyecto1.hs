-- Ejercicio 1
-- a)
esCero :: Int -> Bool
esCero i = i == 0 

-- b)
esPositivo :: Int -> Bool
esPositivo i = i > 0

-- c)
esVocal :: Char -> Bool
esVocal c = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')

-- Ejercicio 2
-- a) 
paratodo :: [Bool] -> Bool
paratodo [] = True
paratodo (x:xs) = True && paratodo xs

-- b) 
sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs

-- c) 
productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * productoria xs   

-- d) 
factorial :: Int -> Int
factorial 0 = 1
factorial x = x * factorial (x-1)    

-- e) 
promedio :: [Int] -> Int
promedio xs
    | (length xs) > 0 = div (sumatoria xs) (length xs)
    | otherwise = error "La lista debe ser no vacía"


-- Ejercicio 3
pertenece :: Int -> [Int] -> Bool
pertenece a [] = False
pertenece a (x:xs) = (x == a) || (pertenece a xs)

-- Ejercicio 4
-- a) 
{-
paratodo' :: [a] -> (a -> Bool) -> Bool
paratodo' [] _ = False
paratodo' (x:xs) t = t x && paratodo' xs t
-}

-- b) 
existe' :: [a] -> (a -> Bool) -> Bool
existe' [] _ = False
existe' (x:xs) t = t x || existe' xs t

-- c)
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] _ = 0
sumatoria' (x:xs) t = (t x) + (sumatoria' xs t)

-- d)
productoria' :: [a] -> (a -> Int) -> Int
productoria' [] _ = 0
productoria' (x:xs) t = (t x) * (productoria' xs t)

-- Ejercicio 5
paratodo' :: [a] -> (a -> Bool) -> Bool
paratodo' xs p = (length xs) == (length(filter p xs))

-- Ejercicio 6
-- a)
todosPares :: [Int] -> Bool
todosPares xs = paratodo' xs  (\t -> (mod t 2) == 0)

-- b)
hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo m xs = existe' xs (\t -> (mod t m) == 0)

-- c)
sumaCuadrados :: Int -> Int
sumaCuadrados n = sumatoria (map (\t -> t^2) [0..n])

-- d)
factorial' :: Int -> Int
factorial' n = productoria [1..n]

-- e)
multiplicaPares :: [Int] -> Int
multiplicaPares xs = productoria (filter (\t -> (mod t 2) == 0) xs)

-- Ejercicio 7
{-
map:    Devuelve una lista A' en base a la aplicación de una función a cada elemento de una lista A. 
filter: Devuelve una lista A' basada en los elementos de una lista A que cumplen un cierto parametro.

succ:: Int -> Int
succ n = n + 1
map succ [1, -4, 6, 2, -8]

Obtendriamos ======> [2,-3,7,3,-7]

esPositivo:: Int -> Bool
esPositivo n = n > 0
filter esPositivo [1, -4, 6, 2, 8]

Obtendriamos ======> [1, 6, 2, 8]
-}

-- Ejercicio 8
-- a)
duplicame :: [Int] -> [Int]
duplicame [] = []
duplicame (x:xs) = (x*2 :(duplicame xs))

-- b)
duplicame' :: [Int] -> [Int]
duplicame' xs = map (\t -> (t*2)) xs

-- Ejercicio 9
-- a)
getPar :: [Int] -> [Int]
getPar [] = []
getPar (x:xs)
    | mod x 2 == 0 = (x :(getPar xs))
    | otherwise = (getPar xs)

-- b)
getPar' :: [Int] -> [Int]
getPar' xs = filter (\t -> (mod t 2 == 0)) xs

-- c)
multiplicaPares' :: [Int] -> Int
multiplicaPares' xs = productoria (getPar xs)

-- Ejercicio 10
-- a)
primIgualesA :: Eq a => a -> [a] -> [a]
primIgualesA n [] = []
primIgualesA n (x:xs)
    | x == n = (x :(primIgualesA n xs)) 
    | otherwise = [] 

-- b)
primIgualesA' :: Eq a => a -> [a] -> [a]
primIgualesA' n xs = takeWhile (\t -> (t == n)) xs

-- Ejercicio 11
-- a)
primIguales :: (Eq a) => [a] -> [a]
primIguales [] = []
primIguales (x:(y:xs))
    | x == y = (x :(primIguales (y:(xs))))
    | otherwise = (x:[])

-- b)
primIguales' :: Eq a => [a] -> [a]
primIguales' (x:xs) = primIgualesA' x (x:xs)
 

-- 12)
cuantGen :: (b -> b -> b) -> b -> [a] -> (a -> b) -> b
cuantGen op z [] t = z
cuantGen op z (x:xs) t = (t x) `op` (cuantGen op z xs t)

paratodoGen :: [a] -> (a -> Bool) -> Bool
paratodoGen xs t = cuantGen (&&) True xs t

existeGen :: [a] -> (a -> Bool) -> Bool
existeGen xs t = cuantGen (||) False xs t

sumatoriaGen :: [Int] -> Int
sumatoriaGen xs = cuantGen (+) 0 xs id

productoriaGen :: [Int] -> Int
productoriaGen xs = cuantGen (*) 1 xs id

{-
-- 13)
--a)
f :: (a, b) -> ...
f (x, y) = ...
Esta bien tipado y el patron cubre todos los casos de definicion

--b)
f :: [(a, b)] -> ...
(*)f (a, b) = ...
Esta mal tipado porque la funcion recibe como argumento una lista de tuplas y en este caso se esta usando como parametro una tupla sola.

--c)
f :: [(a,b)] ->  ...
f (x:xs) = ...
Esta bien tipado pero el patron no cubre todos los casos porque no logra acceder a cada elemento de la tupla.

--d)
f :: [(a,b)] -> ...
f ((x, y) : ((a, b) : xs)) = ...
Esta bien tipado y el patron cubre todos los casos de definicion.

--e)
f :: [(Int, a)] -> ...
f [(0, a)] = ...
Esta bien tipado y el patron no cubre todos los casos de definicion porque al usar el 0 como parametro queda restringido el 0 como el unico Int que se puede usar.

--f)
f :: [(Int, a)] -> ..
f ((x, 1) : xs) = ...
Esta bien tipado y el patron no cubre todos los casos de definicion porque al usar el 1 como parametro queda restringido el 1 como el unico "a" que se puede usar.

--g)
f :: (Int -> Int) -> Int -> ...
f a b = ...
Esta bien tipado y el patron cubre todos los casos de definición.

--h)
f :: (Int -> Int) -> Int -> ...
f a 3 = ...
Esta bien tipado y el patron no cubre todos los casos de definicion porque al usar el 3 como parametro queda restringido el 3 como el unico Int que se puede usar.

--i)
f :: (Int -> Int) -> Int -> ...
f 0 1 2 = ...
Esta mal tipado porque el primer argumento requiere una funcion Int -> Int y pasa un 0 como parametro.
-}

-- 14)
{-
-- a)
f :: (a, b) -> b
f (a,b) = b

alternativa
f (a, b) = id b


-- b)
f :: (a, b) -> c
f (a, b) = c

alternativa
f (a, b)
    | a > b = (b, a)
    | oterwise = (a, b)


-- c)  
f :: (a -> b) -> a -> b
f g a = b                   --para g :: (a -> b)

alternativa
f g a = g a 


-- d)
f :: (a -> b) -> [a] -> [b]
f g a = b               --para g :: (a -> b)

--alternativa
f g a = map g a = b


-- e)
f :: (a -> b) -> (b -> c) -> a -> c
f g t a = c                 --para g :: (a -> b) y t :: (b -> c)

--alternativa
f g t a = t g a
-}
