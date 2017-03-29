# include "stdio.h"
# include "conio.h"
# include "graphics.h"
# include "dos.h"
void del();
void pass();
void ok();
void call();
void fle();
void opn();
void end();
void ch();
void main()
{
  int gd=DETECT,gm,x,y;
  initgraph (&gd,&gm,"C:\\Turboc3\\BGI");
  setbkcolor (BROWN);
  settextstyle (7,0,5);
  setcolor (YELLOW);
  outtextxy(70,180,"BANK MANAGMENT");
  settextstyle (7,0,5);
  setcolor (YELLOW);
  outtextxy(300,250,"SYSTEM. . .");
  delay (2000);
  clearviewport();
  call();
  pass();
  getch();
  }
  void call()
  {
     setbkcolor (BROWN);
     settextstyle (4,0,7);
     setcolor (YELLOW);
     outtextxy(10,20,"Features Of Software");
   setcolor(WHITE);

    circle(15,130,8);
    setfillstyle(1,YELLOW);
    floodfill(15,130,WHITE);
    setcolor(WHITE);
    circle(15,190,8);
    setfillstyle(1,YELLOW);
    floodfill(15,190,WHITE);
    setcolor(WHITE);
    circle(15,250,8);
    setfillstyle(1,YELLOW);
    floodfill(15,250,WHITE);
    settextstyle (1,0,3);
     setcolor (WHITE);
     outtextxy(36,110,"USER FRIENDLY !");
     settextstyle (1,0,3);
     setcolor (WHITE);
     outtextxy(36,170,"100 %SECURE !");
     settextstyle (1,0,3);
     setcolor (WHITE);
     outtextxy(36,230,"LOW MEMORY FILES !");
     settextstyle (1,0,3);
     setcolor (WHITE);
     outtextxy(36,290,"AUTOMATIC ARRANGMENT OF ALL FILES !");
     settextstyle (1,0,3);
     setcolor (WHITE);
     outtextxy(36,350,"EASY TO ACCESS !");
     settextstyle (1,0,3);
     setcolor (WHITE);
     outtextxy(36,410,"DEFAULT FILES COMATIBLE WTIH OTHER SOFTWARES !");
   setcolor(WHITE);
    setcolor(WHITE);
    circle(15,310,8);
    setfillstyle(1,YELLOW);
    floodfill(15,310,WHITE);
    setcolor(WHITE);
    circle(15,370,8);
    setfillstyle(1,YELLOW);
    floodfill(15,370,WHITE);
    setcolor(WHITE);
    circle(15,430,8);
    setfillstyle(1,YELLOW);
    floodfill(15,430,WHITE);
     delay (4000);
     cleardevice();
		  }
void pass()
{ char a;
setbkcolor (BLUE);
  settextstyle (7,0,5);
  setcolor (WHITE);
  outtextxy(70,180,"USER NAME:");
  settextstyle (7,0,5);
  setcolor (RED);
  outtextxy(370,180,"ADMIN");
  setcolor (WHITE);
  outtextxy(70,250,"PASSWORD:");
  settextstyle (7,0,5);
a=getch();
   if (a=='$')
   {
   ok();

   }
   else
   {
     settextstyle (1,0,9);
  setcolor (RED);
  outtextxy(130,180,"WRONG!");
   }

delay (1000);
cleardevice();
   }
  void  ok()
   {   char a;
   cleardevice();
setbkcolor (BLUE);
settextstyle (1,0,5);
  setcolor (YELLOW);
  outtextxy(10,30,"WHAT YOU WANT TO DO. . .");
  settextstyle (1,0,3);
  setcolor (WHITE);
  outtextxy(10,100,"1. PRESS \" N \" FOR NEW ACCOUNT.");
  settextstyle (1,0,3);
  setcolor (WHITE);
  outtextxy(10,200,"2. PRESS \" C \" FOR ANY CHANGES IN A ACCOUNT.");
  settextstyle (1,0,3);
  setcolor (WHITE);
  outtextxy(10,300,"3. PRESS \" I \" FOR FETCHING A INFORMATION OF USER.");
  settextstyle (1,0,3);
  setcolor (WHITE);
  outtextxy(10,400,"4. PRESS \" D \" FOR DELETING A USER ACCOUNT.");

a=getch();


if (a=='n')

   {
   cleardevice();
setbkcolor (BLUE);
   opn();
   cleardevice();
   end();

    }
    if (a=='c')

   {
   cleardevice();
setbkcolor (BLUE);
ch();
    clearviewport();
    end();

    }
     if (a=='d')

   {
   cleardevice();
setbkcolor (BLUE);
del();
  clearviewport();
  end();

    }

if (a=='i')

   {
   clearviewport();
   fle();
   clearviewport();
   end ();
    }

 }

  void fle()
  {


FILE *p;
int i;
char c;
char fname[]="okbye";
setbkcolor (BLUE);
printf ("\n\n\n\tENTER FILE NAME : ");
gets (fname);
clearviewport();
setbkcolor (BLUE);
settextstyle (1,0,3);
  setcolor (WHITE);
  outtextxy(195,40,"USER  INFORMATION");
    rectangle (445,30,180,70);
    rectangle (435,40,190,70);
    rectangle (20,410,280,100);
    rectangle (10,420,290,90);
	rectangle (620,310,430,150);
		rectangle (630,310,430,140);
		setlinestyle(SOLID_LINE,0,1);
     setcolor(WHITE);
     moveto(420,230);
     lineto(295,230);


     moveto(380,230);
     lineto(375,225);
     moveto(380,230);
     lineto(375,235);



p=fopen (&fname,"r");
while (c)
{
c=getc(p);
printf("%c",c);
if (c==EOF)
{
break;
 }
}
fclose(p);
getch();
}
void opn ()
{
FILE *fp;
char another='y';
char n[78],p[70];
 char age[80];
char  bs[80],d[80],q[90],i[79];
char fname[]="okbye";
setbkcolor (BLUE);
printf ("\n\n\n\tENTER FILE NAME : ");

gets (fname);
cleardevice();
fp=fopen (&fname,"w");
if (fp==NULL)
{
puts ("CANNOT OPEN");
exit();
}

settextstyle (1,0,3);
  setcolor (WHITE);
  outtextxy(30,20,"PLEASE FILL THE INFORMATION.");

while (another=='y')
{   printf ("\n\n\t\t  ENTER NAME OF USER : ");
gets (n);
printf ("\n\n\t\t  ENTER ADRESS OF USER : ");
gets (p);
printf ("\n\n\t\t  ENTER CONT.NO OF USER : ");
scanf ("%s",&age);
printf ("\n\n\t\t  ACCOUNT NO : ");
scanf ("%s",&bs);
printf ("\n\n\t\t  CR AMOUNT : ");
scanf ("%s",&q);
printf ("\n\n\t\t  DR AMOUNT : ");
scanf ("%s",&i);

printf ("\n\n\t\t  DATE OF ISSUE : ");
scanf ("%s",&d);
fprintf  (fp,"\n\n\n\n    NAME : %s\n\n\n\n    CONT.NO :  %s \t\t\t      CR AMOUNT : %s  \n\n\n\n    ACCOUNT NO :  %s \t\t\t\tDR AMOUNT : %s  \n\n\n\n    ADRESS : %s \n\n\n\n    DATE OF ISSUE : %s ",n,age,q,bs,i,p,d);

printf ("\n\n\tPLEASE PRESS \"E\"");
fflush (stdin);
another=getche();
 }

	fclose (fp);
	getch();

	}

     void ch()
     {
FILE *fp;
char fname[]="okbye";
char q[78],a[78],b[78],c[78],d[78],e[78],f[78],g[78],h[78],i[78],j[78],k[78],l[78],m[78],n[78],o[78],p[78],ff[78],r[78],s[78],t[78],u[78];
printf ("\n\n\n\tENTER FILE NAME : ");
gets (fname);
clearviewport();
setbkcolor (BLUE);
fp=fopen (&fname,"r");
fgets(q,90,fp);
fputs (q,fp);
fgets(a,90,fp);
fputs (a,fp);
fgets(b,90,fp);
fputs (b,fp);
fgets(c,90,fp);
fputs (c,fp);
puts (c);
fgets(d,90,fp);
fputs (d,fp);
fgets(e,90,fp);
fputs (e,fp);
fgets(f,90,fp);
fputs (f,fp);
fgets(g,90,fp);
fputs (g,fp);
fgets(h,90,fp);
fputs (h,fp);
puts (h);
fgets(i,90,fp);
fputs (i,fp);
puts (i);
fgets(j,90,fp);
fputs (j,fp);
puts (j);
fgets(k,90,fp);
fputs (k,fp);
puts (k);
fgets(l,90,fp);
fputs (l,fp);
puts (l);
fgets(m,90,fp);
fputs (m,fp);
puts (m);

fclose (fp);
getch();

     }








	void del()
	{
	       FILE *fp;
char another='y';
char n[78],p[70];
 char age[80];
char  bs[80];
char fname[]="okbye";
setbkcolor (BLUE);
printf ("\n\n\n\tENTER FILE NAME : ");

gets (fname);
cleardevice();
fp=fopen (&fname,"w+");
if (fp==NULL)
{
puts ("CANNOT OPEN");
exit();
}


printf ("\n\n\t\t PLEASE TYPE \"DELETE\" : ");
scanf ("%s",&bs);
fprintf  (fp,"\n\n\n\n    INFORMATION NOT EXIXTS  %s");

fflush (stdin);
another=getche();
	       }

  void end()
  {     cleardevice();
  setbkcolor (BROWN);
  settextstyle (1,0,3);
  setcolor (YELLOW);
  outtextxy (100,210,"\"THANKS ! FOR USING (C:S) SOFTWARE\"");
  delay (2000);

       }