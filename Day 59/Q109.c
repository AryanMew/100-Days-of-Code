// Q109: Find the maximum sum of all subarrays of size k.

#include <stdio.h>

int main() {
    int n, k, arr[100], sum = 0, maxSum;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k < 1 || k > n)
        return 0;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    maxSum = sum;

    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);

    return 0;
}
