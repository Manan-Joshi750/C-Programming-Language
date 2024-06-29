#include<stdio.h>
//USE OF BREAK STATEMENT AND CONTINUE STATEMENT. 
int main(){
for(int i=1; i<=5; i++){
    if(i==3){
        break;
    }
    printf("%d\n", i);
}
printf("END\n");

for(int i=1; i<=5; i++){
    if(i==3){
        continue;
    }
    printf("%d\n", i);
}
return 0;
}

