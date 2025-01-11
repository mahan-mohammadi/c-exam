#include <stdio.h>

int palindrome(int n);

int main(){
	printf("%d", palindrome(121));
}

int palindrome(int n){
	int temp = n;
	static int sum =0, k=1;
	if(n!=0){
		sum = 10*sum+n%10;
		return palindrome(n/10);
	}
	return (sum == n);
	
}