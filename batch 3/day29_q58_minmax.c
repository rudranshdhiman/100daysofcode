/* Q58: Find the maximum and minimum element in an array. */
#include <stdio.h>

int main() {
    int n, max, min;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(i == 0) { max = arr[i]; min = arr[i]; }
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Max=%d, Min=%d", max, min);
    return 0;
}
