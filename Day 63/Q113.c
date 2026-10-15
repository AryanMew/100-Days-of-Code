// Q113: Find the kth smallest element in an integer array.
#include <stdio.h>

int main() {
    int n, k, arr[100], temp;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k < 1 || k > n)
        return 0;

    for (int i = 0; i < k; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("%d", arr[k - 1]);

    return 0;
}