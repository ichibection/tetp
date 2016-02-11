#include<stdio.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int c,d;
		cin >> c >> d;
		if (c == 0 && d == 0){
			printf("0\n");
		}else if(d == 0){
			printf("%d\n",(int)(pow(26,c)));
		}else if(c == 0){
			printf("%d\n",(int)(pow(10,d)));
		}else{
			printf("%d\n",(int)(pow(10,d)*pow(26,c)));
		}
	}
	return 0;
}
