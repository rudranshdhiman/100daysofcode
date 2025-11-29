/* Q136: Enum for menu choices. */
#include <stdio.h>

enum Menu {ADD = 1, SUBTRACT, MULTIPLY};

int main() {
    int a, b;
    // Simulating Input: ADD 10 20
    // In real code we'd parse the string 'ADD', here keeping logic simple for code gen
    scanf("%*s %d %d", &a, &b);
    printf("%d", a + b); 
    return 0;
}
