// Q110: Find the maximum element in each subarray of size k.

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
        while (front <= rear && dq[front] <= i - k)
            front++;

        while (front <= rear && arr[dq[rear]] <= arr[i])
            rear--;

        dq[++rear] = i;

        if (i >= k - 1)
            printf("%d%s", arr[dq[front]], i == n - 1 ? "" : " ");
    }

    return 0;
}
