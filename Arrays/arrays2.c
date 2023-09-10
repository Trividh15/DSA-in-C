//Find the second largest element of the array


//Approach 1: Brute Force


// #include <stdio.h>

// int main() {
//   int a[] = {1,2,4,7,7,5};
//   int n = sizeof(a) / sizeof(a[0]);

//   // Sorting the array
//   for (int i = 0; i < n - 1; i++) {
//     for (int j = 0; j < n - 1; j++) {
//       if (a[j] > a[j + 1]) {
//         int temp = a[j];
//         a[j] = a[j + 1];
//         a[j + 1] = temp;
//       }
//     }
//   }

//   int max = a[n - 1];

//   for (int i = n - 2; i >= 0; i--) {
//     if (a[i] != max) {
//       printf("The second largest element of the array is: %d\n", a[i]);
//       break;
//     }
//   }

//   return 0;
// }


//Approach 2: Better Code


// #include <stdio.h>

// int main() {
//   int a[] = {1,2,4,7,7,5};
//   int n = sizeof(a) / sizeof(a[0]);

//   int largest = a[0];
//   int slargest = -1;

//   for (int i = 1; i < n; i++) {
//     if (a[i] > largest) {
//       slargest = largest;
//       largest = a[i];
//     } else if (a[i] > slargest && a[i] != largest) {
//       slargest = a[i];
//     }
//   }

//   printf("The second largest element in the array is: %d\n", slargest);
//   return 0;
// }


//Approach 3: Optimal Code


// #include <stdio.h>

// int second_largest(int a[], int n) {
//   int slargest = -1;
//   int largest = a[0];

//   for (int i = 0; i < n; i++) {
//     if (a[i] > largest) {
//       slargest = largest;
//       largest = a[i];
//     } else if (a[i] < largest && a[i] > slargest) {
//       slargest = a[i];
//     }
//   }

//   return slargest;
// }

// int main() {
//   int a[] = {1,2,4,7,7,5};
//   int n = sizeof(a) / sizeof(a[0]);

//   int slargest = second_largest(a, n);

//   printf("The second largest element in the array is: %d\n", slargest);
//   return 0;
// }
