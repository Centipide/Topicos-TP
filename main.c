#include "funciones.h"

int main()
{
    int cod;
    //cod = ReservarMemoria();
    //cod = ReservarMemoriaIndef();
    cod = ReservarStruct();

    if (cod==ERROR)
        printf("\nError, espacio de memoria lleno");
    else if (cod ==PROHIBIDO)
        printf("\nError, se ha ingresado un numero prohibido");
}
