/* Q105: Find majority element (> n/2 times). */
#include <stdio.h>

int main() {
    int n, cand = -1, count = 0;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(count == 0) { cand = arr[i]; count = 1; }
        else if(arr[i] == cand) count++;
        else count--;
    }
    // Verify
    count = 0;
    for(int i = 0; i < n; i++) if(arr[i] == cand) count++;
    
    if(count > n/2) printf("%d", cand);
    else printf("-1");
    return 0;
}
