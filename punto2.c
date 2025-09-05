#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nombre;
    char *apellido;
    int id;
    int edad;
    float *calificaciones;
    int numCalificaciones;
} Estudiante;

//Crear un estudiante con memoria dinámica
Estudiante* crearEstudiante(const char *nombre, const char *apellido, int id, int edad, float *notas, int numNotas) {
    Estudiante *e=malloc(sizeof(Estudiante));

    //Reservar memoria exacta para nombre y apellido
    e->nombre=malloc(strlen(nombre) + 1);
    strcpy(e->nombre, nombre);

    e->apellido=malloc(strlen(apellido) + 1);
    strcpy(e->apellido, apellido);

    e->id=id;
    e->edad=edad;

    //Reservar memoria exacta para calificaciones
    e->numCalificaciones=numNotas;
    e->calificaciones=malloc(numNotas * sizeof(float));
    for (int i=0; i<numNotas; i++) {
        e->calificaciones[i]=notas[i];
    }

    return e;
}

//Mostrar datos de un estudiante
void mostrarEstudiante(Estudiante *e) {
    printf("ID: %d | Nombre: %s %s | Edad: %d | Calificaciones: ",
           e->id, e->nombre, e->apellido, e->edad);

    for (int i=0; i<e->numCalificaciones; i++) {
        printf("%.2f ", e->calificaciones[i]);
    }
    printf("\n");
}

//Liberar memoria de un estudiante
void liberarEstudiante(Estudiante *e) {
    free(e->nombre);
    free(e->apellido);
    free(e->calificaciones);
    free(e);
}

int main() {
    //Ejemplo de datos
    float notas1[]={4.5, 3.8, 5.0};
    float notas2[]={3.0, 4.0, 4.2, 4.8};
    float notas3[]={3.0, 4.0};

    //Crear estudiantes dinámicamente
    Estudiante *e1=crearEstudiante("Ana", "Perez", 101, 20, notas1, 3);
    Estudiante *e2=crearEstudiante("Luis", "Gomez", 102, 22, notas2, 4);
    Estudiante *e3=crearEstudiante("Maria", "Lopez", 103, 21, notas3, 2);

    //Mostrar los estudiantes
    printf("Lista de Estudiantes: \n");
    mostrarEstudiante(e1);
    mostrarEstudiante(e2);
    mostrarEstudiante(e3);

    //Liberar memoria
    liberarEstudiante(e1);
    liberarEstudiante(e2);
    liberarEstudiante(e3);

    return 0;

}
