#include<stdio.h>
#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main(){
	int n,m,menor;
	scanf("%d %d",&n,&m);
	menor = min(n,m);
	while(n != 0 && m != 0){
		int matriz[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d",&matriz[i][j]);
			}
		}
		int c;
		scanf("%d",&c);
		while(c--){
			int a=0,b=0,val=0,maior=0; // val - contador, maior - maior quadrado
			scanf("%d %d",&a,&b);
			for(int i = 0; i < n; i++){
				int lb = (lower_bound(matriz[i],matriz[i]+m,a))-matriz[i];
				if (i+maior >= n+1){ // Se na linha verificada é impossível montar uma matriz maior que a atualmente detectada
					break;
				}
				for(int j = lb; j < m; j++){
					if(matriz[i][j] >= a && matriz[i][j] <= b){
						val++;
						int a1=i+1,a2=j+1;
						while((a1 < n) && (a2 < m) && (matriz[a1][a2] <= b)){
							val++;
							a1++;
							a2++;
						}
						maior=max(val,maior);
						val=0;
						break;
					}
					if(j+maior >= m+1){
						break;
					}
					if (matriz[i][j] >= b)
						break;
					if (maior == menor){
						i=n;
						j=m;
					}
				}
			}
			printf("%d\n",maior);
			maior=0;
		}

		printf("-\n");
		scanf("%d %d",&n,&m);
	}
	return 0;
}
