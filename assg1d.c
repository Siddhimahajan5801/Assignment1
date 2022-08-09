#include<stdio.h>

int main(){
    int r;
    float a;
    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
     
     a=3.14*r*r;
    printf("\"Area of circle is %.2f having the radius %d\" \n",a,r);
    return 0;
}