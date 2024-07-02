#include <stdio.h>
//PROGRAM TO STORE THE INFORMATION OF FIVE STUDENTS IN A TABLE LIKE STRUCTURE IN A FILE.
struct Student {
    char name[50];
    int age;
    float cgpa;
    char branch[50];
};
int main() {
    FILE *fptr;
    char filename[] = "student_info.c";
    // Sample student data(it is written with the help of the concept of arrays of structures and initialising structures).
    struct Student student_data[5] = {
    {"John Doe", 18, 9.5, "Information Technology"},
    {"Jane Smith", 19, 9.3, "Computer Science and Engineering"},
    {"Bob Johnson", 20, 9.1, "Electronics and Communication Engineering"},
    {"Alice Brown", 21, 8.4, "Electrical Engineering"},
    {"Eva Wilson", 22, 8.2, "Mechanical Engineering"}
};
    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    // Write student data to the file
    for (int i = 0; i < 5; i++) {
        fprintf(fptr, "Name: %s\n", student_data[i].name);
        fprintf(fptr, "Age: %d\n", student_data[i].age);
        fprintf(fptr, "CGPA: %.2f\n", student_data[i].cgpa);
        fprintf(fptr, "Branch: %s\n\n", student_data[i].branch);
    }
    fclose(fptr);
    printf("Student information has been saved to %s\n", filename);
    return 0;
}
