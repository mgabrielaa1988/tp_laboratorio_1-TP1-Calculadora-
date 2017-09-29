

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"
#include "validaciones.h"


char validarMenu (char opcionMenu)
{
   while ((int)opcionMenu<48 || (int)opcionMenu>57)
    {
        printf("\n  Opcion no valida...\n");
        printf("  Reingrese una opcion del menu: ");
        opcionMenu = getche();
    }

    return opcionMenu;
}


float validarCero (float numeroB)
{
    while (numeroB == 0)
         {
             printf("\n  No se puede dividir entre 0.");
             numeroB = pedirNumero();
         }
    return numeroB;
}


float validarEntPos (float numeroA)
{
    while (numeroA - (int)numeroA !=0 || numeroA <0)
        {
            printf("\n  Reingrese solo enteros positivos");
            numeroA = pedirNumero();
        }
        return numeroA;
}


