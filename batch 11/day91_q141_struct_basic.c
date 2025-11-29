/* Q141: Define structure Student and print data. */
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    // Simulating input
    sprintf(s.name, "Asha");
    s.roll = 101;
    s.marks = 90;
    
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);
    return 0;
}
