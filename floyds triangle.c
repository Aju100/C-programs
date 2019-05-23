#include <stdio.h>
#include <stdlib.h>
int main(){
    int x=1,y,z,w;

    printf("Choose Number of rows to creates:\n");
    scanf("%d",&w);

    for(y=1;y<=w;y++){
        for(z=1;z<=y;z++){
            printf("%d",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}