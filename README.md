# Solución al primer parcial

Punto 1:

- Comparación de claridad y legibilidad del codigo:
  - La solución declarativa (hecha en Haskell) resulta muy clara y concisa, ya que la intención del ordenamiento se expresa directamente con funciones de orden superior y sin detallar los pasos internos. Esto hace que el código sea fácil de leer y mantener, transmitiendo el qué se quiere lograr más que el cómo hacerlo.

     <img width="421" height="80" alt="imagen_2025-09-04_223128155" src="https://github.com/user-attachments/assets/bb80fed7-460d-4cc7-8bb7-d34c559a57d4" />

  - La solución imperativa (hecha en Python) es clara y legible ya que, el paso a paso se entiende fácilmente: recorrer la lista, comparar elementos y hacer intercambios. Sin embargo, el código puede volverse más extenso y repetitivo, lo que reduce un poco la elegancia frente a enfoques o problemas más complejos o abstractos.
 
      <img width="737" height="131" alt="imagen_2025-09-04_224107291" src="https://github.com/user-attachments/assets/83055454-4895-48cc-ac9a-4c81db6e4f58" />

- Nivel de abstracción:
  - Haskell está a un nivel alto, es decir, describe qué ordenar, no cómo, mientras que Python, maneja un nivel mas bajo, ya que hay que detallar el algoritmo paso a paso.

- Manejo de estructuras de datos (Mutabilidad, inmutabilidad y manejo de estado:
  - En el paradigma imperativo (Python), la mutabilidad es una característica central, ya que, la lista de estudiantes se modifica directamente durante el proceso de ordenamiento mediante intercambios de posición. Esto significa que el estado de la estructura cambia en cada iteración, y el resultado final depende de una serie de transformaciones sobre la misma lista. Aunque este enfoque puede ser eficiente en términos de memoria al no crear copias, también introduce riesgos de errores, ya que es más difícil seguir cómo cambia el estado del programa paso a paso.
    
  - En el paradigma declarativo (Haskell), las estructuras de datos son inmutables, es decir, una vez creada una lista, esta no puede alterarse. En lugar de modificar elementos, se construye y devuelve una nueva lista ya ordenada. Esto elimina resultados no deseados y asegura que las funciones sean puras, es decir, que siempre produzcan la misma salida para los mismos datos de entrada. Aunque puede implicar la creación de nuevas estructuras en memoria, la inmutabilidad contribuye a una mayor confiabilidad del código.

- Mantenimiento y extensión de cada enfoque:
  - En el paradigma declarativo bastaia con ajustar la función de comparación segun las necesidades. Mientras que en el imperativo, habría que reescribir parte del bucle o añadir condiciones extras.
 
- Eficiencia de cada solución:
  - En Python (imperativo), se necesita hacer muchas comparaciones ya que revisa cada estudiante contra todos los demás, por lo que se vuelve lenta cuando la lista es grande. En cambio, en Haskell, la solución declarativa usa un método de ordenamiento ya optimizado que hace menos comparaciones, por lo que funciona más rápido y escala mejor con más datos, aunque gasta un poco más de memoria al crear nuevas listas.



