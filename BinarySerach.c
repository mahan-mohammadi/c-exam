#include <stdio.h>
#define SIZE 10

int search(int [] ,int, int ,int);
int main(){
	int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	
	int b = search(a,SIZE,0,SIZE-1);
	if(b==-1){
		printf("not found");
	}
	else{
		printf("found");
	}

}
int search(int a[] ,int size, int start ,int end){
	while (start <= end){
		int mid = (start + end)/2;
		if (a[mid] ==11){
			return mid;
		}
		else if (11>a[mid]){
			start = mid+1;
		}
		else{
			start = mid -1;
		}
	}
	return -1;
	
	}

	