#include <stdio.h>
#include <stdlib.h>

void MinMax(int *data, int *mi, int *ma){
  *mi = data[0];
  *ma = data[0];

  for (int i=1; i<10; i++){
    if (data[i] < *mi) 
    *mi = data[i];
    else if(data[i] > *ma) //troca do if pelo else
    *ma = data [i];
  }
}

int main (void){
  int data [10] = {22, 9, 33, 28, 13, 17, 01, 44, 90, 11};
  int mi, ma;

  MinMax(data, &mi, &ma);
  printf("Valor minimo: %d\n", mi);
  printf("Valor maximo: %d\n", ma);

  exit(0);
}