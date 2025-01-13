#include <stdio.h>

void sort(int [], int);
int main(){
	int a[] = {10,9,8,7,6,5,4,3,2,1};
	sort(a,10);
	for (int i=0; i < 10; i++) 
        printf("%d ", a[i]); 
    printf("\n"); 
}

void sort(int a[],int n){
	if(n==1){
		return;
	}
	for(int i=0 ; i<n-1 ;i++){ //make sure it does not go off limits 
		if(a[i] > a[i+1]){
			int swap = a[i];
			a[i] = a[i+1];
			a[i+1] = swap;
		}
	}
	sort(a,n-1);
}