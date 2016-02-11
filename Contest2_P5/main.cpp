#include<iostream>
#include<map>
#include<string>

using namespace std;

map<char,char> dict;

int main(){
	dict['1'] = '`';
	dict['2'] = '1';
	dict['3'] = '2';
	dict['4'] = '3';
	dict['5'] = '4';
	dict['6'] = '5';
	dict['7'] = '6';
	dict['8'] = '7';
	dict['9'] = '8';
	dict['0'] = '9';
	dict['-'] = '0';
	dict['='] = '-';
	dict['W'] = 'Q';
	dict['E'] = 'W';
	dict['R'] = 'E';
	dict['T'] = 'R';
	dict['Y'] = 'T';
	dict['U'] = 'Y';
	dict['I'] = 'U';
	dict['O'] = 'I';
	dict['P'] = 'O';
	dict['['] = 'P';
	dict[']'] = '[';
	dict['\\'] = ']';
	dict['S'] = 'A';
	dict['D'] = 'S';
	dict['F'] = 'D';
	dict['G'] = 'F';
	dict['H'] = 'G';
	dict['J'] = 'H';
	dict['K'] = 'J';
	dict['L'] = 'K';
	dict[';'] = 'L';
	dict['\''] = ';';
	dict['X'] = 'Z';
	dict['C'] = 'X';
	dict['V'] = 'C';
	dict['B'] = 'V';
	dict['N'] = 'B';
	dict['M'] = 'N';
	dict[','] = 'M';
	dict['.'] = ',';
	dict['/'] = '.';
	dict[' '] = ' ';
	dict['\n'] = '\n';
	string input;
	while(!cin.eof()){
		getline(cin,input);
		string output = input;;
		for(unsigned int i = 0; i < input.size(); i++){
			if (dict.count(input[i]) > 0)
				output[i] = dict[input[i]];
		}
		cout << output << endl;
	}
	return 0;
}
