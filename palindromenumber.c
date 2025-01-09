#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
int num, newnum=0,x;
scanf("%d", &num);
int check = num;
while (num !=0){
	x = num%10;
	newnum = newnum*10 + x;
	num = num/10;
}
if (newnum == check)
printf("pali");
}