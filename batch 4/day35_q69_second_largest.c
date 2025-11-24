/* Q69: Find the second largest element in an array. */
#include <stdio.h>
#include <limits.h>

int main() {
    int n, max = INT_MIN, sec_max = INT_MIN;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) {
            sec_max = max;
            max = arr[i];
        } else if(arr[i] > sec_max && arr[i] != max) {
            sec_max = arr[i];
        }
    }
    printf("%d", sec_max);
    return 0;
}
