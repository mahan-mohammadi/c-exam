#include <stdio.h>

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int odd[5];
	int even[5];
	int i;
	int j=0;
	int k=0;
	for(i = 0 ; i<10 ; i++){
		if(a[i]%2 == 0){
			even[j] = a[i];
			j++;
		}
		if(a[i]%2 == 1){
			odd[k] = a[i];
			k++;
		}
	}
	for(i = 0 ; i<5 ; i++){
		printf("%d ", even[i]);
	}
	for(i=0 ; i<5 ; i++){
		printf("%d ", odd[i]);
	}
}