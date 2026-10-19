// Q117: Merge two sorted arrays into one sorted array.

#include <stdio.h>

int main() {
    int m, n, a[100], b[100], merged[200];
    int i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    if (m < 0 || m > 100)
        return 0;

    printf("Enter first array elements: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    if (n < 0 || n > 100)
        return 0;

    printf("Enter second array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    i = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < m) {
        merged[k++] = a[i++];
    }

    while (j < n) {
        merged[k++] = b[j++];
    }

    for (i = 0; i < k; i++) {
        printf("%d", merged[i]);
        if (i < k - 1)
            printf(" ");
    }

    return 0;
}