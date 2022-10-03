#include <iostream>
using namespace std;

// Re-implementazione della funzione strlen per calcolare la lunghezza di una stringa in modo ricorsivo

#define maxdim 100

unsigned str_len (char str[], int idx) {
	
	if (str[idx] == '\0') return idx;
	return str_len (str, idx+1);
	
}

int main () {
	
	char str[maxdim];	// stringa in input
	
	cout << "Inserire la stringa in input: ";
	scanf (" %[^\n]s", str);	// leggo fino al carattere "a capo"
	
	cout << "La lunghezza della stringa e': " << str_len (str, 0) << endl;
	
	getchar (), getchar (); // termino l'esecuzione dopo l'invio
	
}