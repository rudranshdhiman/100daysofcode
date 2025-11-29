/* Q117: Merge two sorted arrays. */
#include <stdio.h>

int main() {
    int n1, n2, arr1[100], arr2[100], res[200];
    int i = 0, j = 0, k = 0;
    
    scanf("%d", &n1);
    for(int x = 0; x < n1; x++) scanf("%d", &arr1[x]);
    scanf("%d", &n2);
    for(int x = 0; x < n2; x++) scanf("%d", &arr2[x]);
    
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) res[k++] = arr1[i++];
        else res[k++] = arr2[j++];
    }
    while(i < n1) res[k++] = arr1[i++];
    while(j < n2) res[k++] = arr2[j++];
    
    for(int x = 0; x < k; x++) printf("%d ", res[x]);
    return 0;
}
