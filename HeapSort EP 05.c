#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void InsereEmHeap (int m, int v[]) {

	int f = m + 1;

	while (f > 1 && v[f/2] < v[f]) {
	int t = v[f/ 2];
		v[f/2] = v[f] ; 
		v[f] = t;
		f = f/2;
}
return;}

void SacodeHeap (int m, int v[]) {
	int t, f = 2;
	while (f <= m) {
		if (f < m && v[f] < v[f+1]) 
			++f;
		if (v[f/2] >= v[f])
			break;
	t = v[f/2];
	v[f/2] = v[f]; 
	v[f] = t;
	f *= 2;}
return;
}

void Heapsort (int n, int v[]) {
		int m;
		for (m = 1; m < n; m++)
			InsereEmHeap (m, v);
		for (m = n; m > 1; m--) {
			int t = v[1]; 
			v[1] = v[m]; 
			v[m] = t;
			SacodeHeap (m - 1, v);}
return;
}

int main(){
	int vet[30001], n;
	clock_t t; 
	
	for(int i = 0; i < 30001; i++){
		vet[i] = rand() % 100;}
		
	n = 5000;
	
	t = clock();
	Heapsort (n, vet);
	t = clock() - t;
	
	printf("Tempo em milissegundos %.4lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
	
	
return 0;
}