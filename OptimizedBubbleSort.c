#include <stdio.h>
#define SIZE 10

int main(){
	int a[] = {10,9,8,7,6,5,4,3,2,1};
	for(int i =0 ; i<SIZE -1; i++){
		for(int j =0; j<SIZE -i -1; j++){
			if(a[j]>a[j+1]){
				int temp;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int i=0 ; i<SIZE ; i++){
		printf("%d ", a[i]);
	}
	}

