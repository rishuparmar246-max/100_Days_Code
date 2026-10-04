#include <stdio.h>

int main() {
    int n, nums[100];
    int totalSum = 0, leftSum = 0;
    int pivotIndex = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            pivotIndex = i;
            break;
        }

        leftSum += nums[i];
    }

    printf("%d\n", pivotIndex);

    return 0;
}