#include<stdio.h>
//Program to show that one pointer can be subtracted from another as well as we can compare two pointers. 
int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u\n%u\ndifference = %u\n", ptr, _ptr, ptr - _ptr);
    _ptr = &age;
    printf("comparison = %u\n", ptr == _ptr);
    return 0;
}