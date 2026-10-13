// Q111: Find the first negative integer in each subarray of size k.

#include <stdio.h>

int main() {
    int n, k, arr[100], dq[100];
    int front = 0, rear = -1;

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

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            dq[++rear] = i;

        while (front <= rear && dq[front] <= i - k)
            front++;

        if (i >= k - 1) {
            if (front <= rear)
                printf("%d", arr[dq[front]]);
            else
                printf("0");

            if (i < n - 1)
                printf(" ");
        }
    }

    return 0;
}
