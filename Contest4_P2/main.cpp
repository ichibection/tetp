#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <sstream>
#include <set>

using namespace std;

// (pair(id,conjunto(problemas)),pair(pontos_de_penalidade,submeteu?))
typedef vector<pair<pair<int,set<int> >,pair<int,bool> > > estrutura;

// Ordenar pelo numero maior numero de submissoes e menor numero de pontos_de_penalidade
bool comparador(pair<pair<int,set<int> >,pair<int,bool> >  a, pair<pair<int,set<int> >,pair<int,bool> > b){
	if (a.first.second.size() != b.first.second .size()){
		return a.first.second.size() > b.first.second.size();
	}else if(a.first.second.size() == b.first.second.size()){
		return a.second.first < b.second.first;
	}
}

// Ordenar participantes com 0 em ambos os valores
bool comparador2(pair<pair<int,set<int> >,pair<int,bool> >  a, pair<pair<int,set<int> >,pair<int,bool> > b){
	return a.first.first < b.first.first;
}

int main(){
    int n;
    int penalidades[101][10]; // usando indice original do problema 1-based
    estrutura pontos(101);    // idem
    string d;
    stringstream ss; ss.clear();
    string line;
    getline(cin,line);
    ss << line;
    ss >> n;
	getline(cin,line);
    for(int i = 0; i < n; i++){
    	for(int c = 0; c < 101; c++){
			pontos[c] = make_pair(make_pair(c,set<int>()),make_pair(0,false));
		}
    	for(int l = 0; l < 101; l++)
			for(int j = 0; j < 10; j++)
				penalidades[l][j] = 0;
        int id = 0;
        int problema = 0;
        int tempo = 0;
        char status;
        ss.clear();
        while(getline(cin,line)){
        	if (line.empty())
        		break;
        	ss << line;
        	ss >> id >> problema >> tempo >> status;
            if (status == (int)('I')){ // se submeteu incorreto, incrementa vetor e ativa o bool de que submeteu algo
                penalidades[id][problema] += 1;
                pontos[id].second.second = true;
            }else if(status == (int)('C')){ // se submeteu corretamente, verifica se o problema não foi resolvido e insere no conjunto de problemas, bem como calcula a pontuação
            	if (pontos[id].first.second.find(problema) == pontos[id].first.second.end()){
            		set<int> conjunto = pontos[id].first.second;
            		conjunto.insert(problema);
					pontos[id] = make_pair(make_pair(id,conjunto),make_pair(pontos[id].second.first + tempo + penalidades[id][problema]*20,true));
            	}
            }else if(status == (int)('R')){ // apenas ativa boolean de submissão
            	pontos[id].second.second = true;
            }else if(status == (int)('U')){ // apenas ativa boolean de submissão
            	pontos[id].second.second = true;
            }else if(status == (int)('E')){ // apenas ativa boolean de submissão
            	pontos[id].second.second = true;
            }
			ss.clear();
        }
        sort(pontos.begin(),pontos.end(),comparador); // primeira ordenação
        for(unsigned int c = 0; c < pontos.size(); c++) // busca primeiro participante com 0 em ambos valores e ordena daí pra frente
        	if (pontos[c].first.second.size() == 0){
        		sort(pontos.begin()+c,pontos.end(),comparador2);
        		break;
        	}
        for(unsigned int c = 0; c < pontos.size(); c++){
			if (pontos[c].second.second){ // se submeteu algo durante o contest
				cout << pontos[c].first.first << " " << pontos[c].first.second.size() << " " << pontos[c].second.first << endl;
			}
		}
        if (i+1 < n){ // insere quebra de linha exceto no ultimo caso de teste
        	cout << endl;
        }
    }
    return 0;
}
