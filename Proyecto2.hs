-- Ejercicio 1
-- a)
data Carrera = Matematica | Fisica | Computacion | Astronomia deriving Eq

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
minimoElemento :: Bounded a => [a] -> a
minimoElemento = minBound a