#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Calcula el ultimo numero de las monedas

void leastCoins (vector <int> & monedas, int importe) {
	sort(monedas.begin(), monedas.end(), greater <int>());
	vector <int> count(monedas.size(), 0);
	

	
	for(size_t i= 0; i <monedas.size(); ++i) {
		if (importe >= monedas[i]) {
		count[i] = importe / monedas[i];
		importe -= count[i] * monedas[i];
		}
	}
	
	cout <<"\t EJERCICIO 2" << "\n";
	cout << "Ingresa el minimo de monedas que necesitas:" <<endl;
	cout <<"\n";
		for(size_t i = 0; i <monedas.size(); ++i) {
			if (count[i] > 0) {
				cout << monedas[i] << "x" << count[i] <<endl;
		}
	}
}

int main(){
	vector <int> monedas = {75, 35, 64, 89, 51, 15};
	int importe;
	
	cout << "Ingrese el importe en centavos:";
	cin >> importe;
	
	leastCoins(monedas,importe);
	
	return 0;
}

