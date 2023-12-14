/*
 * Este programa muestra como leer varias palabras del teclado (stdin)
 * Codigo tomado de: https://www.programiz.com/c-programming/c-strings
 *
 * Modificado por: John Sanabria - john.sanabria@correounivalle.edu.co
 * Fecha: 2021-02-26
 */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "leercadena.h"

int main(int argc, char *argv[]) {
  char comando[BUFSIZ];
  char **vector;
  int i;

  printf("Digite su comando: ");
  leer_de_teclado(BUFSIZ,comando);
  printf("Comando Usado: ");
  puts(comando);
  vector = de_cadena_a_vector(comando);
  i = 0;
  while (vector[i]) 
    printf("%s\n",vector[i++]);
  execvp(vector[0],vector); //Ejecuta el comando que el usuario mandó

  return 0;
}

