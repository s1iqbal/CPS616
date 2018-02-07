/*
1. Describe how one can implement each of the following operations on an array
so that the time it takes does not depend on the array’s size n.
a. Delete the ith element of an array (1 ≤ i ≤ n).
b. Delete the ith element of a sorted array (the remaining array has to stay
sorted, of course).
*/
#include <stdio.h>

int * delete(int *arr, int n) {


  int size = sizeof (arr) / sizeof (int);
  int difference = size - n;
  if (n < size && n > 1) {
    int i;
    for (i = difference; i < size; i++) {
    arr[i - 1] = arr[i];
    }
    return arr;
}

  else {
    printf("%s\n", "N is out of bound of array length.s" );
    return 0;
  }
}

int main() {
int arr[5] = {2,4,6,3,1};
int array[5] = delete(arr, 3);
printf("%s\n", "Hello world" );
return 0;
}
