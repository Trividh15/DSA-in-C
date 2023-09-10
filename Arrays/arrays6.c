//Write a Program to rotate an array by x elements]

#include <stdio.h>

int *rotate_by_x(int arr[], int n, int x, int temp[])
{
  x %= n;

  if (x == 0) {
    return arr;
  }

  for (int i = 0; i < x; i++) {
    temp[i] = arr[i];
  }

  for (int i = x; i < n; i++) {
    arr[i - x] = arr[i];
  }

  for (int j = n - x; j < n; j++) {
    arr[j] = temp[j - (n - x)];
  }

  return arr;
}

int main() {
  int arr[] = {6, 2, 3, 7, 1, 7, 3, 5, 8}, x;
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Enter the number of places you want to rotate the array by: ");
  scanf("%d", &x);

  int temp[x];

  int *rotated_arr = rotate_by_x(arr, n, x, temp);
  for (int i = 0; i < n; i++) {
    printf("%d  ", rotated_arr[i]);
  }
  printf("\n");
}
