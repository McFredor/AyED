
-- Ejercicio 1
-- a)
data Carrera = Matematica | Fisica | Computacion | Astronomia deriving (Eq, Show)

-- b)
titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matemática"
titulo Fisica = "Licenciatura en Física"
titulo Computacion = "Licenciatura en Ciencias de la Computación"     
titulo Astronomia = "Licenciatura en Astronomía"

-- c)
data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si deriving (Eq, Ord, Bounded, Show)

-- d)
cifradoAmericano :: NotaBasica -> Char
cifradoAmericano Do  = 'C'
cifradoAmericano Re  = 'D'
cifradoAmericano Mi  = 'E'
cifradoAmericano Fa  = 'F'
cifradoAmericano Sol = 'G'
cifradoAmericano La  = 'A'
cifradoAmericano Si  = 'B'

-- Ejercicio 2
-- a)
-- Hecho en el punto 1.c    ...deriving (Eq, Ord, Bounded, Show)

-- Ejercicio 3
-- a)
minimoElemento :: Ord a => [a] -> a
minimoElemento [y] = y
minimoElemento (x:y:xs) = x `min` (minimoElemento (y:xs))

-- b)
minimoElemento' :: (Ord a , Bounded a) => [a] -> a
minimoElemento' [] = maxBound
minimoElemento' (x:xs) = x `min` (minimoElemento' xs)

-- c)
{-                               minimoElemento [Fa, La, Sol, Re, Fa]
{def. de minimoElemento}   Fa `min` minimoElemento [La, Sol, Re, Fa]
{def. de minimoElemento}   Fa `min` La `min` minimoElemento [Sol, Re, Fa]
{def. de minimoElemento}   Fa `min` La `min` Sol `min` minimoElemento [Re, Fa]
{def. de minimoElemento}   Fa `min` La `min` Sol `min` Re `min` minimoElemento [Fa]
{def. de minimoElemento}   Fa `min` La `min` Sol `min` Re `min` Fa
{def. de min}              Re
-}

-- Ejercicio 4
-- a)
type Ingreso = Int

data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar deriving Eq
data Area = Administrativa | Ensenanza | Economica | Postgrado deriving Eq

data Persona = Decane | Docente Cargo | NoDocente Area | Estudiante Carrera Ingreso deriving Eq

-- b)
-- Docente :: Cargo -> Persona

-- c)
cuantos_doc :: [Persona] -> Cargo -> Int
cuantos_doc [] c = 0
cuantos_doc (x: xs) c | x == Docente c = 1 + cuantos_doc xs c
                      | otherwise = cuantos_doc xs c

-- d)
cuantos_doc' :: [Persona] -> Cargo -> Int
cuantos_doc' xs c = length (filter ( == Docente c) xs)

-- Ejercicio 5
-- a)
data Alteracion = Bemol | Sostenido | Natural
data NotaMusical = Nota NotaBasica Alteracion 

sonido :: NotaBasica -> Int
sonido Do = 1
sonido Re = 3
sonido Mi = 5
sonido Fa = 6
sonido Sol = 8
sonido La = 10
sonido Si = 12

-- b)
sonidoCromatico :: NotaMusical -> Int
sonidoCromatico (Nota nb Bemol) = sonido nb - 1
sonidoCromatico (Nota nb Sostenido) = sonido nb + 1
sonidoCromatico (Nota nb Natural) = sonido nb

{-
sonidoCromatico (Nota nb a) = case a of
                           Bemol -> sonido nb -1
                           Sostenido -> sonido nb + 1
                           Natural -> sonido nb
-}

-- c)
instance Eq  NotaMusical
         where
              nota1 == nota2 = sonidoCromatico nota1 == sonidoCromatico nota2

-- d)
instance Ord NotaMusical
         where
              nota1 <= nota2 = sonidoCromatico nota1 <= sonidoCromatico nota2

-- Ejercicio 6
-- a)
primerElemento :: [a] -> Maybe a
primerElemento [] = Nothing
primerElemento (x:xs) = Just (x)

-- Ejercicio 7
data Cola = VaciaC | Encolada Persona Cola

-- a)
atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender (Encolada p c) = Just (c)

--b)
encolar :: Persona -> Cola -> Cola
encolar Persona VaciaC =  (Persona:[])
encolar Persona (Encolada p c) = reverse ( p:(reverse c))
