//Tim Marder
//Systems Pd04
//Work#03 -- The old switcheroo
//2018-09-18

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int ray[10]; //original array
  int yar[10]; //second array (reversed of original)
  int * temp[10]; //temporary array to hold addresses of elements

  srand( time(0) ); //allows the rand() command to work properly
  for (int i = 0 ; i < 10 ; i++) { //populates wih random values
    ray[i] = rand();
  }
  ray[9] = 0; //sets the last value to 0

  printf("\n");
  printf("Values in ray: ");

  for (int i = 0 ; i < 10 ; i++) { //prints out the values of ray
    printf("%d ", ray[i]);
  }

  for (int i = 0 ; i < 10 ; i++) { //populates temporary array with addresses
    temp[i] = &ray[i];             //of elements from ray
  }
  for (int i = 0 ; i < 10 ; i++) { //fills the second array with the dereferenced
    yar[i] = *temp[9 - i];         //addresses of the original array in reversed
  }                                //order

  printf("\n");
  printf("Values in yar: ");

  for (int i = 0 ; i < 10 ; i++) { //prints out the values of yar
    printf("%d ", yar[i]);
  }

  printf("\n\n");

  return 0;

}
