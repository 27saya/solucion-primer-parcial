# Punto 3
Notas:
- Cuando se usa fold, nos referimos a la funcion o patrón que recorrera la lista y acumulara un resultado, siendo esto por lo cual se usa para definir la suma, longitud, promedio, etc.
- Caso lista vacia: En este caso, la expresión queda indefinida (ya que se divide por 0)
- El promedio de una lista es igual a sumar todos los elementos de la lista y luego dividir esa suma entre la cantidad de elementos que tiene la misma.

Proceso:
- Definimos suma y longitud basandonos en la notación del calculo lambda:

  <img width="347" height="28" alt="imagen_2025-09-05_005508887" src="https://github.com/user-attachments/assets/01f599d6-12e4-461e-824d-830485f1839e" />

  <img width="382" height="30" alt="imagen_2025-09-05_005531952" src="https://github.com/user-attachments/assets/00a97daa-9d4e-422d-83bd-66f8f4ab21f5" />

  - Siendo *(λacc x. acc+x)* la función que recibe el acumulador y el siguiente número, y devuelve su suma, *(λacc x. acc+1)¨* la función que cuenta los elementos en un fold, 0 el número desde el cual empieza a contar y *xs* el nombre de una lista cualquiera.

- Usando la definición de promedio antes vista, traducimos a notación lambda:

  <img width="402" height="55" alt="imagen_2025-09-05_011059313" src="https://github.com/user-attachments/assets/84f7a20a-488b-4837-bee5-959e8ac493e6" />

- Comprobamos con un ejemplo rapido:
  - Con *xs*=[2,4,6]:

    <img width="413" height="95" alt="imagen_2025-09-05_011533616" src="https://github.com/user-attachments/assets/0ec844b8-ed43-4dc3-a7da-49fa2aedcd3b" />






