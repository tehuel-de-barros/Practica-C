#include <stdlib.h>
#include "arrays.h"

int main(int argc, char const *argv[]) {
  // int a_size = atoi(argv[1]);
  int a_size = atoi(argv[1]);

  int lo = atoi(argv[2]);
  int hi = atoi(argv[3]);
  srand(atoi(argv[4]));
  int a[a_size];
  make_random_array(a, a_size, lo, hi);
  // int result = rand_between_lo_hi(lo, hi);
  print_array(a,a_size);
  return 0;
}
