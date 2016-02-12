#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    int soma=0;
    cin >> n;
    int a, b;
    int valores[n][2];
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        valores[i][0] = a;
        valores[i][1] = b;
    }
    for(int i = 0; i < n; i++){
        if (valores[i][0] < valores[i][1]){
            if (valores[i][0] < 0)
                valores[i][0] = 0;
            if (valores[i][0] % 2 == 0)
                valores[i][0]++;
            else
                valores[i][0]+=2;
            while(valores[i][0] < valores[i][1]){
                if (valores[i][0] % 2 == 1){
                    soma += valores[i][0];
                    valores[i][0] += 2;
                }
            }
        }else{
            if (valores[i][1] < 0)
                valores[i][1] = 0;
            if (valores[i][1] % 2 == 0)
                valores[i][1]++;
            else
                valores[i][1]+=2;
            while(valores[i][1] < valores[i][0]){
                if (valores[i][1] % 2 == 1){
                    soma += valores[i][1];
                    valores[i][1] += 2;
                }
            }

        }
        cout << soma << endl;
        soma = 0;
    }
    return 0;
}
