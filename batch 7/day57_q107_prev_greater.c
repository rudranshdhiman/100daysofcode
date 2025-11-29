/* Q107: Find previous greater element for each element. */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    for(int i = 0; i < n; i++) {
        int prev = -1;
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if(i < n - 1) printf(", ");
    }
    return 0;
}
