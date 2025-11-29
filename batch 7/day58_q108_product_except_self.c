/* Q108: Array answer where answer[i] is product of all elements except nums[i]. */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100], res[100];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    for(int i = 0; i < n; i++) {
        int prod = 1;
        for(int j = 0; j < n; j++) {
            if(i != j) prod *= arr[j];
        }
        printf("%d ", prod);
    }
    return 0;
}
