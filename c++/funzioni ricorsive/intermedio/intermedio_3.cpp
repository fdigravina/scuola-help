#include <iostream>
using namespace std;

// Dato un array di numeri reali, restituire true se l’array è ordinato in modo crescente

#define maxdim 100

int ordinato (double v[], int idx) {
	
	if (idx == 0) return true;
	
	if (ordinato(v, idx-1)) return (v[idx-1] < v[idx]);
	return false;
	
}

int main () {
	
	double v[maxdim];
	unsigned n;
	
	cout << "Inserire la dimensione dell'array: ";
	cin >> n;
	
	for (unsigned i=0; i<n; ++i) {
		
		cout << "Inserire il " << i+1 << "o elemento: ";
		cin >> v[i];
		
	}
	
	if (ordinato(v, n-1)) cout << "L'array e' ordinato\n";
	else cout << "L'array non e' ordinato\n";
	
	getchar (), getchar (); // termino l'esecuzione dopo l'invio
	
}