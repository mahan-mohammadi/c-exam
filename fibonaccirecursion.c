#include <stdio.h>
int fibo(int n);
int main(){
	printf("%d",fibo(6));
	return 0;
}

int fibo(int n){
	if(n==1 || n==0){
		return n;
	}
	return fibo(n-2)+fibo(n-1);
}