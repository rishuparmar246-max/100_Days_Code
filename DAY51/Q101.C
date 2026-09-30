#include <stdio.h>

int firstOccurrence(int nums[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int lastOccurrence(int nums[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            left = mid + 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

void printFirstAndLast(int nums[], int n, int target) {
    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    if (first == -1 || last == -1) {
        printf("-1,-1\n");
    } else {
        printf("%d,%d\n", first, last);
    }
}

int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nTarget: %d\n", target);
    printf("First and last occurrence: ");
    printFirstAndLast(nums, n, target);

    return 0;
}
