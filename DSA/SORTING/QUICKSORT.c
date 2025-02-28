#include <stdio.h>

int process(int *arr, int lb, int ub);

void quicksort(int *arr, int lb, int ub) {
    if (lb < ub) {
        int loc = process(arr, lb, ub);
        quicksort(arr, lb, loc - 1);
        quicksort(arr, loc + 1, ub);
    }
}

int process(int *arr, int lb, int ub) {
    int start = lb + 1;
    int end = ub;
    int pivot = arr[lb];

    while (start <= end) {
        while (start <= ub && arr[start] <= pivot) {
            start++;
        }
        while (end > lb && arr[end] > pivot) {
            end--;
        }
        if (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }

    int t = arr[lb];
    arr[lb] = arr[end];
    arr[end] = t;
    
    return end;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}