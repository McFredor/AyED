-- Ejesrcicio 1
-- a)
esCero::Int -> Bool
esCero i = i == 0 

-- b)
esPositivo::Int -> Bool
esPositivo i = i > 0

-- c)
esVocal::Char -> Bool
esVocal c = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')

-- Ejesrcicio 2
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


-- Ejesrcicio 3
pertenece :: Int -> [Int] -> Bool
pertenece a [] = False
pertenece a (x:xs) = (x == a) || (pertenece a xs)

-- Ejesrcicio 4
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