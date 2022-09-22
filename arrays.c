#include <stdio.h>
#include <stdlib.h>

int rand_between_lo_hi(int lo,int hi) {
  return (rand() % (hi-lo)+1) + lo;
}


void make_random_array(int a[], int size,int lo, int hi) {
  // int a[];
  // int size = atoi(argv[1]);
  for (int i = 0; i < size; i++) {
    a[i] = rand_between_lo_hi(lo,hi);
  }
}

void print_array(int a[], int a_size) {
  printf("[ ");
  for (int i = 0; i < a_size; i++) {
    printf("%d ", a[i]);
  }
  printf(" ]");
  printf("\n");
}
