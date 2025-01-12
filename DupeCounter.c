#include <stdio.h>

int main(){
	int ctr = 0;
	int a[] = {1,2,3,4,5,6,7,3,2,10};
	for(int i=0; i<10; i++){
		for(int j = i+1 ; j<10; j++){ //we want to check the number after it
			if(a[j] == a[i]){
				ctr++;
				break; //only one time is enough to detect duplication
			}
			
		}
	}
	printf("%d", ctr);
}