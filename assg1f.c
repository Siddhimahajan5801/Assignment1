#include<stdio.h>
#include<string.h>

int main(){
    char a[50];

    printf("Enter user name:\n");
    gets(a);

printf("\"Hello, %s\"",a);
return 0;
}