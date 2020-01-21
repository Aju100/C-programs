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
line(0,19,640,19);
line(0,20,640,20);
line(0,21,640,22);
}

void print_line2(){
line(0,465,640,465);
line(0,466,640,466);
line(0,467,640,467);
line(0,468,640,468);

}