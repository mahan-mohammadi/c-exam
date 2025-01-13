#include <stdio.h>

int main(){
	int i;
	int j;
	int a[] = {10,8,6,5,4,3,1,2,7,9};
	for(i = 0 ; i<10 ; i++){
		int minindx = i; // dont initialize to zero since we need it to be the first number but also increase
		for( j = i ; j<10 ; j++ ){
			if(a[minindx] > a[j]){
				minindx = j;
			}
		}
		int temp = a[minindx];
		a[minindx] = a[i];
		a[i] = temp;
	}
	printf("Sorted array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}