#include <stdio.h>
#include "archivo.h"

#define MAX_LENGTH_STRING 20

//Lo que hará este archivo main.c es visualizar el uso de archivo.h

int main(int argc, char* argv[]) {
  char cadena[MAX_LENGTH_STRING];
  cat_archivo("archivo.c");
  borrar_archivo("borrar.txt");
  generar_nombre_archivo(MAX_LENGTH_STRING,cadena); 
  printf("%s\n",cadena);
  return 0;
}
