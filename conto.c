# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(int argc, char *argv[]) {
  int i;
  int n = atoi(argv[1]);
  int suma = 0;
  for(i = 0; i <= n; i++) {
    suma = suma + i;
  }
  printf("La suma de los %d primeros numeros es: %d", n, suma);
  return 0;
}
