/* Q112: Find maximum sum of contiguous subarray (Kadane's Algorithm). */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int max_so_far = -100000, max_ending_here = 0, all_neg = 1, max_elem = -100000;

    for(int i = 0; i < n; i++) {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        if (max_ending_here < 0)
            max_ending_here = 0;
        
        if(arr[i] > max_elem) max_elem = arr[i];
        if(arr[i] > 0) all_neg = 0;
    }

    if(all_neg) printf("%d", max_elem);
    else printf("%d", max_so_far);

    return 0;
}
