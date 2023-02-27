#include <stdio.h>

int main() {
	int sudoku[9][9];
	int vetor[9] = {1,2,3,4,5,6,7,8,9};
	for (int i=0; i<9; i++){
		for (int j=0; j<9; j++){
			scanf("%d", &sudoku[i][j]);			
		}
	}
	for (int i=0; i<9; i++){
		for (int j=0; j<9; j++){
			if (sudoku[i][j]!=0){
				int c=0;
				for (int k=0; k<9; k++){
					if (sudoku[i][j]==vetor[k]){
						c++;
						for (int l=j; l<9; ++l){
							if (sudoku[i][j]==vetor[k]){
								c++;
							}
						}
						if (c==2){
							printf("NAO\n");
							return 0;
						}
					}
				}		
			}
		}
	}
	for (int i=0; i<9; i++){
		for (int j=0; j<9; j++){
			if (sudoku[j][i]!=0){
				int c=0;
				for (int k=0; k<9; k++){
					if (sudoku[j][i]==vetor[k]){
						c++;
						for (int l=j; l<9; ++l){
							if (sudoku[j][i]==vetor[k]){
								c++;
							}
						}
						if (c==2){
							printf("NAO\n");
							return 0;
						}
					}
				}		
			}
		}
	}
	printf("SIM\n");
	return 0;
}

