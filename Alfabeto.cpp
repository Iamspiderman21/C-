#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//Funcion del mensaje codificado
string encodeMessage (string message, int n) {
	string encodedMessage = "";
	
	for (char c: message) {
		if(isalpha(c)) {
			
			int shift = (c % 2 == 0) ? -n: n;
			
			//Tamaño del caracter
			char base = islower(c) ? 'a':'A';
			
			//Calcula cada caracter
			char newChar = base + (c - base + shift + 26) % 26;
			encodedMessage += newChar;
			
			//Convierte 
			}else if (isdigit(c)) {
				encodedMessage += 'Z' - (c - '0');
				
			}else{
				encodedMessage += c;
			}
		}
		return encodedMessage;
	}
	
	int main(){
		string message;
		int n;
		
		cout <<"\t EJERCICIO 1" << "\n";
		
		cout <<"Ingrese una palabra: ";
		getline(cin, message);
		
		cout <<"\n";
		cout <<"Ingrese un valor: ";
		cin >> n;
		cout <<"\n";
		
		string encodedMessage =	encodeMessage (message, n);
		cout <<"El mensaje ha sido codificado: " <<
		encodedMessage <<endl;
		
		cout <<"\n";
		cout <<"\t FIN";
	
		return 0;
		
	}

