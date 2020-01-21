/*
area of circle
*/

#include <stdio.h>

int main(int argc, char const *argv[]){
    int radius;
    float PI = 3.14,area;
    scanf("%d",&radius);
    area = PI * radius*radius;
    printf("\n %f",area);
    return 0;
}
