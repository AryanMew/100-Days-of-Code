// Q105: Write a program to take an integer array nums of size n, and print the majority element.
// The majority element is the element that appears strictly more than n/2 times.
// Print -1 if no such element exists.

#include <stdio.h>

int main(void)
{
    int n, i, j, count, majority = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++)
    {
        count = 0;

        for (j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
                count++;
        }

        if (count > n / 2)
        {
            majority = nums[i];
            break;
        }
    }

    printf("%d", majority);

    return 0;
}