-- Ejercicio 1
-- a)
data Carrera = Matematica | Fisica | Computacion | Astronomia deriving (Eq, Show)

-- b)
titulo :: Carrera -> String
titulo Matematica   = "Licenciatura en Matemática"
titulo Fisica       = "Licenciatura en Física"
titulo Computacion  = "Licenciatura en Ciencias de la Computación"     
titulo Astronomia   = "Licenciatura en Astronomía"

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
type Ingreso   = Int

data Cargo     = Titular | Asociado | Adjunto | Asistente | Auxiliar                      deriving Eq
data Area      = Administrativa | Ensenanza | Economica | Postgrado                       deriving Eq

data Persona   = Decane | Docente Cargo | NoDocente Area | Estudiante Carrera Ingreso     deriving Eq

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
sonido Do  = 1
sonido Re  = 3
sonido Mi  = 5
sonido Fa  = 6
sonido Sol = 8
sonido La  = 10
sonido Si  = 12

-- b)
sonidoCromatico :: NotaMusical -> Int
sonidoCromatico (Nota nb Bemol)      = sonido nb - 1
sonidoCromatico (Nota nb Sostenido)  = sonido nb + 1
sonidoCromatico (Nota nb Natural)    = sonido nb

-- c)
instance Eq  NotaMusical
         where
              nota1 == nota2    =    sonidoCromatico nota1 == sonidoCromatico nota2

-- d)
instance Ord NotaMusical
         where
              nota1 <= nota2    =    sonidoCromatico nota1 <= sonidoCromatico nota2

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

encolar :: Persona -> Cola -> Cola
encolar per VaciaC =  Encolada per VaciaC
encolar per (Encolada p c) = Encolada p (encolar per c)

busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC _ = Nothing
busca (Encolada per c) cargo
     | per == Docente cargo = Just (per)
     | otherwise = busca c cargo

-- b)
-- Cola se parece al tipo Lista.

-- Ejercicio 8
data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b)

-- a)
type Telefono = ListaAsoc String [Int]

-- b)
la_long :: ListaAsoc a b -> Int
la_long Vacia = 0
la_long (Nodo a b c)  = 1 + la_long c

la_concat ::  ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b
la_concat Vacia a = a
la_concat a Vacia = a
la_concat (Nodo a b c) (Nodo a2 b2 c2) = Nodo a b (Nodo a2 b2 (la_concat c c2))

la_agregar :: ListaAsoc a b -> a -> b -> ListaAsoc a b 
la_agregar Vacia a b = Nodo a b (Vacia)
la_agregar (Nodo ai bi ci) a b = Nodo a b (Nodo ai bi ci)

la_pares :: ListaAsoc a b -> [(a, b)]
la_pares Vacia = []
la_pares (Nodo a b c) = (a, b):(la_pares c)

la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b
la_busca Vacia clave = Nothing
la_busca (Nodo a b c) clave
     |clave == a = Just (b)
     |otherwise = la_busca c clave

la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b
la_borrar clave Vacia = Vacia
la_borrar clave (Nodo a b c)
     | clave == a = la_borrar clave c    --Por si al juntar listas se me repiten asociaciones identicas.
     | otherwise = Nodo a b (la_borrar clave c)

-- Ejercicio 9
data Arbol a = Hoja | Rama (Arbol a) a (Arbol a)

-- a)
a_long :: Arbol a -> Int
a_long Hoja = 0
a_long (Rama a1 _ a2) = 1 + a_long a1 + a_long a2

-- b)
a_hojas :: Arbol a -> Int
a_hojas Hoja = 1
a_hojas (Rama a1 _ a2) = a_hojas a1 + a_hojas a2

-- c)
a_inc :: Num a => Arbol a -> Arbol a
a_inc Hoja = Hoja
a_inc (Rama a b c) = Rama (a_inc a) (b + 1) (a_inc c)

-- d)
a_map :: (a -> b) -> Arbol a -> Arbol b
a_map t Hoja = Hoja
a_map t (Rama a b c) = Rama (a_map t a) (t b) (a_map t a)
