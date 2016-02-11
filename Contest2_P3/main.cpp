#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
	int i = 1, j=10;
	int n;
	scanf("%d",&n);
	while(n != 0){
		string s;
		cin.ignore();
		getline(cin,s);
		if (s == "too high"){
			j=min(j,n-1);
		}else if (s == "too low"){
			i=max(i,n+1);
		}else if(s == "right on"){
			if (n >= i && n <= j){
				printf("Stan may be honest\n");
			}else{
				printf("Stan is dishonest\n");
			}
			i=1;
			j=10;
		}
		scanf("%d",&n);
	}
	return 0;
}
