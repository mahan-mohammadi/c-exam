#include <stdio.h>

int bintodec(int n);

int main(){
	printf("%d", bintodec(1000010));
}

int bintodec(int n){
	static int i = 1, sum =0;
	if (n!= 0){
		sum += (n%10)*i;
		i*=2;
		return bintodec(n/10);
	}
	return sum;
}