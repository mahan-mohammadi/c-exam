#include <stdio.h>

void strcpy(char *s1 , const char*s2){
	while(*s2!= '\0'){
		*s1 = *s2; //if we do s1 =s2 it will reassign the pointer not the value 
		s1++;
		s2++;
	}
	*s1 = '\0';
	}
}