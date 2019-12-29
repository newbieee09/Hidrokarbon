#include <iostream>
using namespace std;

void Hidrokarbon(){
	int i,n,j;
	
	j = 10;
	n = 1;
	
	cout << "===== RUMUS SENYAWA ALKANA =====" << endl;
	for(i=n; i <= j; i++){
		cout << "C" << i << "H" << 2*i + 2 << endl;
	}
	
	cout << "===== RUMUS SENYAWA ALKENA =====" << endl;
	for(i=n; i <= j; i++){
		cout << "C" << i << "H" << 2*i<< endl;
	}
	
	cout << "=====RUMUS SENYAWA ALKUNA =====" << endl;
	for(i=2; i<=j; i++){
		cout << "C" << i << "H" << 2*i - 2 << endl;
	}
}



int main (){
	Hidrokarbon();
	return 0;
}
