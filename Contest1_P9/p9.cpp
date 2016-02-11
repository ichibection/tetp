#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int v[4];

	cin >> v[0] >> v[1] >> v[2] >> v[3];
	bool flag = false;
	for (int i=0;i<4;i++) {
		for (int j = i + 1;j<4;j++) {
			for (int k = j + 1; k<4;k++) {
					if (v[i] + v[j] > v[k] && v[k] + v[j] > v[i] && v[k] + v[i] > v[j]) {
						flag = true;
				}
			}
		}
	}

	if (flag) cout << 'S' << endl;
	else cout << 'N' << endl;
	return 0;
}
