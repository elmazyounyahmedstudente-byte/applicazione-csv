#include <iostream>
using namespace std;
struct info{
string classetoponimo;
string descrizionetoponimo;
string num;
string subalterno;
string cap;
string sezioneistat;
float lat;
float lon;
float location;
}; 

string estrazione(string x, int pos) {
    int contatore = 0;
    string parola;
    for (int i = 0; i < x.length(); i++) {
    	
        if (x[i] == ',') {
            contatore++;
        } else if (contatore == pos) {
            parola += x[i];
        }
        
        if (contatore > pos) 
		break;
    }
    return parola;
}

void caricadati(x[],string nome){
	ifstream leggi(nome);
    if(leggi.is_open())
    string riga;
    int i=0;
    getline(leggi,riga);
    while(i<1000&&getline(leggi, x[i].classetoponimo)
    
    

    if (fileInput.is_open()) {
        while (fileInput>>linea){ 
            cout << linea << '\n';
        }
        fileInput.close(); 
    } else {
        cout << "Impossibile aprire il file";
    }
}
int main(int argc, char** argv) {
	return 0;
}