#include <stdio.h>

int main(){
	int ctr;
	int a[] = {1,2,3,4,5,6,7,3,2,10};
	for(int i=0; i<10; i++){
		ctr=0;  // should be zero for each new number that we are checking since we check it case by case
		for(int j = 0 ; j<10; j++){ //we need to check all numbers since we didnt remove the other dupe
			if(a[j] == a[i]){
				if(i!=j){
					ctr++;
				}
			}
			}
			if (ctr==0){
				printf("%d ", a[i]);
			}
			
		}
	}
	