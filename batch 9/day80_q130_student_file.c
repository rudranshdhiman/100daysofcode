/* Q130: Store and read student records using file. */
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;
    
    // Write
    fp = fopen("students.txt", "w");
    fprintf(fp, "Asha 101 85\nRavi 102 92");
    fclose(fp);
    
    // Read
    fp = fopen("students.txt", "r");
    while(fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}
