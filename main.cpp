#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <string.h>
#include<unistd.h>
int flag = 0;
const double PI = 3.141592654;
int i=0,k;
int carr=0;
int a=20,b=25,c=-100,d=25;
int e=-25,f=25,g=-5,h=5;
int ch1=-100,ch2=-95,ch3=-90,ch4=-80,ch5=-75,ch6=-70;
int w1=-93,w2=35,w3=-86,w4=-84,w5=-77;
int w21=-123,w22=35,w23=-116,w24=-114,w25=-107;
int chv1=27,chv2=32,chv3=37;
int ch21=-130,ch22=-125,ch23=-120,ch24=-110,ch25=-105,ch26=-100;//variable for car2
int chv21=27,chv22=32,chv23=37;
int ch31=-130,ch32=-125,ch33=-120,ch34=-110,ch35=-105,ch36=-100;//variable for car3
int chv31=27,chv32=32,chv33=37;
int ch41=-130,ch42=-125,ch43=-120,ch44=-110,ch45=-105,ch46=-100;//variable for car3
int chv41=27,chv42=32,chv43=37;
void *currentfont;
int xr=-95,yr=27;
int xf=-75,yf=27;
int xr2=-125,yr2=27;
int xf2=-105,yf2=27;
int xr3=-95,yr3=27;
int xf3=-75,yf3=27;

void reartyre(float radius,int xr,int yr)
{
    float theta;
//glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0,0,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{  theta=i*3.142/180;

 glVertex2f(xr+radius*cos(theta),yr+radius*sin(theta));


}
glEnd();
//glFlush();

}
void fronttyre(float radius,int xf,int yf)
{
    float theta;
//glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0,0,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{  theta=i*3.142/180;

 glVertex2f(xf+radius*cos(theta),yf+radius*sin(theta));


}
glEnd();
//glFlush();

}


void setFont(void *font)
{
currentfont = font;
}


void roadleft()
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-100,20);
    glVertex2f(-100,25);
    glVertex2f(-25,25);
    glVertex2f(-25,20);
    glEnd();
     glColor3f(0.21, 0.16, 0.10);
    glBegin(GL_POLYGON);
    glVertex2f(-80,15);
    glVertex2f(-80,25);
    glVertex2f(-25,25);
    glVertex2f(-25,15);
    glEnd();



}
void roadright()
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(25,20);
    glVertex2f(25,25);
    glVertex2f(100,25);
    glVertex2f(100,20);
    glEnd();
   glColor3f(0.21, 0.16, 0.10);
    glBegin(GL_POLYGON);
    glVertex2f(80,15);
    glVertex2f(80,25);
    glVertex2f(25,25);
    glVertex2f(25,15);
    glEnd();



}

void carTaker(int a1,int b1,int e1,int f1) //upper part of the car taker
{

    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(e1,a1);
    glVertex2f(e1,b1);
    glVertex2f(f1,b1);
    glVertex2f(f1,a1);
    glEnd();

}




void creteBackg()
{

    //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0.529,0.808,0.98);
    glBegin(GL_POLYGON);
    glVertex2f(-100,25);
    glVertex2f(-100,100);
    glVertex2f(100,100);
    glVertex2f(100,25);
    glEnd();




}
void piston(int c1,int d1,int g1,int h1)
{

     glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(g1,c1);
    glVertex2f(g1,d1);
    glVertex2f(h1,d1);
    glVertex2f(h1,c1);
    glEnd();
glFlush();

}
void underBack()
{
    glColor3f(0.9608, 0.9608, 0.9608);
    glBegin(GL_POLYGON);
    glVertex2f(-100,-100);
    glVertex2f(-100,25);
    glVertex2f(100,25);
    glVertex2f(100,-100);
    glEnd();

}
void sidewals()
{
    glColor3f(0.21, 0.16, 0.10);
    glBegin(GL_POLYGON);
    glVertex2f(-100,-100);
    glVertex2f(-100,25);
    glVertex2f(-80,25);
    glVertex2f(-80,-100);
    glEnd();
      glColor3f(0.21, 0.16, 0.10);
    glBegin(GL_POLYGON);
     glVertex2f(80,-100);
    glVertex2f(80,25);
    glVertex2f(100,25);
   glVertex2f(100,-100);

    glEnd();

}

void car()
{
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(w1,chv2);
    glVertex2f(ch3,w2);
    glVertex2f(w3,w2);
    glVertex2f(w3,chv2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(w4,chv2);
    glVertex2f(w4,w2);
    glVertex2f(ch4,w2);
    glVertex2f(w5,chv2);
    glEnd();
    glColor3f(0.40, 0.30, 0.70);
    glBegin(GL_POLYGON);
    glVertex2f(ch1,chv1);
    glVertex2f(ch1,chv2);
    glVertex2f(ch2,chv2);
    glVertex2f(ch3,chv3);
    glVertex2f(ch4,chv3);
    glVertex2f(ch5,chv2);
    glVertex2f(ch6,chv2);
    glVertex2f(ch6,chv1);
    glEnd();


    reartyre(2.0,xr,yr);
    fronttyre(2.0,xf,yf);
}
void car4()
{
    glColor3f(0.40, 0.30, 0.70);
    glBegin(GL_POLYGON);
    glVertex2f(ch41,chv41);
    glVertex2f(ch41,chv42);
    glVertex2f(ch42,chv42);
    glVertex2f(ch3,chv3);
    glVertex2f(ch44,chv43);
    glVertex2f(ch45,chv42);
    glVertex2f(ch46,chv42);
    glVertex2f(ch46,chv41);


    glEnd();

}
void car2()
{
      glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(w21,chv22);
    glVertex2f(ch23,w22);
    glVertex2f(w23,w22);
    glVertex2f(w23,chv22);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(w24,chv22);
    glVertex2f(w24,w22);
    glVertex2f(ch24,w22);
    glVertex2f(w25,chv22);
    glEnd();
    glColor3f(0.40, 0.80, 0.20);
    glBegin(GL_POLYGON);
    glVertex2f(ch21,chv21);
    glVertex2f(ch21,chv22);
    glVertex2f(ch22,chv22);
    glVertex2f(ch23,chv23);
    glVertex2f(ch24,chv23);
    glVertex2f(ch25,chv22);
    glVertex2f(ch26,chv22);
    glVertex2f(ch26,chv21);


    glEnd();
   reartyre(2.0,xr2,yr2);
    fronttyre(2.0,xf2,yf2);
}
void car3()
{
    glColor3f(0.40, 0.30, 0.70);
    glBegin(GL_POLYGON);
    glVertex2f(ch31,chv31);
    glVertex2f(ch31,chv32);
    glVertex2f(ch32,chv32);
    glVertex2f(ch33,chv33);
    glVertex2f(ch34,chv33);
    glVertex2f(ch35,chv32);
    glVertex2f(ch36,chv32);
    glVertex2f(ch36,chv31);


    glEnd();
//reartyre(2.0);
   //
   // fronttyre(2.0);
}
void slot()
{
     glColor3f(0.21, 0.16, 0.10);
    glBegin(GL_POLYGON);
     glVertex2f(-80,-15);
    glVertex2f(-80,-5);
    glVertex2f(-25,-5);
   glVertex2f(-25,-15);

    glEnd();
    glColor3f(0.21, 0.16, 0.10);
      glBegin(GL_POLYGON);
     glVertex2f(80,-15);
    glVertex2f(80,-5);
    glVertex2f(25,-5);
   glVertex2f(25,-15);
    glEnd();

    glColor3f(0.21, 0.16, 0.10);
      glBegin(GL_POLYGON);
     glVertex2f(-80,-45);
    glVertex2f(-80,-35);
    glVertex2f(-25,-35);
   glVertex2f(-25,-45);
    glEnd();
    glColor3f(0.21, 0.16, 0.10);
      glBegin(GL_POLYGON);
     glVertex2f(80,-45);
    glVertex2f(80,-35);
    glVertex2f(25,-35);
   glVertex2f(25,-45);
    glEnd();
    glColor3f(0.21, 0.16, 0.10);
      glBegin(GL_POLYGON);
     glVertex2f(80,-75);
    glVertex2f(80,-65);
    glVertex2f(25,-65);
   glVertex2f(25,-75);
    glEnd();
         glColor3f(0.21, 0.16, 0.10);

      glBegin(GL_POLYGON);
     glVertex2f(-80,-75);
    glVertex2f(-80,-65);
    glVertex2f(-25,-65);
   glVertex2f(-25,-75);
    glEnd();

}

void drawstring(float x, float y, float z,const char *string)
{
char *c;
int len = (int)strlen(string);
int i;
glRasterPos3f(x, y, z);
/*for(c=string;*c!='\0';c++)
{
glColor3f(0.0,0.0,0.0);
glutBitmapCharacter(currentfont,*c);
}*/
for (i = 0; i < len; i++)
{
glColor3f(0.0, 0.0, 0.0);
glutBitmapCharacter(currentfont, string[i]);
}
}

void frontscreen(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0, 1);
	drawstring((-5) - 50, 90.0, 0.0, "MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING");
	glColor3f(0.7, 0, 1);
	drawstring((-2) - 50, 82, 0.0, "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
	glColor3f(1, 0.5, 0);
	drawstring(25 - 50, 70, 0.0, "A MINI PROJECT ON");
	glColor3f(1, 0, 0);
	drawstring((0) - 50, 60, 0.0, "SIMULATION OF AUTOMATED CAR PARKING SYSTEM");
	glColor3f(1, 0.5, 0);
	drawstring((-20) - 50, 50, 0.0, "BY:");
	glColor3f(01, 1, 1);
	drawstring((-20) - 50, 40, 0.0, "AKASH SHIVARAM POOJARY   (4MT16CS005)");
	glColor3f(1, 01, 1);
	drawstring((-20) - 50, 34, 0.0, "HARIPRASAD      (4MT16CS031)");
	glColor3f(1, 0.5, 0);
	drawstring(82 - 50, 50, 0.0, "GUIDES:");
	glColor3f(0, 0.9, 1);
	drawstring(83 - 50, 40, 0.0, "Mr.PRASHANTH B S");
	glColor3f(0, 0.9, 1);
	drawstring(83 - 50, 34, 0.0, "Mrs. SHARANYA  BABU");
	glColor3f(1, 0.1, 1);
	drawstring(27 - 50, 10, 0.0, "!!PRESS ENTER TO START!!");
	glutSwapBuffers();
	glFlush();
}
void desc(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0, 1);
	drawstring((5) - 50, 85.0, 0.0, "STIMULATION OF AUTOMATED CAR PARKING SYSTEM(ACPS)");
	glColor3f(0.7, 0, 1);
	drawstring((30) - 50, 64, 0.0, "DESCRIPTION:");
	glColor3f(1, 0.5, 0);
	drawstring(35 - 50, 56, 0.0, "An automated car parking system is a mechanical system designed to minimize");
	glColor3f(1, 0.5, 0);
	drawstring((25) - 50, 48, 0.0,"the area and volume required for parking cars.It provides parking for cars on multiple");
	glColor3f(1, 0.5, 0);
	drawstring(25 - 50, 40, 0.0, "levels stacked vertically to maximize the number of parking spaces while minimizing ");
	glColor3f(1, 0.5, 0);
	drawstring((25) - 50, 32, 0.0, "land usage. The ACPS, however, utilizes a mechanical system to transport cars to and");
	glColor3f(1, 0.5, 0);
	drawstring(25 - 50, 24, 0.0, "from parking spaces rather than the driver in order to eliminate much of the space ");
	glColor3f(1, 0.5, 0);
	drawstring((25) - 50, 16, 0.0, "wasted in a multi-story parking garage.");
	glColor3f(1, 0.5, 0);
	drawstring(25 - 50, 8, 0.0, "In addition to the space saving, many ACPS designs provide a number of benefits:");
	glColor3f(1, 0.5, 0);
	drawstring(30 - 50, 0, 0.0, "1.The parked cars are more secure since there is no public access to parked cars.");
	glColor3f(1, 0.5, 0);
	drawstring(30 - 50, -8, 0.0, "2.Minor parking lot damage such as scrapes and dents are eliminated.");
	glColor3f(1, 0.5, 0);
	drawstring(30 - 50, -16, 0.0, "3.Drivers and passengers are safer not having to walk through parking lots.");
	glColor3f(1, 0.5, 0);
	drawstring(30 - 50, -24, 0.0, "4.Driving around in search of a parking space is eliminated, thereby reducing ");
	glColor3f(1, 0.5, 0);

	drawstring(33 - 50, -32, 0.0, "engine emissions.");
	glColor3f(1, 0.5, 0);
	drawstring(30 - 50, -40, 0.0, "5.Handicap access is improved.");
	glColor3f(1, 0.5, 0);
	drawstring(30 - 50, -48, 0.0, "6.The volume and visual impact of the parking structure is minimized.");
	glColor3f(1, 0.5, 0);
	drawstring(30 - 50, -56, 0.0, "7.Shorter construction time.");
	glColor3f(1, 0.5, 0);
	drawstring(30 - 50, -64, 0.0, "8.Only minimal ventilation and lighting systems are needed.");
	glColor3f(1, 0, 0);
	drawstring(55 - 50, -84, 0.0, "!!..PRESS '1' FOR STIMULATION..!!");
	glutSwapBuffers();
	glFlush();

}
void navi(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0, 1);
	drawstring((5) - 50, 85.0, 0.0, "STIMULATION OF AUTOMATED CAR PARKING SYSTEM(ACPS)");
	glColor3f(1, 0, 0);
	drawstring((25) - 50, 50, 0.0, "OPTIONS FOR STIMULATION");
	glColor3f(0.7, 0, 1);
	drawstring((25) - 50, 35, 0.0, "PRESS 'g' FOR PARKING SLOT VIEW");
	glColor3f(0.7, 0, 1);
	drawstring((25) - 50, 20, 0.0, "PRESS 'p' FOR PARKING");
	glColor3f(0.7, 0, 1);
	drawstring((25) - 50, 5, 0.0, "PRESS 'u' FOR UNPARKING");
	glColor3f(0.7, 0, 1);
	drawstring((25) - 50, -10, 0.0, "PRESS 'e' FOR EXIT");
   // glColor3f(0.7, 0, 1);
	//drawstring((30) - 50, 20, 0.0, "PRESS '2' FOR UNPARKING");

	glutSwapBuffers();
	glFlush();
}
void building()
{
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(-90,-100);
    glVertex2f(-90,64);
    glVertex2f(-26,64);
    glVertex2f(-26,-100);
    glEnd();





}

void windows(){


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(-82,33.25);
    glVertex2f(-82,53.75);
    glVertex2f(-66,53.75);
    glVertex2f(-66,33.25);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(-50,33.25);
    glVertex2f(-50,53.75);
    glVertex2f(-34,53.75);
    glVertex2f(-34,33.25);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(-82,-10.75);
    glVertex2f(-82,10.25);
    glVertex2f(-66,10.25);
    glVertex2f(-66,-10.75);
    glEnd();
     glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(-50,-10.75);
    glVertex2f(-50,10.25);
    glVertex2f(-34,10.25);
    glVertex2f(-34,-10.75);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(-82,-28.25);
    glVertex2f(-82,-48.75);
    glVertex2f(-66,-48.75);
    glVertex2f(-66,-28.25);
    glEnd();
     glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(-50,-28.25);
    glVertex2f(-50,-48.75);
    glVertex2f(-34,-48.75);
    glVertex2f(-34,-28.25);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(-50,-89.75);
    glVertex2f(-50,-69.25);
    glVertex2f(-34,-69.25);
    glVertex2f(-34,-89.75);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(-82,-89.75);
    glVertex2f(-82,-69.25);
    glVertex2f(-66,-69.25);
    glVertex2f(-66,-89.75);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-93,64);
    glVertex2f(-93,70);
    glVertex2f(-23,70);
    glVertex2f(-23,64);
    glEnd();
}
void texts1()
{
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(0, 0, 1);
drawstring((-20) - 50, 90.0, 0.0, "press p to park a car");
glColor3f(0, 0, 1);
drawstring((-20) - 50, 85.0, 0.0, "press u to un park a car");
    glutSwapBuffers();
}
void nocar()
{
    glClear(GL_COLOR_BUFFER_BIT);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(0, 0, 1);
drawstring((-20) - 50, 70.0, 0.0, "There is no car in the slot!!");

}


void displaycar2()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//texts1();
         car();
car2();
    creteBackg();
//texts2();
    slot();
roadleft();
carTaker(a,b,e,f);
roadright();

piston(c,d,g,h);
sidewals();
underBack();

glFlush();


}
void displaycar3()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//texts1();
         car();
car2();
car3();
    creteBackg();

    slot();
roadleft();
carTaker(a,b,e,f);
roadright();

piston(c,d,g,h);
sidewals();
underBack();

glFlush();


}
void navigarion()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}


void display1()
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//code to graphics


if(carr==0 and flag==5)
        nocar();
//texts1();
    car();
    car2();
    car3();
creteBackg();
    slot();
roadleft();
carTaker(a,b,e,f);
roadright();

piston(c,d,g,h);
sidewals();
underBack();

glFlush();

}
void movemm()//car1 to place the car inside with piston
{
    int i;
    for(i=-25;i<-5;i++)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        e--;
        f--;
        g--;
        h--;
        ch1--;
        ch2--;
        ch3--;
        ch4--;
        ch5--;
        ch6--;
        xf--;
        xr--;
        w1--;
        w3--;
        w4--;
        w5--;
        usleep(40009);
        display1();
    }

}
void movemm2()//car2 to place the car inside wih piston
{
    int i;
    for(i=-25;i<-5;i++)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        e--;
        f--;
        g--;
        h--;
        ch21--;
        ch22--;
        ch23--;
        ch24--;
        ch25--;
        ch26--;
        xf2--;
        xr2--;
        w21--;
        w23--;
        w24--;
        w25--;
        usleep(40009);
        displaycar2();
    }

}
void place()//to place the car at perticulr slot
{

    while(f!=-20)
    {
        i++;
        e--;
        f--;
        ch1--;
        ch2--;
        ch3--;
        ch4--;
        ch5--;
        ch6--;
        xf--;
        xr--;
        w1--;
        w3--;
        w4--;
        w5--;
        usleep(40009);glColor3f(0.7, 0, 1);
drawstring((30) - 50, 35, 0.0, "PRESS 'p' FOR PARKING");
        display1();
    }
    for(k=0;k<i;k++)
    {
        e++;
        f++;
        usleep(40009);
        display1();
    }
    while(f!=25)
    {
        ++e;
        ++f;
        ++g;
        ++h;
        //--chv1;
        //-chv2;
        //--chv3;
        usleep(40009);
        display1();

    }
    while(b!=25)
    {
        ++a;
        ++b;
        ++c;
        ++d;
        usleep(40009);
        display1();
    }

}
void place2()
{
i=0;
    while(f!=-20)
    {
        i++;
        e--;
        f--;
        ch21--;
        ch22--;
        ch23--;
        ch24--;
        ch25--;
        ch26--;
        xf2--;
        xr2--;
        w21--;
        w23--;
        w24--;
        w25--;
        usleep(40009);
        displaycar2();
    }
    for(k=0;k<i;k++)
    {
        e++;
        f++;
        usleep(40009);
       displaycar2();
    }
    while(f!=25)
    {
        ++e;
        ++f;
        ++g;
        ++h;
        //--chv1;
        //-chv2;
        //--chv3;
        usleep(40009);
        displaycar2();

    }
    while(b!=25)
    {
        ++a;
        ++b;
        ++c;
        ++d;
        usleep(40009);
        displaycar2();
    }

}
void movem()// car1 and piston to come dow near 1st slot
{
    int i;
    for(i=25;i>-5;i--)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        --a;
        --b;
        --c;
        --d;
        --chv1;
        --chv2;
        --chv3;
        --yf;
        --yr;
        --w2;
        usleep(40009);
        display1();

    }

}
void movem2()// car2 and piston to come dow near 2nd slot
{
    int i;
    for(i=55;i>-5;i--)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        --a;
        --b;
        --c;
        --d;
        --chv21;//texts1();
        --chv22;
        --chv23;
        --yf2;
        --yr2;
         --w22;
        usleep(40009);
        displaycar2();

    }

}
void car_to_pist()// car from out side to car taker
{
    while(ch6!=10)
    {
    ch1++;
    ch2++;
    ch3++;
    ch4++;
    ch5++;
    ch6++;
    xr++;
    xf++;
    w1++;
        w3++;
        w4++;
        w5++;
    usleep(50000);
    display1();
    }
}
void car2_to_pist()// car from out side to car taker
{
    while(ch26!=10)
    {
    ch21++;
    ch22++;
    ch23++;
    ch24++;
    ch25++;
    ch26++;
    xr2++;
    xf2++;
    w21++;
        w23++;
        w24++;
        w25++;
    usleep(50000);
    displaycar2();
    }
}
void take_out1()
{
    int i;
    for(i=25;i>-5;i--)//make car taker to move down
    {
        glClear(GL_COLOR_BUFFER_BIT);
        --a;
        --b;
        --c;
        --d;
        //--chv1;
        //--chv2;
        //--chv3;
        usleep(40009);
        display1();

    }
    for(i=-25;i<-5;i++)//make car taker to move left near car
    {
        glClear(GL_COLOR_BUFFER_BIT);
        e--;
        f--;
        g--;
        h--;
        //ch1--;
        //ch2--;
        //ch3--;
        //ch4--;
        //ch5--;
        //ch6--;
        usleep(40009);
        display1();
    }
    i=0;
    while(f!=-20)
    {
        i++;
        e--;
        f--;
        //ch1--;
        //ch2--;
        //ch3--;
       // ch4--;
       // ch5--;
       // ch6--;
        usleep(40009);
        display1();
    }
    for(k=0;k<i;k++)
    {
        e++;
        f++;
        ch1++;
        ch2++;
        ch3++;
        ch4++;
        ch5++;
        ch6++;
        xr++;
        xf++;
        w1++;
        w3++;
        w4++;
        w5++;
        usleep(40009);
        display1();
    }
    while(f!=25&&h!=5)
    {
        ++e;
        ++f;
        ++g;
        ++h;
        ch1++;
        ch2++;
        ch3++;
        ch4++;
        ch5++;
        ch6++;
        xr++;
        xf++;
        w1++;
        w3++;
        w4++;
        w5++;
        //++chv1;
        //++chv2;
        //++chv3;
        usleep(40009);
        display1();

    }
    while(b!=25)
    {
        ++a;
        ++b;
        ++c;
        ++d;
        ++chv1;
        ++chv2;
        ++chv3;
        ++yr;
        ++yf;
        ++w2;
        usleep(40009);
        display1();
    }
    while(ch1!=100)
    {
    ch1++;
    ch2++;
    ch3++;
    ch4++;
    ch5++;
    ch6++;
    xf++;
    xr++;
    w1++;
        w3++;
        w4++;
        w5++;
    usleep(50000);
    display1();
    }



}
/*void displayfirst()//main display()
{
    display1();


    take_out1();

}*/
void displayfirst()
{
    car_to_pist();
    movem();
    movemm();
    place();
}
void displaysecond()
{
    car2_to_pist();
    movem2();
    movemm2();
    place2();
}
void displayfirstun()
{
    if(carr!=0)
    {
        take_out1();
    }
    else{
        display1();
    }


}
//void disp()
//{
  //  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //mydisplay();
    //building();
    //windows();
    //building();
    //glFlush();
//}

void mydisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
if (flag == 0)
frontscreen();
if (flag == 1){
        desc();
windows();
    building();
    glFlush();
}
if (flag == 2){
            navi();

}
if (flag == 3){
   display1();

}
if (flag == 4){
            carr++;
    if(carr==1)
   displayfirst();
    else if(carr==2)
        displaysecond();
}
if(flag==5)
    {

        displayfirstun();
        carr--;

    }
    if(flag==6)
    {
        exit(0);
    }

}
void disp()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    mydisplay();
    //building();
    windows();
    building();
    glFlush();
}

void myKeyboardFunc(unsigned char key, int x, int y)
{
switch (key)
{
case 13:if (flag == 0){

flag = 1;
}
break;
    case '1':if (flag == 1){

flag=2;

}
break;

case 'g':if (flag == 2){

flag=3;

}
break;
case 'p':

flag=4;

break;
case 'u':

flag=5;
break;
case 'e':

flag=6;
break;
}
mydisplay();
}

void reshape(int w, int h)
{
glViewport(0, 0, w, h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, w, h, 0);
glMatrixMode(GL_MODELVIEW);
}

void myinit()
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glOrtho(-100.0, 100.0, -100.0, 100.0, -50.0, 50.0);
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize(1100,1100);
glutCreateWindow("Stimulation of Automated Car Parking");
glutDisplayFunc(mydisplay);
glutKeyboardFunc(myKeyboardFunc);
myinit();
glEnable(GL_DEPTH_TEST);
glutMainLoop();
}

