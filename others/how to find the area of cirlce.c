#include <stdio.h>
#include <stdlib.h>
#define PI 3.142

int main(){
    float area,radius;

    printf("Enter the radius of the circle:");
    scanf("%f",&radius);

    area=PI*radius*radius;

    printf("Area of the Circle is:%f",area );
    return 0;
}