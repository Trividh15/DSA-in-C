//To remove the duplicate elements of an array

#include <stdio.h>

int removeduplicates(int arr[], int n) {
  int i = 0;
  for (int j = 0; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

int main() {
  int arr[] = {1, 1, 2, 2, 2, 3, 4, 5, 5, 6, 6,7};
  int n = sizeof(arr) / sizeof(arr[0]);

  int k = removeduplicates(arr, n);
  printf("The array after removing the duplicate elements from it is: \n");
  for (int i = 0; i < k; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}


//Note: C language does not have a data type "set", that is why we have only implemented the approach which does not require the use of sets. This code is the Optimal Code
