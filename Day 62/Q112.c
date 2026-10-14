// Q112: Find the maximum sum of a contiguous subarray using Kadane's algorithm.
#include <stdio.h>

int main() {
    int n, arr[100], sum, maxSum;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sum = maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        if (sum + arr[i] > arr[i]) {
            sum += arr[i];
        } else {
            sum = arr[i];
        }

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}