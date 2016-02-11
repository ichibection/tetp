#include<stdio.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	while(n != 0 || m != 0){
		float menor = min(n,m);
		float maior = max(n,m);
		if (n == 1){
			printf("%d knights may be placed on a %d row %d column board.\n",m,n,m);
		}else if(m == 1){
			printf("%d knights may be placed on a %d row %d column board.\n",n,n,m);
		}else if(n == 2 && m == 2){
			printf("%d knights may be placed on a %d row %d column board.\n",4,n,m);
		}else if(n == 2){
			if(m % 4 == 1){
				printf("%d knights may be placed on a %d row %d column board.\n",m+1,n,m);
			}else{
				int v = 4*(round(maior/4));
				printf("%d knights may be placed on a %d row %d column board.\n",v,n,m);
			}
		}else if(m == 2){
			if(n % 4 == 1){
				printf("%d knights may be placed on a %d row %d column board.\n",n+1,n,m);
			}else{
				int v = 4*(round(maior/4));
				printf("%d knights may be placed on a %d row %d column board.\n",v,n,m);
			}
		}else{
			int v = round(maior/2) * round(menor/2) + (int)(maior/2) * (int)(menor/2);
			printf("%d knights may be placed on a %d row %d column board.\n",v,n,m);
		}
		scanf("%d %d",&n,&m);
	}
	return 0;
}
