// Q119: Find the repeated element in an array using a single iteration.

#include <stdio.h>

int main() {
    int n, arr[100], freq[100001] = {0};

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] < 0 || arr[i] > 100000)
            return 0;

        if (freq[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }

        freq[arr[i]] = 1;
    }

    return 0;
}