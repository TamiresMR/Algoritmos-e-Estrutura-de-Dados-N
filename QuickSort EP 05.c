#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int Separa (int p, int r, int v[]) {

		int c, j, k, t;

		c = v[r] ; 
		j = p;
	for (k = p; k < r; k++)
		if (v[k] <= c) {
			t = v[j];
			v[j] = v[k];
			v[k] = t;
			j++;
}
			
	v[r] = v[j], v[j] = c;
return j;
}

void Quicksort (int p, int r, int v[]) {
		int j;
		if (p < r) {
			j = Separa (p, r, v);
			Quicksort (p, j - 1, v);
			Quicksort (j + 1, r, v);
}
return;}

int main(){
	int vet[30001], n;
	clock_t t; 
	
	for(int i = 0; i < 30001; i++){
		vet[i] = rand() % 100;}
		
	n = 5000;
	
	t = clock();
	Quicksort (0, 30000, vet);
	t = clock() - t;
	
	printf("Tempo em milissegundos %.4lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
	
	
return 0;
}