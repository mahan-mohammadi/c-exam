#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main(){
	int a[SIZE];
	srand(time(NULL));
	for(int i=0; i<SIZE;i++ ){
		a[i] = rand()%6 +1;
	}

	for(int i=0;i<SIZE;i++){
		printf("%d ", a[i]);
	}
}