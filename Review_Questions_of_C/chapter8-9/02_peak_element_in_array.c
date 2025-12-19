#include <stdio.h>

int findPeak(int arr[], int n) {
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 1, 3, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = findPeak(arr, n);
    printf("Peak element index: %d\n", peakIndex);

    return 0;
}

