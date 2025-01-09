#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
	int y=0 ,x =1, c=1;
	while (c<=10){
		printf("%d\n", y);
		int sum = y+x;
	c++;
		y = x;
		x = sum;
		
	}
}