/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void ultimaMonedaDP (vector <int> & monedas, int importe) {
	vector <int> dp(importe + 1, INT_MAX);
	vector <int> monedaUsada(importe + 1, -1);
	
	dp[0] =0;
	
	for (int i = 1; i <= importe; ++i){
		for (int moneda : monedas) {
			if (i >= moneda && dp [i - moneda] != INT_MAX) {
				if (dp[i] > dp[i - moneda] + 1){
					dp[i] = dp[i - moneda] + 1;
					monedaUsada[i] = moneda;
				}
			}
		}
	}
	if (dp [importe] ==INT_MAX){
		cout << "Error" <<endl;
		return;
	}
	
	cout << "Minimo de monedas que ocupas: " <<dp[importe] <<endl;
	
	int amt = importe;
	while (amt > 0){
		int moneda = monedaUsada[amt];
		cout <<moneda <<"";
		amt -=moneda;
	}
	cout <<endl;
}

int main(){
	vector <int> monedas = {10, 5, 2,1,};
	int importe;
	
	cout << "Ingrese el importe en centavos:";
	cin >> importe;
	
	ultimaMonedaDP(monedas,importe);
	
	return 0;
}
