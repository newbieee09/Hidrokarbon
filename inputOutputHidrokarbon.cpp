#include <iostream>
using namespace std;

int main(){
	
	int c;
	char* alkana[] = {"tidak diketahui", "Metana", "Etana", "Propana", "Butana", "Pentana", "Heksana", "Heptana", "Oktana", "Nonana", "Dekana"};
	
	cout << "PROGRAM MENCARI RUMUS SENYAWA HIDROKARBON" << endl;
	cout <<  "MASUKKAN JUMLAH ATOM KARBON (C) = "; cin >> c;
				    
	cout << "=========================================================" << endl;
	cout << "RUMUS SENYAWA ALKANA = " << "C" << c << "H" << 2*c + 2 << " Nama senyawa : " << alkana[c] << endl;
	cout << "RUMUS SENYAWA ALKENA = " << "C" << c << "H" << 2*c << endl;
	cout << "RUMUS SENYAWA ALKUNA = " << "C" << c << "H" << 2*c - 2 << endl;
	cout << "RUMUS SENYAWA ALKOHOL = " << "C" << c << "H" << 2*c + 2 << "O" << endl;
	cout << "=========================================================" << endl;
}
