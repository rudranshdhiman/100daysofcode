/* Q63: Merge two arrays. */
#include <stdio.h>

int main() {
    int n1, n2, arr[200];
    scanf("%d", &n1);
    for(int i = 0; i < n1; i++) scanf("%d", &arr[i]);
    scanf("%d", &n2);
    for(int i = 0; i < n2; i++) scanf("%d", &arr[n1 + i]);
    for(int i = 0; i < n1 + n2; i++) printf("%d ", arr[i]);
    return 0;
}
