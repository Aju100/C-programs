// using strlen

#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    int i;
    printf("Enter your Name:\n");
    gets(name);
    i = strlen(name);
    printf("Length of the string=%d\n",i);
    return 0;
}