/* Q143: Find student with highest marks. */
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[3] = {{"Ravi", 101, 95}, {"Sita", 102, 85}, {"Aman", 103, 88}};
    int max = 0, idx = 0;
    
    for(int i = 0; i < 3; i++) {
        if(s[i].marks > max) {
            max = s[i].marks;
            idx = i;
        }
    }
    printf("Topper: %s (Marks: %d)", s[idx].name, s[idx].marks);
    return 0;
}
