#include <iostream>
#include <cstring> // funzione substr

using namespace std;

/*
	Dato un array di stringhe e una stringa s,
	stabilire quante volte s è presente come sottostringa nella matrice
*/

#define maxdim 100

int conta_substr (char v[][maxdim], int idx, char sub_string[]) {
	
	int cont = 0;
	int n = strlen(v[idx]), m = strlen (sub_string);
	char aux[maxdim];
	
	for (int i=0; i<n; ++i) {
		
		strncpy (aux, v[idx]+i, m);
		if (strcmp(aux, sub_string) == 0) ++cont;
		
	}
	
	if (idx == 0) return cont;
	return cont + conta_substr (v, idx-1, sub_string);
	
}

int main () {
	
	char v[maxdim][maxdim];
	char sub_string[maxdim];
	unsigned n;
	
	cout << "Inserire il numero di stringhe: ";
	cin >> n;
	
	for (unsigned i=0; i<n; ++i) {
		
		cout << "Inserire il " << i+1 << "o elemento: ";
		scanf (" %[^\n]s", v[i]);
		
	}
	
	cout << "Inserire la sottostringa da cercare: ";
	scanf (" %[^\n]s", sub_string);
	
	cout << "Il numero di occorrenze della sottostringa e': " << conta_substr (v, n-1, sub_string);
	
	getchar (), getchar (); // termino l'esecuzione dopo l'invio
	
}