#include<stdio.h>
int main(){
    int a,b;
    printf("enter number\n");
    scanf("%d",& a);
    b=a%2;
    switch (b)
    {
    case 0:
    printf("number is even\n");

        
        break;
    
    default:
    printf("number is odd\n");
        break;
    }
    return 0;

}