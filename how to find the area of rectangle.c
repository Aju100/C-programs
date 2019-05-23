#include <stdio.h>
#include <stdlib.h>
#define PI 3.142

int main(){
    int length,breadth;
    float area;
    printf("Enter the Lenght of Rectangle:",length );
    scanf("%d",&length);

    printf("Enter the breadth of Rectangle:",breadth);
    scanf("%d",&breadth);

    area=length*breadth;
    printf("Area of the Rectangle is:%f",area);
    return 0;
}