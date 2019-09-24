// program that reads 10 integers from keywords and displays entered numbers on the screen

#include <stdio.h>
int main(){
    int number[10],i;
    printf("Enter 10 Elements of an Array:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&number[i]);
    }
    printf("Element of Array you entered are:\n");
    for(i=0;i<10;i++){
        printf("%d\n",number[i]);
    }
    return 0;
}