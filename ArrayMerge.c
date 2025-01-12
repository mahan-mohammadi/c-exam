#include <stdio.h>

int main(){
	int ctr;
	int i;
	int a[] = {1,2,3};
	int b[] = {4,5,6};
	int c[100];
	for(i = 0 ; i<3 ; i++){ //the i shouldnt be defined here since we need it outside
		c[i] = a[i];
		
	}
	for(int j=0 ; j<3 ; j++,i++){
			c[i] = b[j];
			
		}
	for(i = 0; i<6 ; i++){
		printf("%d ", c[i]);
	}
	}
	