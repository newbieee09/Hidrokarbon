#include <iostream>
using namespace std;

int main(){
	
	int c;
	char* alkana[] = {"-----", "Metana", "Etana", "Propana", "Butana", "Pentana", "Heksana", "Heptana", "Oktana", "Nonana", "Dekana"};
	char* alkena[] = {"-----", "-----", "Etena", "Propena", "Butena", "Pentena", "Heksena", "Heptena", "Oktena", "Nonena", "Dekena"};
	char* alkuna[] = {"-----", "-----", "Etuna", "Propuna", "Butuna", "Pentuna", "Heksuna", "Heptuna", "Oktuna", "Nonuna", "Dekuna"};
	cout << "PROGRAM MENCARI RUMUS SENYAWA HIDROKARBON" << endl;
	cout <<  "MASUKKAN JUMLAH ATOM KARBON (C) = "; cin >> c;
				    
	cout << "=========================================================" << endl;
	cout << "RUMUS SENYAWA ALKANA = " << "C" << c << "H" << 2*c + 2 << " ->" <<" Nama senyawa : " << alkana[c] << endl;
	cout << "RUMUS SENYAWA ALKENA = " << "C" << c << "H" << 2*c << " ->" << " Nama senyawa : " << alkena[c] << endl;
	cout << "RUMUS SENYAWA ALKUNA = " << "C" << c << "H" << 2*c - 2 << " ->" << " Nama senyawa : " << alkuna [c]<< endl;
	cout << "=========================================================" << endl;
}
