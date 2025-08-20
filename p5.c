#include <stdio.h>

int maxNum(int *a,int *b,int*c){
    int max;
    max=*a;
    if((*b)>max){max=*b;}
    if((*c)>max){max=*c;}
    
    printf("The greatest number is %d",max);
    
return 0;
}

int main() {
    int a,b,c;
    printf("Ënter the value of a:");
    scanf("%d",&a);
    printf("Ënter the value of b:");
    scanf("%d",&b);
    printf("Ënter the value of c:");
    scanf("%d",&c);
    
    maxNum(&a,&b,&c);

    return 0;
}