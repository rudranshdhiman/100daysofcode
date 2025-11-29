/* Q142: Array of structures for 5 students. */
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];
    printf("Tabular list of all 5 students with their details");
    return 0;
}
