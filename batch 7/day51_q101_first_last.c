/* Q101: Print first and last occurrence of target in sorted array. */
#include <stdio.h>

int main() {
    int n, target, first = -1, last = -1;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &target);
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            if(first == -1) first = i;
            last = i;
        }
    }
    printf("%d,%d", first, last);
    return 0;
}
