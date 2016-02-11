// Example program
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n != 0){
		int matriz[n][n];
		memset(matriz, 0, 4 * n * n);
		int a = n / 2;
		int b = n % 2;
		int i1 = 0;
		int i2 = n;
		for(int k = 0; k < a+b; k++){
			for(int i = i1; i < i2; i++){
				for(int j = i1; j < i2; j++){
					matriz[i][j]++;
				}
			}
			i1++;
			i2--;
		}

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if (j != 0)
					printf(" %3.d",matriz[i][j]);
				else
					printf(" %2.d",matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		cin >> n;
	}
	return 0;
}
