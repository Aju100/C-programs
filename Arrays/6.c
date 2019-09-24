// prorgam to read 10 numbers and reorders them in ascending order using function
#include <stdio.h>
void sorting(){
    int num[10],i,j,temp,max,min;
    printf("Enter the 10 elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }

    printf("The unsorted array:\n");
    for(i=0;i<10;i++){
        printf("%d\t",num[i]);
    }

    for(i=0;i<10;++i){
        for(j=i+1;j<10;++j){
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("\nThe sorted array:\n");
    for(i=0;i<10;++i){
        printf("%d\t",num[i]);
    }
}

int main(){
    sorting();
    return 0;
}
