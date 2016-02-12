#include<iostream>
#include<cmath>

using namespace std;

bool primo(int n){
	if (n < 2){
		return false;
	}else{
		for(int i = 2; i <= round(sqrt(n)); i++){
			if (n % i == 0){
				return false;
			}
		}
		return true;
	}
}

int main(){
	int n;
	cin >> n;
	int numeros[n];
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		numeros[i] = x;
	}
	for(int i = 0; i < n; i++){
		if (primo(numeros[i])){
			cout << numeros[i] << " eh primo" << endl;
		}else{
			cout << numeros[i] << " nao eh primo" << endl;
		}
	}
	return 0;
}
