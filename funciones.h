#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#define ERROR 1
#define PROHIBIDO 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nombre[25];
    int edad;
    float altura;
    char sexo;
} Persona;

void llenarVector(int* vec,int tam);
void mostrarVector(int* vec,int tam);
int ReservarMemoria();

int ReservarMemoriaIndef();

int ReservarStruct();

void llenarPersonas(Persona* vec);
void mostrarPersonas(Persona* vec);
void llenarPersonas(Persona* vec);


#endif // FUNCIONES_H_INCLUDED
