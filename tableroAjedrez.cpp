#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

const int SIZE = 500;

void tablero (int n, int v[SIZE][SIZE]){
	
	int i,j;
	int aux = n-1;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(j<aux){
				v[i][j] = 0;	
			}else{
				v[i][j] = 1;
			}
			printf(" %d", v[i][j]);
		}
		aux = aux--;
		printf("\n");
	}

}

main(){
	
	int n;
	int v[SIZE][SIZE];
	
	printf("Num: " );
	scanf("%d", &n);
	printf("\n\n");
	tablero(n, v);
	
	printf("\n\n\n");
	system("pause");
	system("cls");
	
}
