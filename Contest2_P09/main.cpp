#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n != 0){
		int conMed = 0;
		int dias = 0;
		int d,m,a,c;
		int d1,m1,a1,c1;
		for(int i = 0; i < n; i++){
			if (i == 0){
				cin >> d >> m >> a >> c;
			}else{
				cin >> d1 >> m1 >> a1 >> c1;
				if (d1 == 1 && m1 == 3 && ((a1 % 4 == 0 && a1 % 100 != 0) || a1 % 400 == 0) && d == 29 && m == 2 && a == a1){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if (d1 == d+1 && m == m1 && a == a1){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if(m1 == 1 && d1 == 1 && a1 == a+1 && d == 31 && m == 12){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if(m1 == 2 && d1 == 1 && a1 == a && d == 31 && m == 1){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if(m1 == 3 && d1 == 1 && a1 == a && d == 28 && m == 2 && ((!(a1 % 4 == 0) || !(a1 % 100 != 0)) && !(a1 % 400 == 0))){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if(m1 == 4 && d1 == 1 && a1 == a && d == 31 && m == 3){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if(m1 == 5 && d1 == 1 && a1 == a && d == 30 && m == 4){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if(m1 == 6 && d1 == 1 && a1 == a && d == 31 && m == 5){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if(m1 == 7 && d1 == 1 && a1 == a && d == 30 && m == 6){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if(m1 == 8 && d1 == 1 && a1 == a && d == 31 && m == 7){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if(m1 == 9 && d1 == 1 && a1 == a && d == 31 && m == 8){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if(m1 == 10 && d1 == 1 && a1 == a && d == 30 && m == 9){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if(m1 == 11 && d1 == 1 && a1 == a && d == 31 && m == 10){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else if(m1 == 12 && d1 == 1 && a1 == a && d == 30 && m == 11){
					conMed += c1-c;
					d = d1;
					m = m1;
					a = a1;
					c = c1;
					dias++;
				}else{
					d = d1;
					m = m1;
					a = a1;
					c = c1;
				}
			}
		}
		printf("%d %d\n",dias,conMed);
		cin >> n;
	}
	return 0;
}
