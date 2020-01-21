#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <graphics.h>

void print_line1();
void print_line2();

int main(){
int gd = DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");

cleardevice();
setbkcolor(8);

print_line1();
print_line2();

getch();
return 0;
}

void print_line1(){
setcolor(WHITE);
line(0,18,640,18);
}

void print_line2(){
line(0,465,640,465);
}