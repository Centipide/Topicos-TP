#include "funciones.h"

void llenarVector(int* vec,int tam)
{
    int i;
    int *pvec = vec;

    for (i=0;i<tam;i++){
        *pvec=i;
        pvec++;
    }
}

void mostrarVector(int* vec,int tam)
{
    int i;
    int *pvec = vec;

    for (i=0;i<tam;i++){
        printf("\n%d",*pvec);
        pvec++;
    }
}

int ReservarMemoria()
{
    int *vec= (int*) malloc(10*sizeof(int));

    if (!vec)
        return ERROR;

    llenarVector(vec,10);
    mostrarVector(vec,10);

    free(vec);
    return 0;
}

int ReservarMemoriaIndef()
{
    int tam;
    printf("Ingrese la cantidad de elementos que poseera el vector:\n");
    scanf("%d",&tam);

    if (tam <=0)
        return PROHIBIDO;

    int *vec= (int*) malloc(tam*sizeof(int));

    if (!vec)
        return ERROR;

    llenarVector(vec,tam);
    mostrarVector(vec,tam);

    free(vec);
    return 0;
}

int ReservarStruct()
{
    Persona *vec= (Persona*) malloc(5*sizeof(Persona));

    if (!vec)
        return ERROR;

    llenarPersonas(vec);
    mostrarPersonas(vec);

    free(vec);
    return 0;
}

void llenarPersonas(Persona* vec)
{
    Persona *aux = vec;

    aux->altura=1.8,aux->edad=40,strcpy(aux->nombre,"primero"),aux->sexo='M';
    aux++;
    aux->altura=1.6,aux->edad=20,strcpy(aux->nombre,"seg"),aux->sexo='F';
    aux++;
    aux->altura=1.7,aux->edad=15,strcpy(aux->nombre,"ter"),aux->sexo='M';
    aux++;
    aux->altura=1.9,aux->edad=18,strcpy(aux->nombre,"cuar"),aux->sexo='M';
    aux++;
    aux->altura=1.3,aux->edad=13,strcpy(aux->nombre,"quin"),aux->sexo='F';
}


void mostrarPersonas(Persona* vec)
{
    Persona *aux=vec;
    for (int i = 0; i < 5; i++) {
        printf("Persona %d:\n", i+1);
        printf("  Nombre: %s\n", aux->nombre);
        printf("  Edad: %d\n", aux->edad);
        printf("  Altura: %.2f\n", aux->altura);
        printf("  Sexo: %c\n", aux->sexo);
        printf("\n");
        aux++;
    }
}
