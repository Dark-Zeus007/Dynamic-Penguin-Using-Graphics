#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

//legs
void leg1front(int i)
{
line(580-i,320,595-i,323);    
line(595-i,323,530-i,390);    
line(530-i,390,514-i,385);    
line(514-i,385,580-i,320);    
line(525-i,372,525-i,382);    
line(525-i,382,455-i,382);    
line(455-i,382,455-i,372);    
line(455-i,372,525-i,372);    
circle(582-i,327,3);        
circle(520-i,377,3);        
}

void leg1behind(int i)
{
line(580-i,320,595-i,323);    
line(595-i,323,580-i,390);    
line(580-i,390,564-i,385);    
line(564-i,385,580-i,320);    
line(575-i,372,575-i,382);    
line(575-i,382,505-i,382);    
line(505-i,382,505-i,372);    
line(505-i,372,575-i,372);    
circle(587-i,327,3);        
circle(570-i,377,3);        
}

void leg2front(int i)
{
line(650-i,325,665-i,322);    
line(665-i,322,625-i,385);    
line(625-i,385,610-i,390);    
line(610-i,390,650-i,325);    
line(622-i,375,622-i,385);    
line(622-i,385,552-i,385);    
line(552-i,385,552-i,392);    
line(552-i,392,622-i,392);    
circle(653-i,329,3);        
circle(615-i,382,3);        
}

void leg2behind(int i)
{
line(650-i,325,665-i,322);    
line(665-i,322,675-i,385);    
line(675-i,385,660-i,390);    
line(660-i,390,650-i,325);    
line(672-i,375,672-i,385);    
line(672-i,385,602-i,385);    
line(602-i,385,602-i,375);    
line(602-i,375,672-i,375);    
circle(659-i,329,3);        
circle(665-i,382,3);        
}

//hand
void handfront(int i)
{
line(620-i,180,670-i,180);    
line(620-i,180,630-i,110);    
line(630-i,110,655-i,110);    
line(655-i,110,670-i,180);    
circle(640-i,190,3);        
}
void handbehind(int i)
{
  line(620-i,180,670-i,180);    
  line(620-i,180,630-i,250);    
  line(630-i,250,655-i,250);    
  line(655-i,250,670-i,180);    
  circle(645-i,190,3);        
}

void main ()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

for(int i=0;i<400;i++)
{
line(0,390,600,390); //road

//body
line(590-i,140,670-i,140);    
line(590-i,140,540-i,310);    
line(670-i,140,720-i,310);    
line(540-i,310,590-i,370);    
line(590-i,370,660-i,370);    
line(660-i,370,720-i,310);    
line(575-i,150,680-i,150);    
line(575-i,150,585-i,90);    
line(585-i,90,610-i,75);     
line(610-i,75,665-i,90);     
line(665-i,90,680-i,150);    
circle(630-i,145,3);        
circle(600-i,95,4);        

//beak
line(581-i,110,581-i,125);    
line(581-i,125,530-i,125);
line(530-i,125,529-i,118);
line(529-i,118,581-i,110);

if(i%4==0)
  leg1front(i);
else
  leg1behind(i);

if(i%4==0)
  leg2front(i);
else
  leg2behind(i);

if (i%4==0)
  rectangle(581-i,133,529-i,131);
else
  rectangle(581-i,128,529-i,131);

if (i%4==0)
   handfront(i);
else
   handbehind(i);

setcolor(YELLOW);
delay(40);
cleardevice();
}
getch();
}