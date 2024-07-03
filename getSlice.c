#include<stdio.h>
//Function named "SLICE" and giving a sliced string in the output.
void slice(char str[], int n, int m);
int main(){
    int n,m;
    printf("Kindly enter the string from which you want to take a slice off:->>\t");
    char str[50];
    scanf("%s", str);
//Prompt the user to give us the values of n and m so that he/she could get the sliced string from index n to index m.
    printf("enter n:->>\t");
    scanf("%d", &n);
    printf("enter m:->>\t");
    scanf("%d", &m);

    slice(str, n, m);
}
void slice(char str[], int n, int m){
    char newstr[50];
    int j=0;
    for(int i=n; i<=m; i++, j++){
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    printf("YOUR DESIRED SLICE IS:->>\t");
    puts(newstr);
}