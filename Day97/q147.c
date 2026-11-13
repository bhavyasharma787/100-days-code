/*
 * Q147 (Structures & Binary File Handling):
 * Store employee data in a binary file using fwrite() and read using fread().
 *
 * Sample Test Case:
 * Input:  Employee details (Name, ID, Salary)
 * Output: Displays employee data read from binary file
 */

#include <stdio.h>
#include <string.h>

struct Employee {
    char name[100];
    int id;
    double salary;
};

int main(void) {
    struct Employee emp;
    memset(&emp, 0, sizeof(emp));

    if (scanf("%99s %d %lf", emp.name, &emp.id, &emp.salary) != 3) {
        fprintf(stderr, "Invalid employee details.\n");
        return 1;
    }

    FILE *fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        fprintf(stderr, "Error: Could not open employee.dat for writing\n");
        return 1;
    }

    if (fwrite(&emp, sizeof(struct Employee), 1, fp) != 1) {
        fprintf(stderr, "Error writing to binary file.\n");
        fclose(fp);
        return 1;
    }
    fclose(fp);

    struct Employee read_emp;
    memset(&read_emp, 0, sizeof(read_emp));
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        fprintf(stderr, "Error: Could not open employee.dat for reading\n");
        return 1;
    }

    if (fread(&read_emp, sizeof(struct Employee), 1, fp) != 1) {
        fprintf(stderr, "Error reading from binary file.\n");
        fclose(fp);
        return 1;
    }
    fclose(fp);

    printf("Name: %s | ID: %d | Salary: %.2f\n",
           read_emp.name, read_emp.id, read_emp.salary);
    return 0;
}
