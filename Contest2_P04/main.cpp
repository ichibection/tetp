#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cmath>
#include <string>
#include<cstring>

using namespace std;

typedef unsigned long long int ll;

string reverse(string s){
	string n = s;
	int c = s.length()-1;
	for(int i = 0; i < round(s.length()/2); i++){
		n[i] = s[c-i];
		n[c-i] = s[i];
	}
	return n;
}

bool check(string n){
	int i = 0,j = n.length()-1;
	while(i <= j){
		if (n[i] == n[j]){
			i++;
			j--;
		}else{
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		int cont = 1;
		ll p;
		scanf("%llu",&p);
		do{
			/*string s = to_string(p); 				descomentar
			ll n = stoll(reverse(s).c_str());
			n+=p;
			if(check(to_string(n))){
				printf("%d %llu\n",cont,n);
				cont = 0;
				break;
			}else{
				cont++;
				p=n;
			}*/
		}while(true);
	}
	return 0;
}
