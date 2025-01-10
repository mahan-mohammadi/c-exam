#include <stdio.h>
#include <math.h>

int main(){
	int row;
	scanf("%d", &row);
	for(int i =1; i<row ; i++){ //make sure you dont duplicate a row
		for(int j= 0; j<row-i ; j++){
			printf(" ");
		}
		for (int j = 0; j<2*i-1; j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i = row; i>=1 ; i--){
			for(int j= 0; j<row-i ; j++){
			printf(" ");
		}
		for (int j = 0; j<2*i-1; j++){
			printf("*");
		}
		printf("\n");
	}
}