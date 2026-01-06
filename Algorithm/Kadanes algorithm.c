#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int maxSum, currSum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    maxSum = arr[0];
    currSum = arr[0];
    for (i = 1; i < n; i++) {
        if (currSum + arr[i] > arr[i])
            currSum = currSum + arr[i];
        else
            currSum = arr[i];
        if (currSum > maxSum)
            maxSum = currSum;
    }
    printf("Maximum subarray sum = %d", maxSum);
    return 0;
}
