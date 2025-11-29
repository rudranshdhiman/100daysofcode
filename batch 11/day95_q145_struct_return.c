/* Q145: Return structure from function. */
#include <stdio.h>

struct Student { char name[50]; int roll; int marks; };

struct Student getTopper(struct Student s[], int n) {
    int max = -1, idx = 0;
    for(int i=0; i<n; i++) {
        if(s[i].marks > max) { max = s[i].marks; idx = i; }
    }
    return s[idx];
}

int main() {
    struct Student s[] = {{"Riya", 101, 89}, {"Karan", 102, 96}, {"Meena", 103, 92}};
    struct Student top = getTopper(s, 3);
    printf("Top Student: %s | Roll: %d | Marks: %d", top.name, top.roll, top.marks);
    return 0;
}
