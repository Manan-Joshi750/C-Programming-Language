#include<stdio.h>
//PROGRAM TO INPUT STUDENT INFORMATION FROM THE USER AND THEN MAKE IT ENTER TO A FILE.
int main(){
    FILE *fptr;
    fptr = fopen("info.c", "w");
    char name[100];
    int age;
    float cgpa;
    printf("enter name :->>\t");
    scanf("%s", &name);
    printf("enter age :->>\t");
    scanf("%d", &age);
    printf("enter cgpa :->>\t");
    scanf("%f", &cgpa);

    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f\t", cgpa);

    printf("Student information has been entered in the file info.c .");
    fclose(fptr);
    return 0;
}