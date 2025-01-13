#include <stdio.h>

int search(int [], int , int , int ,int);
int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,11};
	if(search(a,5,0,9,10)){
		printf("found");
	}
	else{
		printf("not found");
	}
}

int search(int a[],int mid,int start, int end, int key){
	mid = (start+end)/2;
	if(start <= end){
		if(a[mid] == key){
		return 1;
	}
	else if(key > a[mid]){
		return search(a,mid,mid+1,end,key); //wwitho
	}
	else{
		return search(a,mid,start,mid-1,key);
	}
	}
	return 0;
}