#ifndef BLO_H
#define BLO_H

#include<iostream>
#include<ostream>
#include<string>
using namespace std;

/*#include<iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include<ostream>
using std::ostream;
*/

class Bloco{
	private:
		string idBloco,endereco,conteudo;
	public:
		Bloco();
		~Bloco();
		string getEndereco();
		string getIdBloco();
		void setIdBloco(string idBloco);
		void setEndereco(string endereco);
		void setConteudo(string conteudo);
		friend ostream& operator<<(ostream &o, Bloco &b);
		//friend Bloco& operator=(const Bloco &b);
};

#endif