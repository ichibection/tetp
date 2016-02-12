#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
	string n;
	while(cin >> n){
		int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11;
		const char* c[14] = {n.c_str()};
		c1 = atoi(&n.c_str()[0]);
		/*c2 = atoi(c[1]);
		c3 = atoi(c[2]);
		c4 = atoi(c[4]);
		c5 = atoi(c[5]);
		c6 = atoi(c[6]);
		c7 = atoi(c[8]);
		c8 = atoi(c[9]);
		c9 = atoi(c[10]);
		c10 = atoi(c[12]);
		c11 = atoi(c[13]);*/
		printf("%c",&n.c_str()[0]);
	}



	return 0;
}
