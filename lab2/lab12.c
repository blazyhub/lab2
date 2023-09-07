#include <stdio.h>
#include <stdlib.h>
void main()
{
FILE *ptr1, *ptr2;
char ch, input[20], target[20];
printf("Enter the input file name\n");
scanf("%s", input);
ptr1=fopen(input, "r");
if(ptr1==NULL)
{
printf("File not found\n");
exit(0);
}
printf("Enter the target file name\n");
scanf("%s", target);
ptr2=fopen(target, "w");
if(ptr2==NULL)
{
printf("File not found\n");
exit(0);
}
while(1)
{
ch=fgetc(ptr1);
if(ch == EOF)
{
break;
}
else
{
fputc(ch, ptr2);
}
}

printf("The file copied successfully\n");
fclose(ptr1);
fclose(ptr2);
}