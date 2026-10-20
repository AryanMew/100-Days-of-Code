// Q118: Find the missing number from an array containing integers from 0 to n.

#include <stdio.h>

int main() {
    int n, arr[100], missing = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        missing ^= i ^ arr[i];
    }

    missing ^= n;

    printf("%d", missing);

    return 0;
}