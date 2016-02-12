#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		string pokemon;
		int level;
		cin >> pokemon >> level;
		int hpB,hpIV,hpEV;
		cin >> hpB >> hpIV >> hpEV;
		int HP = ((hpIV + hpB + sqrt(hpEV)/8 + 50) * level)/50;
		HP += 10;
		int atB,atIV,atEV;
		cin >> atB >> atIV >> atEV;
		int AT = ((atIV + atB + sqrt(atEV)/8) * level)/50;
		AT += 5;
		int dfB,dfIV,dfEV;
		cin >> dfB >> dfIV >> dfEV;
		int DF = ((dfIV + dfB + sqrt(dfEV)/8) * level)/50;
		DF += 5;
		int spB,spIV,spEV;
		cin >> spB >> spIV >> spEV;
		int SP = ((spIV + spB + sqrt(spEV)/8) * level)/50;
		SP += 5;
		cout << "Caso #" << i << ": " << pokemon << " nivel " << level << endl;
		printf("HP: %d\n",HP);
		printf("AT: %d\n",AT);
		printf("DF: %d\n",DF);
		printf("SP: %d\n",SP);
	}
	return 0;
}
