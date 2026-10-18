// Q116: Find two indices whose elements add up to the target.

#include <stdio.h>

int main() {
    int n, nums[100], target;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
        return 0;

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1");

    return 0;
}