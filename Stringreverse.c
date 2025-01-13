#include <stdio.h>

int main(){
	char a[] = "mahan";
	char *aptr = a;
	char b[100];
	char *bptr = b;
	int i=0;
	 while (*aptr) {
        aptr++;
        i++;    
    }
    
	for(; i>=0 ; i--){
		aptr--;
		*bptr = *aptr;
		bptr++;
		
	}
	*bptr = '\0';
	 printf(" Reverse of the string is : %s\n\n", b); //if we point to bptr here it will point to null terminator and not print anything
	}