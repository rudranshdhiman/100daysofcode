/* Q64: Find the digit that occurs the most times in an integer number. */
#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    scanf("%lld", &n);
    while(n > 0) {
        count[n % 10]++;
        n /= 10;
    }
    int maxCount = -1, digit = -1;
    for(int i = 0; i <= 9; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            digit = i;
        }
    }
    printf("%d", digit);
    return 0;
}
