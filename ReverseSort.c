#include <stdio.h>

int main(){
	int a[] = {1,2,3,4,5,11,7,8,8,9,10};
	int i;
	int j;
	int temp;
	for(i=0 ; i<10 ; i++){
		for(j = 0 ; j<10-i-1 ; j++){
			if(a[j] < a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0 ; i<10 ; i++){
		printf("%d ", a[i]);
	}
}