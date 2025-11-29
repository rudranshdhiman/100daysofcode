/* Q148: Check if two structs are identical. */
#include <stdio.h>
#include <string.h>

struct Student { char name[50]; int roll; int marks; };

int main() {
    struct Student s1 = {"Asha", 101, 90};
    struct Student s2 = {"Asha", 101, 90};
    
    if(s1.roll == s2.roll && s1.marks == s2.marks && strcmp(s1.name, s2.name) == 0)
        printf("Same");
    else
        printf("Different");
    return 0;
}
