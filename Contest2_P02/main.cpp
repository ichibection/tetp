#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cstring>
#include<map>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	while(n != -1){
		map<char,int> hash;
		string word;
		cin >> word;
		string guess;
		cin >> guess;
		for(int i = 0; i < word.length(); i++){
			if(hash.find(word[i]) != hash.end()){
				hash[word[i]] = hash[word[i]]+1;
			}else{
				hash[word[i]] = 1;
			}
		}
		int acertos = 0;
		int erros = 0;
		for(int i = 0; i < guess.length(); i++){
			if (hash.find(guess[i]) != hash.end()){
				acertos += hash[guess[i]];
				hash[guess[i]] = 0;
				if (acertos == word.length()){
					break;
				}
			}else{
				erros++;
				if (erros == 7){
					break;
				}
			}
		}
		if(erros == 7){
			printf("Round %d\nYou lose.\n",n);
		}else if (acertos == word.length()){
			printf("Round %d\nYou win.\n",n);
		}else{
			printf("Round %d\nYou chickened out.\n",n);
		}
		cin >> n; //("%d",&n);
	}
	return 0;
}
