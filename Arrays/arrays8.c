// Two Sum Problem
#include<stdio.h>
//Brute Force Method
int main() {
    int target;
    printf("Enter the value of target\n");
    scanf("%d", &target);

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                continue;
            if (arr[i] + arr[j] == target) {
                printf("The target can be obtained by adding %d and %d\n", arr[i], arr[j]);
                return 0;
            }
        }
    }

    printf("No elements found in the array whose sum would be equal to target\n");
    return 0;
}

//--------------------------------------------------------------------------------------------------

//Optimal Approach

#include<stdio.h>
int main() {
    int target;
    printf("Enter the value of target\n");
    scanf("%d", &target);

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (i == j)
                continue;
            if (arr[i] + arr[j] == target) {
                printf("The target can be obtained by adding %d and %d\n", arr[i], arr[j]);
                return 0;
            }
        }
    }

    printf("No elements found in the array whose sum would be equal to target\n");
    return 0;
}

//-----------------------------------------------------------------------------------------------------------

//Better Approach using maps

// Better Solution using maps

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
    int target;
    scanf("%d", &target);

    int vec[] = {1, 2, 3, 4, 5};
    int vecSize = sizeof(vec) / sizeof(vec[0]);

    int* map = (int*)malloc(vecSize * sizeof(int));

    for (int i = 0; i < vecSize; i++) {
        int a = vec[i];
        int more = target - a;

        if (map[more] != 0) {
            printf("Elements Found!\n\n");
            break;
        }
        map[a] = i + 1;
    }

    free(map);

    if (map[0] == 0) {
        printf("No two elements found such that their sum is equal to the target\n");
    }

    return 0;
}

//-----------------------------------------------------------------------------------------------------------

//Better Approach without using maps

// Better solution without using map

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
    int arr[] = {2, 1, 3, 5, 4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    // Sorting the array
    qsort(arr, arrSize, sizeof(int), compare);

    int target;
    printf("Enter the value of target\n");
    scanf("%d", &target);

    int i = 0, j = arrSize - 1;

    while (i < j) {
        if (arr[i] + arr[j] == target) {
            printf("Elements Found\n\n");
            break;
        }
        if (arr[i] + arr[j] < target) {
            i++;
        } else {
            j--;
        }
    }

    if (i >= j) {
        printf("No two elements found such that their sum would be equal to target\n");
    }

    return 0;
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

//----------------------------------------------------------------------------------------------------


