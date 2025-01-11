#include <stdio.h>

void main() {
	int n1 = 90 , n2 = 120,hcf;
    for(int i =1; i<=n1 ; i++){
    	if (n1%i== 0 && n2%i ==0){
    		hcf = i;
		}
	}
	printf("%d", hcf);
}