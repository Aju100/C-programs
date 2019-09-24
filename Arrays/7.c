// program that accepts of marks of 48 student of csit first semester in C programming , display in descending order, also display topper and loser

#include <stdio.h>
void accept(){
    int i,j,num[50];
    printf("Enter the Marks obtained by 50 students in CSIT:\n");
    for(i=0;i<50;i++){
        scanf("%d\n",&num[i]);
    }
}
void descending(){
    int num[50],temp,max,min;
    for(int i=0;i<50;i++){
        for(int j=i+1;j<50;j++){
            if(num[i]<num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("The sorted marks in Descending orders are\n");
    for(int i=0;i<50;i++){
        printf("%d\t",num[i]);
    }

    max=num[0];
    min=num[0];
    for(int i=0;i<10;i++){
        if(max<num[i]){
            max=num[i];
        }
        if(min>num[i]){
            min=num[i];
        }
    }
    printf("Topper Marks:%d\n",max);
    printf("Loser Marks:%d\n",min);

}

int main(){
    accept();
    descending();
    return 0;
}