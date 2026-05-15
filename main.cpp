#include <iostream>
using namespace std;                                                                               
struct info{
string classetoponimo;
string descrizionetoponimo;
string num;
string subalterno;
string cap;
string sezioneistat;            
}; 
struct indirizzo{
string lat;
string lon;
string location; 
};


string estrazione(string x, int pos) {
    int contatore=0;
    string parola;
    for (int i=0;i<x.length();i++) {
    	
        if (x[i] == ',') {
            contatore++;
        } else if (contatore==pos) {
            parola+=x[i];
        }
        
        if (contatore>pos) 
		break;
    }
    return parola;
}
string visualizza (info arr[],indirizzo x[]);
void caricadati(info x[],string nome){
	ifstream leggi(nome);
    if(leggi.is_open())
    string riga;
    int i=0;
    getline(leggi,riga);
    while(i<1000&&getline(leggi, x[i].classetoponimo){
    	x[i].classetoponimo = estrazione(riga, 0);
            x[i].descrizionetoponimo = estrazione(riga, 1);
            x[i].num = estrazione(riga, 2);
            x[i].subalterno = estrazione(riga, 3);
            x[i].cap = estrazione(riga, 4);
            x[i].sezioneistat = esrazione (riga,5);
            i++;
        }
        leggi.close();
    } else {
        cout << "Impossibile aprire il file";
    }
	
    
    

   
}
int main(int argc, char** argv) {
	return 0;
}
