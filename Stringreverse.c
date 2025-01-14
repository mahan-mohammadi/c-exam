#include <stdio.h>

int main(){
	char name[] = "mahan";
	char *ptr = name;
	while(*ptr != '\0'){
		ptr++;
	}
	ptr--;
	char *start =name;
	while(start < ptr){
		char temp = *start;
		*start = *ptr;
		*ptr = temp;
		start++;
		ptr--;
	}
	printf("Reversed string: %s\n", name);
}