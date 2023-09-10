//Write a program to rotate an array by 1 element

#include<stdio.h>

int* rotate(int arr[], int n, int temp)
{
 for(int i = 1; i<n; i++)
 {
  arr[i-1] = arr[i];
 }
 arr[n-1] = temp;
 return arr;
}

int main()
{
 int arr[] = {1,2,5,8,3,6,7};
 int n = sizeof(arr)/sizeof(arr[0]), temp = arr[0];

 int* rotated_arr = rotate(arr, n, temp);
 for(int i = 0; i<n; i++)
 {
  printf("%d  ", rotated_arr[i]);
 }
 return 0;
}