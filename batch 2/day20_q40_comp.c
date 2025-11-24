/* Q40: Write a program to find the 1?s complement of a binary number and print it. */
#include <stdio.h>
#include <string.h>

int main() {
    char b[100]; scanf("%s", b);
    for(int i=0; i<strlen(b); i++) {
        if(b[i]=='0') printf("1");
        else if(b[i]=='1') printf("0");
        else printf("%c", b[i]);
    }
    return 0;
}
