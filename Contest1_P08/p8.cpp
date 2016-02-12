#include<iostream>
#include<cmath>

using namespace std;

int main(){
	char c;
	cin >> c;
	double matriz[12][12];
	double d;
	double acumulador = 0;
	int contador = 0;
	for(int i = 0; i < 12; i++){
		for (int j = 0; j < 12; j++){
			cin >> d;
			matriz[i][j] = d;
		}
	}
	for(int i = 0; i < 5; i++){
		for (int j = 1; j < 12; j++){
			if (j > i && j < 11-i){
				acumulador += matriz[i][j];
				contador++;
			}
		}
	}
	if (c == 'S'){
		printf("%.1f\n",acumulador);
		//cout << acumulador << endl;
	}else if (c == 'M'){
		double r = acumulador/contador;
		printf("%.1f\n",r);//cout <<  << endl;
	}
	return 0;
}
