// programs to enter 10 different number and print them with array variables and their address
#include <stdio.h>
int main(){
    int num[10],i;
    printf("Enter the elements of Array:\n");
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++){
        printf("Value=%d\t Address=%p\n",num[i],&num[i]);
    }
    return 0;
}