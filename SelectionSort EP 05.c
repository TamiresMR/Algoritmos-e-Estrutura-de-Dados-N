#include <stdio.h>
# include <stdlib.h>
#include <conio.h>
#include <time.h>

void Selecao (int n, int v[]) {

	int i, j, min, x;

	for (i = 0; i < n - 1; i++) {
		min = i;
	for (j = i+1; j < n; j++)
	if (v[j] <  v[min]) min = j;
		x = v[i]; v[i] = v[min]; v[min] = x;}
}

int main(){
	int ins, vet[30001], n;
	clock_t t; 
	
	for(int i = 0; i < 30001; i++){
		vet[i] = rand() % 100;}
		
	n = 10000;
	
	t = clock();
	Selecao (n, vet);
	t = clock() - t;
	
	printf("Tempo em milissegundos %.4lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
	
	
return 0;
}