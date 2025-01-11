#include <stdio.h>
int factor(int n);
int main(){
	printf("%d", factor(100000));
}

int factor(int n){
	static int i;
	if(n!=0){
		i++;
		return factor(n/10);
	}
	
	return i;
	
}