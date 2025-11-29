/* Q132: Enum for traffic lights. */
#include <stdio.h>
#include <string.h>

enum Light {RED, YELLOW, GREEN};

int main() {
    char input[10];
    scanf("%s", input);
    
    if(strcmp(input, "RED") == 0) printf("Stop");
    else if(strcmp(input, "YELLOW") == 0) printf("Wait");
    else if(strcmp(input, "GREEN") == 0) printf("Go");
    
    return 0;
}
