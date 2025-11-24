/* Q24: Write a program to calculate electricity bill based on units consumed. */
#include <stdio.h>

int main() {
    int u, bill = 0;
    scanf("%d", &u);
    if(u <= 100) bill = u * 5;
    else if(u <= 200) bill = 500 + (u - 100) * 7;
    else if(u <= 300) bill = 500 + 700 + (u - 200) * 10;
    else bill = 500 + 700 + 1000 + (u - 300) * 12;
    printf("Bill: ?%d", bill);
    return 0;
}
