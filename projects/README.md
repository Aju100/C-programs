### functions of graphics.h to draw horizontal , verticals axis, bars on screen
line<br>
setfillstyle<br>
bar


void line(int x1,int y1,int x2,int y2);<br>
it draws a line from (x1,y1) to (x2,y2)

void setfillstyle(int pattern,int color);<br>
sets the current fill pattern and fill color.

void bar(int xTopLeft,int yTopLeft,int xBottomRightmint yBottomRight);<br>

bar function draws a rectangle and fill it with current fill pattern and color.

xTopLeft	X coordinate of top left corner.
yTopLeft	Y coordinate of top left corner.
xBottomRight	X coordinate of bottom right corner.
yBottomRight	Y coordinate of bottom right corner.
