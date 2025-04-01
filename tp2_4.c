//4) Desarrollar una aplicación en C que permita gestionar información sobre computadoras (PC) utilizando estructuras y funciones. La aplicación deberá generar datos aleatorios para un conjunto de PCs y luego implementar funciones para mostrar la información y encontrar características específicas.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

// a. Definición de la Estructura de Datos

struct compu
{
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
} typedef compu;


int main()
{
    srand(time(NULL));

    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
        "Pentium"};
        
    // b. Generación de Datos Aleatorios
    compu listaCompus[N];
    for (int i = 0; i < N; i++)
    {
        //listaCompus[i].tipo_cpu = malloc

        listaCompus[i].velocidad = 1 + rand()%3;
        listaCompus[i].anio = 2015 + rand()%(2024-2015);
        listaCompus[i].cantidad_nucleos = 1 + rand()%8;

        listaCompus[i].tipo_cpu = &(tipos[rand()%6][0]);
    }
    

}