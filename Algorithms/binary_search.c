#include <stdio.h>
#include <stdlib.h>

/**
 * Divide and conquer!
 *
 * Binary search works on sorted arrays. Binary search begins by comparing
 * the middle element of the array with the target value. If the target
 * value matches the middle element, its position in the array is returned.
 * If the target value is less than the middle element, the search continues
 * in the lower half of the array. If the target value is greater than the
 * middle element, the search continues in the upper half of the array.
 * By doing this, the algorithm eliminates the half in which the target
 * value cannot lie in each iteration.
 **/
int binary_search(int vet[], int key, int size) {
  int inf = 0;
  int sup = size - 1;
  int middle;

  while (inf <= sup) {
    middle = (inf + sup) / 2;
    if (key == vet[middle])
      return middle;
    if (key < vet[middle])
      sup = middle - 1;
    else
      inf = middle + 1;
  }
  return -1;
}

int main() {
  int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  printf("Result: %d\n", binary_search(numbers, 6, 10));

  return 0;
}
