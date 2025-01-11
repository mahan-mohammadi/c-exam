#include <stdio.h>
int factor(int n);
int main(){
	printf("%d", factor(666));
}

int factor(int n){
	static int sum= 0 ,k=1;
	if(n!=0){
		
		sum +=  k*(n%2);
		k = k*10;
		return factor(n/2);
	}
	
	return sum;
	
}