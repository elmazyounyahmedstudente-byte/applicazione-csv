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
float lat;
float lon;
string location; 
};
void caricaDati(info elenco[], int &d) {
    string riga;
    ifstream fileInput("Comune_Bergamo_-_Numerazione_civica.csv");

    if (fileInput.is_open()) {
        getline(fileInput, riga); // Salta l'intestazione
        d = 0;
       
        while (getline(fileInput, riga) && d < 1000) {
            elenco[d].descrizioneToponimo = riga;
            d++;
        }
       
        fileInput.close();
        cout << "hai caricato i 1000 record" << endl;
    } else {
        cout << "impossibile aprire il file" << endl;
    }
}


string visualizza (info arr[],indirizzo x[]);
 void caricadati(info x[],string nome){
	ifstream leggi(nome);
    if(leggi.is_open())
    string riga;
    int i=0;
    getline(leggi, string riga);
    while(i<1000&&getline(leggi, x[i].classetoponimo)){
    	x[i].classetoponimo = estrazione(string riga, 0);
            x[i].descrizionetoponimo = estrazione(string riga, 1);
            x[i].num = estrazione(string riga, 2);
            x[i].subalterno = estrazione(string riga, 3);
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
    }
        while (scelta!=0);

	return 0;
}
