// without using strlen
#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    int i;
    printf("Enter your Name:");
    gets(name);
    while(name[i]!='\0'){
        i++;
    }
    printf("Length of string:%d\n",i);
}