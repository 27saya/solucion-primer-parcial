# Lista de estudiantes como (nombre, nota)
estudiantes=[("Josemi", 90), ("Carlos", 98), ("Lucia", 87), ("Juan", 88)]

# Orden (imperativo): primero por nota descendente, luego por nombre ascendente
for i in range(len(estudiantes)):
    for j in range(i+1, len(estudiantes)):
        if (estudiantes[i][1]<estudiantes[j][1]) or \
           (estudiantes[i][1]==estudiantes[j][1] and estudiantes[i][0]>estudiantes[j][0]):
            estudiantes[i], estudiantes[j]=estudiantes[j], estudiantes[i]

print(estudiantes)
