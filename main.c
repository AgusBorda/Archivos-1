#include <stdio.h>
#include <stdlib.h>



int main()
{
    ///escribir un archivo
/*FILE * archivo = fopen("agustin.txt", "w"); /// R -> leer, no crea si no existe
                                            ///W -> escritura, si el archivo no existe lo crea y lo escribe, borra lo nuevo y
                                            ///escribe sobre. A-> Escribo y no pierdo lo anterior
fprintf(archivo,"Boca es el mas grande");   ///Se escribe fprintf se lee fscanf-fgets


fclose(archivo);/*///Siempre cerrar el archivo

FILE * archivo = fopen("lectura.txt", "r");
char texto[100]="";
fgets(texto,100,archivo);  ///FGETS lee linea por linea el archivo, lee esta que encuentra un salto de linea /0

fprintf("lol %s", texto);  ///muestro en la consola lo que esta escrito en el texto

fclose(archivo);

    return 0;
}
