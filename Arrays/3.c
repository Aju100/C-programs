// program that asks suers to enter 10 number,read them into array, find the sum,product,average and maximum of all number and prints them

#include <stdio.h>
int main(){
    int num[10],sum=0,pro=0,max,i;
    float avg;
    printf("Enter the 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++){
        sum=sum+num[i];
        avg=sum/10;
        pro=pro*num[i];
    }
    printf("Sun:%d\n",sum);
    printf("Average:%.2f\n",avg);
    printf("Product:%d\n",pro);
    max=num[0];
    for(i=0;i<10;i++){
        if(max<num[i]){
            max=num[i];
        }
    }
    printf("Maximum Number:%d\n",max);
    return 0;
}