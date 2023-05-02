#include <stdio.h>
# include <stdlib.h>
#include <conio.h>
#include <time.h>

void Intercala (int p, int q, int r, int v[]) {

	int i, j, k, *w;
	
	w = malloc ((r - p) * sizeof (int));

	
	i = p; j = q; k = 0;
	while (i < q && j < r) {
	if (v[i] <= v[j]) w[k++] = v[i++];
	else w[k++] = v[j++];
}

	while (i < q) w[k++] = v[i++];
	while (j < r) w[k++] = v[j++];
	for (i = p; i < r; i++) v[i] = w[i-p];
		free (w);
return;}


int main(){
	int ins, vet[30001], n;
	clock_t t; 
	
	for(int i = 0; i < 30001; i++){
		vet[i] = rand() % 100;}
		
	n = 20000;
	
	t = clock();
	Intercala (0, n, 30001, vet);
	t = clock() - t;
	
	printf("Tempo em milissegundos %.4lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
	
	
return 0;
}