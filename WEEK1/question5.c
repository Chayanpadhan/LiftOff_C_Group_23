#include<stdio.h>
int main(){
    float r;
    printf("Enter the radius of circle\n");
    scanf("%f",& r);
    float d,c,a;
    printf("Diameter of circle is %f:\n",2*r);
    printf("Area  of circle is %f:\n",3.14*r*r);
    printf("Circumference of circle is %f:\n",2*3.14*r);
    return 0;

}