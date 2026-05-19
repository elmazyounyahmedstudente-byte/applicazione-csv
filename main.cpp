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
void visualizza(info arr[], indirizzo x[]) {
    cout << endl << "dati salvati" << endl;
    for (int i = 0; i < 1000; i++) {
        if (arr[i].descrizionetoponimo == "") {
            break; 
        }
        cout << "Via: " << arr[i].descrizionetoponimo << " Civico: " << arr[i].num << " ISTAT: " << arr[i].sezioneistat << endl;
    }
}

int main(int argc, char** argv) {
    info archivio[1000];
    indirizzo coordinate[1000];
    string nomeFile = "dati.csv";
    int scelta;
    
    do {
        cout << endl << "1- Carica dati" << endl;
        cout << "2- Mostra dati" << endl;
        cout << "0- Esci" << endl;
        cout << "Scegli cosa fare: ";
        cin >> scelta;

	return 0;
}