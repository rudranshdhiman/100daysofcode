/* Q22: Write a program to find profit or loss percentage given cost price and selling price. */
#include <stdio.h>

int main() {
    float cp, sp, p, l;
    scanf("%f %f", &cp, &sp);
    if(sp > cp) {
        p = sp - cp;
        printf("Profit %.0f%%", (p / cp) * 100);
    } else if(cp > sp) {
        l = cp - sp;
        printf("Loss %.0f%%", (l / cp) * 100);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}
