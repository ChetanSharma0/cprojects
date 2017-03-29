//********************** PROGRAM BY CHETAN SHARMa *************************//

# include "stdio.h"
# include "conio.h"
# include "graphics.h"
# include "dos.h"
void p1();
void p2();
void p3();
void p4();
void main()
{
int gd=DETECT,gm,x,y,area;
initgraph (&gd,&gm,"C:\\Turboc3\\BGI");
p1();
p2();
p3();
getch();
}

void p1()
{
setbkcolor (BLUE);
settextstyle(1,0,8);
 setcolor (WHITE);
outtextxy(67,205,"QUIZ CONTE$T");
delay (6000);
cleardevice();
}
void p2()
{
int gd=DETECT,gm,x,y,area;
char *buff;
initgraph (&gd,&gm,"C:\\Turboc3\\BGI");
setbkcolor (BLUE);
settextstyle(1,0,4);
setcolor (YELLOW);
outtextxy(100,30,"OVERVIEW ON QUIZ CONTEST");
settextstyle(5,0,1);
setcolor (YELLOW);
outtextxy(420,370,"chetan sharma...");

rectangle (560,20,70,75);
rectangle (550,30,80,70);
printf ("\n\n\n\n\n\n\n\n\n\n\t   HELLO FRIENDS THIS CONTEST HAS BEEN DESIGNED FOR YOUR KNO-\n\n\t   WELDGE TESTING I AM GLAD FOR U THAT YOU U ARE PLAYING \n\n\t   THIS QUIZ. IN THIS YOU HAVE YOU WILL GOT 10 QUES\n\n\t   IN  SEQUENCEG ORDER WHEN YOU WILL YOU GIVE A RIGHT ANSWER\n\n\t   YOU WILL GET 10 MARKS AND BY GIVING WRONG  ANSWER YOU WILL\n\n\t   GOT  \"-2\" MARKS.THIS  PROGRAM HAS  BEEN DESIGNDED IN \"C\" \n\n\t   PROGRAMMING LANGUAGE ");
   rectangle (560,400,70,120);

delay(22000);
cleardevice();
}

 void p3()
 {  int a,b,c,d,e,f,g,h,i,j,k,m,n,o,p,q,r,s,t,u,v;
settextstyle(1,0,1);
 setcolor (YELLOW);
outtextxy(150,420,"\"HURRY UP! it is just a begging\"");
setbkcolor (BLUE);
textcolor (RED);
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(100,80,"PHOTOSOP SOFTWARE HAS BEEN DEVLOPED BY");
settextstyle(1,0,7);
 setcolor (WHITE);
outtextxy(40,40,"A.");

settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,140,"1.ADOBE");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,200,"2.PETER NORTAN");
	    settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,260,"3.THOMAS KNOLL");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,320,"4.SUN MICROSYSTEM");
scanf ("%d",&k);
if (k==3)
{
a=10; }
else
{
a=-2;
settextstyle(1,0,8);
 setcolor (RED);
outtextxy(150,180,"WRONG !");
}

  delay (5000);
    cleardevice();
settextstyle(1,0,1);
 setcolor (YELLOW);
outtextxy(150,420,"\"go ahead dont't be panic\"");
setbkcolor (BLUE);
textcolor (RED);
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(100,80,"HIGHEST USERS OF INTERNET AVIALABLE IN");
settextstyle(1,0,7);
 setcolor (WHITE);
outtextxy(40,40,"B.");

settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,140,"1.CHINA");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,200,"2.CANADA");
	    settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,260,"3.JAPAN");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,320,"4.SWEDEN");
scanf ("%d",&m);
if (m==4)
{
b=10; }
else
{
b=-2;
settextstyle(1,0,8);
 setcolor (RED);
outtextxy(150,180,"WRONG !");

}
  delay (5000);
    cleardevice();

 settextstyle(1,0,1);
 setcolor (YELLOW);
outtextxy(150,420,"\"oh my god it's now master stroke\"");
setbkcolor (BLUE);
textcolor (RED);
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(100,80,"FIRST  MICROPROCESSOR DEVLOPED UNDER");
settextstyle(1,0,7);
 setcolor (WHITE);
outtextxy(40,40,"C.");

settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,140,"1.APPLE");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,200,"2.INTEL");
	    settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,260,"3.IBM");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,320,"4.MICROSFT");
scanf ("%d",&n);
if (n==2)
{
c=10; }
else
{
c=-2;
settextstyle(1,0,8);
 setcolor (RED);
outtextxy(150,180,"WRONG !");

}

  delay (5000);
    cleardevice();
 settextstyle(1,0,1);
 setcolor (YELLOW);
outtextxy(150,420,"\"are you felling fed up hahh..\"");
setbkcolor (BLUE);
textcolor (RED);
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(100,80,"HP STANDS FOR");
settextstyle(1,0,7);
 setcolor (WHITE);
outtextxy(40,40,"D.");

settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,140,"1.HASWELL PUNCH");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,200,"2.HACKING PROGRAMS");
	    settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,260,"3.HEWLETT PACKWARD");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,320,"4.HUMAN PRE-INVESTIGATION");
scanf ("%d",&o);
if (o==3)
{d=10; }
else
{
d=-2;
settextstyle(1,0,8);
 setcolor (RED);
outtextxy(150,180,"WRONG !");

}

  delay (5000);
    cleardevice();
    settextstyle(1,0,1);
 setcolor (YELLOW);
outtextxy(150,420,"\"next time be careful\"");
setbkcolor (BLUE);
textcolor (RED);
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(100,80,"FIRST BROWSER IN KNOWN AS");
settextstyle(1,0,7);
 setcolor (WHITE);
outtextxy(40,40,"E.");

settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,140,"1.GOOGLE CHROME");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,200,"2.SAFARI");
	    settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,260,"3.OPERA");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,320,"4.MOSAIC");
  scanf ("%d",&p);
if (p==4)
{
e=10; }
else
{
e=-2;
settextstyle(1,0,8);
 setcolor (RED);
outtextxy(150,180,"WRONG !");

}

  delay (5000);
    cleardevice();
settextstyle(1,0,1);
 setcolor (YELLOW);
outtextxy(150,420,"\"ques are not difficilt jst for me not for u\"");
setbkcolor (BLUE);
textcolor (RED);
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(100,80,"NOTEPAD FILE IS ALSO KNOWN AS");
settextstyle(1,0,7);
 setcolor (WHITE);
outtextxy(40,40,"F.");

settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,140,"1.PLAIN FILE");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,200,"2.FLAT FILE");
	    settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,260,"3.BINARY FILE");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,320,"4.MACHINE FILE");
 scanf ("%d",&q);
if (q==2)
{
f=10; }
else
{
f=-2;
settextstyle(1,0,8);
 setcolor (RED);
outtextxy(150,180,"WRONG !");

}

  delay (5000);
    cleardevice();
settextstyle(1,0,1);
 setcolor (YELLOW);
outtextxy(150,420,"\"HURRY UP! YOU ARE VERY SLOW\"");
setbkcolor (BLUE);
textcolor (RED);
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(100,80,"\"C\"  LANGUAGE DEVLOPED IN WHICH YEAR");
settextstyle(1,0,7);
 setcolor (WHITE);
outtextxy(40,40,"G.");

settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,140,"1.1975");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,200,"2.1965");
	    settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,260,"3.1972");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,320,"4.1977");
 scanf ("%d",&r);
if (r==3)
{
g=10; }
else
{
g=-2;
settextstyle(1,0,8);
 setcolor (RED);
outtextxy(150,180,"WRONG !");

}

  delay (5000);
    cleardevice();

 settextstyle(1,0,1);
 setcolor (YELLOW);
outtextxy(150,420,"\"end is just near \"");
setbkcolor (BLUE);
textcolor (RED);
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(100,80,"MMC STANDS FOR");
settextstyle(1,0,7);
 setcolor (WHITE);
outtextxy(40,40,"H.");

settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,140,"1.MICROSOFT MANAGMENT CONSOLE");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,200,"2.MICROSOFT MANAGING CONSOLE");
	    settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,260,"3.MICROSOFT MOBILE CONSOLE");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,320,"4.MICROSOFT MOBILE COMPANY");
 scanf ("%d",&s);
if (s==1)
{
h=10; }
else
{
h=-2;
settextstyle(1,0,8);
 setcolor (RED);
outtextxy(150,180,"WRONG !");

}

  delay (5000);
    cleardevice();
 settextstyle(1,0,1);
 setcolor (YELLOW);
outtextxy(150,420,"\"go ahead!\"");
setbkcolor (BLUE);
textcolor (RED);
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(100,80,"JAVA WAS DEVLOPED BY");
settextstyle(1,0,7);
 setcolor (WHITE);
outtextxy(40,40,"I.");

settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,140,"1.PETER NORTAN");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,200,"2.MICROSOFT CORPORATION");
	    settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,260,"3.PETER THOMSON");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,320,"4.JAMES GOSLING");
     scanf ("%d",&t);
if (t==4)
{
i=10; }
else
{

i=-2;
settextstyle(1,0,8);
 setcolor (RED);
outtextxy(150,180,"WRONG !");

}

  delay (5000);
    cleardevice();
    settextstyle(1,0,1);
 setcolor (YELLOW);
outtextxy(150,420,"\"be happy now qiiz is over\"");
setbkcolor (BLUE);
textcolor (RED);
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(100,80,"THIS QUIZ QUESTINS WAS DEVLOPED BY");
settextstyle(1,0,7);
 setcolor (WHITE);
outtextxy(40,40,"j.");

settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,140,"1.CHARLES BABBAGE");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,200,"2.CHETAN SHARMA");
	    settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,260,"3.ALBERT EINSTEIN");
settextstyle(1,0,3);
 setcolor (WHITE);
outtextxy(80,320,"4.MANY PEOPLES");

  scanf ("%d",&u);
if (u==4)
{
j=10; }
else
{
j=-2;
settextstyle(1,0,8);
 setcolor (RED);
outtextxy(150,180,"WRONG !");
}
v=(a+b+c+d+e+f+g+h+i+j);
printf ("\n\n\tYOUR TOATAL  MARKS IS= %d OUT OF 100",v);

  delay (5000);
    cleardevice();
setbkcolor (BLUE);
settextstyle(1,0,6);
 setcolor (YELLOW);
outtextxy(95,230,"TRY NEXT TIME !");

delay (10000);
cleardevice();



  }