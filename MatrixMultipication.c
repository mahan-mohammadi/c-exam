#include <stdio.h>

int main(){
	int m1[2][2] = { { 1, 1 },
                       { 2, 2 } };

    int m2[2][2] = { { 1, 1 },
                       { 2, 2 } };
    int m3[2][2];
    

	for(int i=0 ; i<2 ; i++){
		for(int j = 0; j<2 ; j++){
			m3[i][j] = 0;
			for(int k=0 ; k<2 ; k++){
				m3[i][j] += m1[i][k]*m2[k][j];
			}
		}
		
	}
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", m3[i][j]);
}
printf("\n");
}
}