#include <iostream>
using namespace std;

// Contare quanti numeri sono negativi all’interno di un array

#define maxdim 100

unsigned conta (int v[], int idx) {
	
	if (idx == 0) return (v[0] < 0);	// restituisce true, cioè 1
	return conta (v, idx-1) + (v[idx] < 0);
	
	/*
		// non serve l'else nella seconda istruzione
		perche' dopo l'if e' presente un return,
		quindi il codice sara' eseguito solo quabdo non si entra nell'if
	*/
	
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
	
	cout << "I numeri negativi sono " << conta (v, n-1) << " su " << n << endl;
	
	getchar (), getchar (); // termino l'esecuzione dopo l'invio
	
}