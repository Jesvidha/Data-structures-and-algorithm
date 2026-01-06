#include <stdio.h>
int main() {
    int n, k, i;
    int arr[100];
    int windowSum = 0, maxSum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter window size: ");
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    maxSum = windowSum;
    for (i = k; i < n; i++) {
        windowSum = windowSum + arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }
    printf("Maximum sum = %d", maxSum);
    return 0;
}
