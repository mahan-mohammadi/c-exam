#include <stdio.h>

int search(int [] ,int);
int main(){
	int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	
	int b = search(a,SIZE);
	if(b==-1){
		printf("not found");
	}
	else{
		printf("found");
	}

}
int search(int a[] ,int size){
	for(int i= 0 ; i<SIZE ; i++){
		if(a[i] == 11){
			return i;
		}
		}
	return -1;	
	}

	