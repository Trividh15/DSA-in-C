//To check whether a given array is sorted or not

#include <stdio.h>
#include <stdbool.h>

bool is_sorted(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    if (arr[i] >= arr[i - 1])
    {
      
    }
    else
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int arr[] = {2, 4, 5, 3, 7};
  int n = sizeof(arr) / sizeof(arr[0]);

  if (is_sorted(arr, n))
  {
    printf("The array is sorted.");
  }
  else
  {
    printf("The array is not sorted.");
  }

  return 0;
}