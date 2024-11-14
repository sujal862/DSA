#include<stdio.h>

void merge(int a[], int n1, int b[], int n2, int res[]) {
    int i = 0, j = 0, k = 0;
    
    // Merge two sorted arrays
    while(i < n1 && j < n2) {
        if(a[i] < b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    
    // Copy remaining elements of a[] if any
    while(i < n1) {
        res[k++] = a[i++];
    }
    
    // Copy remaining elements of b[] if any
    while(j < n2) {
        res[k++] = b[j++];
    }
}

void mergeSort(int v[], int n) {
    if(n == 1) return;  // Base case
    
    int n1 = n / 2, n2 = n - n1;
    int a[n1], b[n2];
    
    // Split the array into two halves
    for(int i = 0; i < n1; i++) {
        a[i] = v[i];
    }
    for(int i = 0; i < n2; i++) {
        b[i] = v[n1 + i];
    }
    
    // Recursively sort both halves
    mergeSort(a, n1);
    mergeSort(b, n2);
    
    // Merge sorted halves into the original array
    merge(a, n1, b, n2, v);
}

int main() {
    int arr[] = {5, 1, 3, 0, 4, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the array before sorting
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform merge sort
    mergeSort(arr, n);

    // Print the array after sorting
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
