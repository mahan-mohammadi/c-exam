#include <stdio.h>
int counter(char *a , char *l);
int main(){
	char a[] = "mahan";
	char x = 'a';
	printf("%d", counter(a,&x));
}
int counter(char *a , char *l){
	int i;
	for(i=0; *a != '\0' ; a++){
		if(*a == 'a'){
			i++;
		}
	}
	return i;
}
