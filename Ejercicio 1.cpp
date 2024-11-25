#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//Funcion del mensaje codificado
string mensajeCodificado (string mensaje, int n) {
	string codificado = "";
	
	for (char c: mensaje) {
		if(isalpha(c)) {
			
			int shift = (c % 2 == 0) ? -n: n;
			
			//Tamaño del caracter
			char base = islower(c) ? 'a':'A';
			
			//Calcula cada caracter
			char newChar = base + (c - base + shift + 26) % 26;
			codificado += newChar;
			
			//Convierte 
			}else if (isdigit(c)) {
				mensajeCodificado += 'Z' (c - '0');
				
			}else{
				mensajeCodificado += c;
			}
		}
		return mensajeCodificado;
	}
	
	int main(){
		string message;
		int n;
		
		cout <<"Ingrese una palabra: ";
		getline(cin, mensaje);
		
		cout <<"Ingrese un valor: ";
		cin >> n;
		
		string codificado =
		mensajeCodificado (mensaje, n);
		cout <<"El mensaje ha sido codificado: " <<
		codificado <<endl;
		
		return 0;
	}

