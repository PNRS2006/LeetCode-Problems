#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int maximumProduct(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    int max1 = nums[numsSize - 1] * nums[numsSize - 2] * nums[numsSize - 3];
    int max2 = nums[0] * nums[1] * nums[numsSize - 1];
    return (max1 > max2) ? max1 : max2;
}
