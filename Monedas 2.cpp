#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void leastCoinsDP (vector <int> & coins, int amount) {
	vector <int> dp(amount + 1, INT_MAX);
	vector <int> coinUsed(amount + 1, -1);
	
	dp[0] =0;
	
	for (int i = 1; i <= amount; ++i){
		for (int coin : coins) {
			if (i >= coin && dp [i - coin] != INT_MAX) {
				if (dp[i] > dp[i - coin] + 1){
					dp[i] = dp[i - coin] + 1;
					coinUsed[i] = coin;
				}
			}
		}
	}
	if (dp [amount] ==INT_MAX){
		cout << "Error" <<endl;
		return;
	}
	
	cout << "Minimo de monedas que ocupas: " <<dp[amount] <<endl;
	
	int amt = amount;
	while (amt > 0){
		int coin = coinUsed[amt];
		cout <<coin <<"";
		amt -=coin;
	}
	cout <<endl;
}

int main(){
	vector <int> coins = {25, 10, 5,1};
	int amount;
	
	cout << "Ingrese el importe en centavos:";
	cin >> amount;
	
	leastCoins(coins,amount);
	
	return 0;
}
