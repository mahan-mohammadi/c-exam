#include <stdio.h>

int LCM(int n, int z);

int main(){
	printf("%d", LCM(4,6));
}

int LCM(int n, int z){
	static int i=0;
	i += z;
	if(i%n ==0 && i%z == 0){
		return i;
	}
	return LCM(n,z);
	
}