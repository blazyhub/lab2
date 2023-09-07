#include<stdio.h>
void main( )
{
char name[20];
float units, charge;
printf("Enter customer name\n");
scanf("%s", name);
printf("Enter the number of units consumed\n");
scanf("%f ", &units);
if ( units <= 200 )
{
charge = units*0.8+100 ;
}
if ( units > 200 && units <= 300)
{
charge = 260 + ( units – 200 ) * 0.9 ;
}
if ( units > 300)
{
charge = 350 + ( units – 300 ) * 1;
}
if ( charge > 400 )
{
    charge = charge + charge * 0.15 ;
}
printf("Total charge = %f\n", charge);
}