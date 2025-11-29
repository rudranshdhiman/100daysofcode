/* Q121: Create info.txt and write name/age using fprintf. */
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;
    
    fp = fopen("info.txt", "w");
    if(fp == NULL) { printf("Error!"); return 1; }
    
    scanf("%s %d", name, &age);
    fprintf(fp, "Name: %s\nAge: %d", name, age);
    printf("File created successfully! Data written to info.txt");
    
    fclose(fp);
    return 0;
}
