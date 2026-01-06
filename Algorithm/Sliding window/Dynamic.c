#include <stdio.h>
#include <limits.h>
int main() {
    int n, k, i;
    int arr[100];
    int start = 0, sum = 0;
    int minLen = INT_MAX;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter target sum K: ");
    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        sum += arr[i];   
        while (sum >= k) {
            if (i - start + 1 < minLen) {
                minLen = i - start + 1;
            }
            sum -= arr[start];  
            start++;
        }
    }
    if (minLen == INT_MAX)
        printf("No subarray found");
    else
        printf("Minimum length = %d", minLen);
    return 0;
}
