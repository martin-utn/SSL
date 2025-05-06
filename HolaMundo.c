#include <stdio.h>

int main() {
  
    printf("Hola Mundo\n");

 
    FILE *archivo = fopen("salida.txt", "w");  

    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    fprintf(archivo, "Hola Mundo\n");
    fclose(archivo);  
    return 0;
}