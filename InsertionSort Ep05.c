#include <stdio.h>
# include <stdlib.h>
#include <conio.h>
#include <time.h>

int Insere (int k, int y, int v[], int n) {

		int j ;

		for (j = n; j > k; j--)
			v[j] = v[j-1];
			v[k] = y;
	return n + 1;
}

int main(){
	int ins, vet[30001], n;
	clock_t t; 
	
	for(int i = 0; i < 30001; i++){
		vet[i] = rand() % 100;}
		
	n = 20000;
	
	t = clock();
	ins = Insere (n, 12, vet, 30001);
	t = clock() - t;
	
	printf("Tempo em milissegundos %.4lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
	
	
return 0;
}