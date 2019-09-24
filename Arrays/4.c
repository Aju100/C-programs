// program to find the largest and smallest number using array
#include <stdio.h>
int main(){
    int num[10],i,max,min;
    printf("Enter the 10 Numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d\n",&num[i]);
    }
    max=num[0];
    min=num[0];
    for(i=0;i<10;i++){
        if(max<num[i]){
            max=num[i];
        }
        if(min>num[i]){
            min=num[i];
        }
    }
    printf("Maximum Number:%d\n",max);
    printf("Minimum Number:%d\n",min);
    return 0;
}