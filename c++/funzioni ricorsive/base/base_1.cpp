#include <iostream>
using namespace std;

// Dato n intero positivo, calcolare la somma dei primi n numeri naturali.

unsigned somma (unsigned n) {
	
	if (n == 0) return 0;
	return somma (n-1) + n;
	
}

int main () {
	
	unsigned n;
	cout << "Inserire il numero naturale n: ";
	cin >> n;
	
	cout << "La somma dei primi n numeri naturali e': " << somma (n);
	
	getchar (), getchar (); // termino l'esecuzione dopo l'invio
	
}