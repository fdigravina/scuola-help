#include <iostream>

using namespace std;

/*
	Dato un numero intero n,
	contare quanti bit sono uguali a 1 nella rappresentazione binaria dei numeri da 1 a n.
*/

unsigned conta_uno (unsigned n) {
	
	if (n == 0) return 0;
	
	int cont = 0, aux = n;
	
	while (aux > 0) {		// fin quando ho bit da considerare
		
		cont += (aux & 1);	// incremento il contatore se l'ultimo bit e' uguale a 1
		aux /= 2;		// dividere per due significa eliminare il bit a destra
		
	}
	
	return cont + conta_uno (n-1);
	
}

int main () {
	
	unsigned n;
	cout << "Inserire il numero naturale n: ";
	cin >> n;
	
	cout << "Il numero di bit accesi e': " << conta_uno (n);
	
	getchar (), getchar (); // termino l'esecuzione dopo l'invio
	
}