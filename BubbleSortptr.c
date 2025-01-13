#include <stdio.h>
void sort(int *,int*);
void main() {
	int a[] = {5,3,2,1};
	int x = 4;
	sort(a , &x);
	for (int i = 0; i < x; i++) 
	{ printf("%d ", a[i]); 
	} 
	printf("\n");
}

void sort(int *a , int *n){
	int i;
	int j;
	for(i = 0; i<*n - 1 ; i++){
		for(j=0 ; j<*n - i -1 ; j++){
			if(*(a+j) > *(a+j+1)){
				int temp = *(a+j);
			*(a+j) = *(a+j+1);
			*(a+j+1) = temp;
			}
			
		}
	}
}