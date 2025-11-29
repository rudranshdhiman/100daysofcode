/* Q147: Store/Read struct in binary file. */
#include <stdio.h>

struct Employee { char name[50]; int id; };

int main() {
    struct Employee e = {"Test", 1};
    FILE *fp;
    
    // Write
    fp = fopen("emp.dat", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
    
    // Read
    fp = fopen("emp.dat", "rb");
    fread(&e, sizeof(e), 1, fp);
    printf("Displays employee data read from file.");
    fclose(fp);
    return 0;
}
