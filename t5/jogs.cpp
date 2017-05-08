#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iterator>
#include <algorithm>

class active{
 private:
   std::string nome;
   std::string modalidade;
   int pontos;
 public:
    active(std::string nome, std::string modalidade, int pontos){
	this->nome = nome;
	this->modalidade = modalidade;
	this->pontos = pontos;	
}
	std::string pnome(){
		return nome;
}
	std::string pmod(){
		return modalidade;
}
	int ponts(){
		return pontos;
	}
};

class total{
   private:
   std::string nome;
   std::string modalidade;
 public:
    bool added { false };
    int pontos;	
    total(std::string nome, std::string modalidade, int pontos){
	this->nome = nome;
	this->modalidade = modalidade;
	this->pontos = pontos;	
}
	std::string pnome(){
		return nome;
}
	std::string pmod(){
		return modalidade;
}
	int ponts(){
		return pontos;
	}
		
bool operator<(total& j){
		return this->pontos < j.pontos;
	}

};

bool cmpranomes(total a, total b) {
    return a.pnome().compare(b.pnome()) < 0;
}
int main() {

   int x;
   std::ifstream jogos("jogos.csv");
   
   std::string line;
   std::string cell[3];
   std::vector<active> v;
   std::vector<total> z;
   
   while (std::getline(jogos, line)) {
      std::stringstream linestream(line);
      std::getline(linestream, cell[0], ',');
      std::getline(linestream, cell[1], ',');
      std::getline(linestream, cell[2], ',');
      v.push_back(active(cell[0], cell[1], std::stoi(cell[2])));
      z.push_back(total(cell[0], cell[1], std::stoi(cell[2])));
   }

   std::cout<<"pontuacoes em pingpong:"<<std::endl;
   std::vector<active>::iterator it;
   for (it = v.begin(); it != v.end(); it++){
	if(it->pmod() == "pingpong"){ 
   std::cout<< it->pnome() << " ";
   std::cout << std::endl;
   std::cout<< it->ponts();
   std::cout << std::endl;
	}
   }
   std::cout<<"pontuacoes em tenis:"<<std::endl;
   std::vector<active>::iterator ip;
   for (ip = v.begin(); ip != v.end(); ip++){
	if(ip->pmod() == "tenis"){ 
   std::cout<< ip->pnome() << " ";
   std::cout << std::endl;
   std::cout<< ip->ponts();
   std::cout << std::endl;
	}
}
   std::sort(z.begin(), z.end(), cmpranomes);
   std::vector<total>::iterator iz;
   std::vector<total>::iterator iv;
   for (iz = z.begin(); iz != z.end(); iz++){	
	for(iv = iz+1; iv != z.end(); iv++){
		if( iz->added == false){
			if (iz->pnome() == iv->pnome()){
				iz->pontos = (iz->pontos + iv->pontos);
				iz->added = true;
			}
		}
	}
}
	
   std::cout<<"pontuacoes por alfabeto"<<std::endl;
   std::vector<total>::iterator ix;
   for (ix = z.begin(); ix <= z.end(); ix++){
   std::cout<< ix->pnome() << " ";
   std::cout << std::endl;
   std::cout<< ix->ponts();
   std::cout << std::endl;
   ix++;
	}
}
