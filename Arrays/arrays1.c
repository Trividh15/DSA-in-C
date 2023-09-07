//Que1} Find the largest element of the array

//Approach 1: Brute Force -> Using Sorting

//Appoach 2: Optimal Method-> Using loop

#include <stdio.h>

int main() {
  int arr[] = {1,2,3,15,31,12,22,8,9,10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int max = arr[0];
  int temp;

  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      temp = max;
      max = arr[i];
      arr[i] = temp;
    }
  }

  printf("The largest element of the array is: %d\n", max);
  return 0;
}
