#include <stdio.h>

void main() {
	int n1 = 20 , n2 = 15,lcm;
    for(int i =20; ; i++){
    	if (i%n2== 0 && i%n1 ==0){
    		lcm = i;
    		break;
		}
	}
	printf("%d", lcm);
}