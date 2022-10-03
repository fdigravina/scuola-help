#include <iostream>
using namespace std;

/*
	Dato un array di n numeri interi, restituire il numero pari maggiore.
	Se non esiste, restituire -1
*/

#define maxdim 100

int pari (int v[], int idx) {
	
	if (idx == 0) {
		
		if (v[idx] % 2 == 0) return v[idx];
		return -1;
		
	}
	
	int rec = pari (v, idx-1);
	
	if (v[idx] % 2 == 0) return max (rec, v[idx]);
	return rec;
	
}

int main () {
	
	int v[maxdim];
	unsigned n;
	
	cout << "Inserire la dimensione dell'array: ";
	cin >> n;
	
	for (unsigned i=0; i<n; ++i) {
		
		cout << "Inserire il " << i+1 << "o elemento: ";
		cin >> v[i];
		
	}
	
	int ret = pari (v, n-1);
	
	if (ret == -1) cout << "Non sono presenti numeri pari nell'array\n";
	else cout << "Il numero pari maggiore e': " << ret << '\n';
	
	getchar (), getchar (); // termino l'esecuzione dopo l'invio
	
}