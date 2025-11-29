/* Q102: Find ceil of x (smallest element >= x). */
#include <stdio.h>

int main() {
    int n, x, found = -1;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &x);
    
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            found = i;
            break;
        }
    }
    printf("%d", found);
    return 0;
}
