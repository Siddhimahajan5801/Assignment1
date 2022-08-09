#include<stdio.h>
#include<string.h>

int main(){
    char a[50];
    int l;

    printf("Enter the string whose length is to be calculated:\n");
    gets(a);

    l=strlen(a);
    printf("Length of the string is %d",l);
    return 0;
}