import Data.List (sortBy)
import Data.Ord (comparing)

--Cada estudiante es (nombre, nota)
type Estudiante=(String, Int)

--Orden: primero por nota descendente, luego por nombre ascendente
ordenarEstudiantes :: [Estudiante]->[Estudiante]
ordenarEstudiantes=
    sortBy (\(n1, c1) (n2, c2) ->
        compare c2 c1 <> compare n1 n2)

main :: IO ()
main=do
    let estudiantes=[("Josemi", 98), ("Carlos", 94), ("Lucia", 95), ("Juan", 84)]
    print (ordenarEstudiantes estudiantes)
