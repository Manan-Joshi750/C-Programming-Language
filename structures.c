#include<stdio.h>
//PROGRAM TO STORE THE DATA OF THREE STUDENTS (roll number, name, cgpa).
//UNDERSTANDING THE CONCEPT OF STRUCTURES.
struct student{
    int roll;
    float cgpa;
    char name[50];
};
int main(){
    struct student s1;
    struct student s2;
    struct student s3;

    printf("Enter the roll numbers of three students:\n");
    scanf("%d%d%d", &s1.roll, &s2.roll, &s3.roll);
    printf("Enter the cgpa of three students:\n");
    scanf("%f%f%f", &s1.cgpa, &s2.cgpa, &s3.cgpa);
    printf("Enter the names of three students:\n");

    getchar(); // Consume the newline character left in the input buffer(VERY IMPORTANT LINE).
    // Read names with spaces using fgets
    fgets(s1.name, 50, stdin);
    fgets(s2.name, 50, stdin);
    fgets(s3.name, 50, stdin);
    printf("SO, HERE ARE THE DETAILS OF THE THREE STUDENTS :\n");

    printf("student roll number : %d\n", s1.roll);
    printf("student cgpa : %f\n", s1.cgpa);
    printf("student name : %s\n", s1.name);
    
    printf("student roll number : %d\n", s2.roll);
    printf("student cgpa : %f\n", s2.cgpa);
    printf("student name : %s\n", s2.name);

    printf("student roll number : %d\n", s3.roll);
    printf("student cgpa : %f\n", s3.cgpa);
    printf("student name : %s\n", s3.name);

    return 0;
}
