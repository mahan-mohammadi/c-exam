#include <stdio.h>
#include <math.h>

void main() {
	int n1 = 1010100,sum = 0;
    for(int i =0; n1>0; i++,n1/=10){
    	sum = sum + n1%10 * pow(2,i);
		}
	printf("%d", sum);
}