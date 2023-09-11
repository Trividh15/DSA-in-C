// Write a Program to shift all the zeroes of an array to its end

// Approach1: Brute Force approach

#include <stdio.h>

int* move_zeroes(int arr[], int n) {
  int temp[100];
  int num_of_nonzero = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      temp[num_of_nonzero++] = arr[i];
    }
  }

  for (int i = 0; i < num_of_nonzero; i++) {
    arr[i] = temp[i];
  }

  for (int i = num_of_nonzero; i < n; i++) {
    arr[i] = 0;
  }

  return arr;
}

int main() {
  int arr[] = {1, 2, 0, 3, 5, 2, 0, 0, 5, 3, 8, 0, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  int* shifted_arr = move_zeroes(arr, n);
  printf("The array after zeroes are shifted to the end will be: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", shifted_arr[i]);
  }
  printf("\n");
}

// Approach2: Optimal Code approach

#include <stdio.h>
#include <stdlib.h>

// C programming laguage does not have an in-built function to swap values, therefore swap function is created so that it can be called in the loop repeatedly whenever the condition becomes true

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int *move_zeroes(int arr[], int n)
{
  int j = -1;

  // this for loop is to find the index of the first zero element
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      j = i;
      break;
    }
  }

  // This loop iterates through the array and swaps the zeroes with non-zeroes on the way to shift the zeroes to the end of the array
  for (int i = j + 1; i < n; i++)
  {
    if (arr[i] != 0)
    {
      swap(&arr[i], &arr[j]);
      j++;
    }
  }

  return arr;
}

int main()
{
  int arr[] = {1, 2, 0, 3, 5, 2, 0, 0, 5, 3, 8, 0, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  int *shifted_array = move_zeroes(arr, n);
  for (int i = 0; i < n; i++)
  {
    printf("%d ", shifted_array[i]);
  }
  printf("\n");
}
