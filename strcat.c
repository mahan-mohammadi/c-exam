#include <stdio.h>

void strcat(char *s1 , const char*s2){
	while(*s1!= '\0'){
		s1++;
	}
	while (*s2!= '\0'){
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	}