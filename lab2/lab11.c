#include<stdio.h>
#include<math.h>
void main( )
{
int i, n;
float a[10], *ptr, mean, stddev, variance=0, sum=0;
printf("Enter the size of the array\n");
scanf("%d", &n);
printf("Enter the array elements\n");
for (i=0; i<n; i++)
{
scanf("%f", &a[i]);
}
ptr=a;
for (i=0; i<n; i++)
{
sum=sum + *ptr;
ptr++;
}
mean = sum / n;
ptr = a;
for (i=0; i<n; i++)
{
variance = variance + pow(( *ptr - mean ) , 2 );
ptr++;
}
stddev = sqrt(variance / n);
printf("Sum=%f\n", sum);
printf("Mean=%f\n", mean);
printf("Standard deviation=%f\n", stddev);
}