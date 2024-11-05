
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Rimel {
public:
	string numeFirma;
	float pret;
	int inaltimeCm;
	bool esteWaterproof;
	char* numeRimel;
	const int anLansare;
	static string culoare;

	Rimel() : anLansare(2020) {
		this->numeFirma = "Sephora";
		this->pret = 34.7;
		this->inaltimeCm = 7;
		this->esteWaterproof = false;
		this->numeRimel = new char[strlen("SkyHigh") + 1];
		strcpy(this->numeRimel, "SkyHigh");
	}
	Rimel(string numeFirma, float pret, int inaltimeCm) :anLansare(2023) {
		this->numeFirma = numeFirma;
		this->pret = pret;
		this->inaltimeCm = inaltimeCm;
		this->esteWaterproof = true;
		this->numeRimel = new char[strlen("Lash Magic") + 1];
		strcpy(this->numeRimel, "Lash Magic");
	}
	Rimel(string numeFirma, float pret, int inaltimeCm, bool esteWaterproof, const char* numeRimel, const int anLansare) :anLansare(anLansare) {
		this->numeFirma = numeFirma;
		this->pret = pret;
		this->inaltimeCm = inaltimeCm;
		this->esteWaterproof = esteWaterproof;
		this->numeRimel = new char[strlen(numeRimel) + 1];
		strcpy(this->numeRimel, numeRimel);
	}

	void afisareRimel() {
		cout << "Nume firma: " << this->numeFirma << endl;
		cout << "Pret: " << this->pret << endl;
		cout << "Inaltime in cm: " << this->inaltimeCm << endl;
		cout << "Este waterproof? " << this->esteWaterproof << endl;
		cout << "Nume rimel: " << this->numeRimel << endl;
		cout << "An lansare:" << this->anLansare << endl;
		cout << "culoare: " << Rimel::culoare << endl;
	}
};

string Rimel::culoare = "negru";




class Ruj {
public:
	string numeFirmaRuj;
	bool esteMat;
	float pretRuj;
	char* numeRuj;
	const int codNuanta;
	static int Tva;

	Ruj() :codNuanta(1234) {
		this->numeFirmaRuj = "Nyx";
		this->esteMat = true;
		this->pretRuj = 53.5;
		this->numeRuj = new char[strlen("Smooth") + 1];
		strcpy(this->numeRuj, "Smooth");
	}

	Ruj(string numeFirmaRuj, bool esteMat, float pretRuj) :codNuanta(1555) {
		this->numeFirmaRuj = numeFirmaRuj;
		this->esteMat = esteMat;
		this->pretRuj = pretRuj;
		this->numeRuj = new char[strlen("Soft") + 1];
		strcpy(this->numeRuj, "Soft");
	}
	Ruj(string numeFirmaRuj, bool esteMat, float pretRuj, const char* numeRuj, const int codNuanta) :codNuanta(codNuanta) {
		this->numeFirmaRuj = numeFirmaRuj;
		this->esteMat = esteMat;
		this->pretRuj = pretRuj;
		this->numeRuj = new char[strlen(numeRuj) + 1];
		strcpy(this->numeRuj, numeRuj);
	}
	void afisareRuj() {
		cout << "Nume firma: " << this->numeFirmaRuj << endl;
		cout << "Pret: " << this->pretRuj << endl;
		cout << "Este mat? " << this->esteMat << endl;
		cout << "Nume ruj: " << this->numeRuj << endl;
		cout << "Cod nuanta:" << this->codNuanta<< endl;
		cout << "Tva: " << Ruj::Tva << endl;
	}

};

int Ruj::Tva = 19;

class PaletaFard {
public:
	string numePaleta;
	bool arePensula;
	int lungimePaletaCm;
	float pretPaleta;
	char* denumireTipPaleta;
	const int nrFarduri;
	static int Tva;

	PaletaFard() :nrFarduri(10) {
		this->numePaleta = "Anastasia";
		this->arePensula = true;
		this->lungimePaletaCm = 10;
		this->pretPaleta = 105.8;
		this->denumireTipPaleta = NULL;
	}
	PaletaFard(string numePaleta,bool arePensula,int lungimePaletaCm) :nrFarduri(13) {
		this->numePaleta = numePaleta;
		this->arePensula = arePensula;
		this->lungimePaletaCm = lungimePaletaCm;
		this->pretPaleta = 210.6;
		this->denumireTipPaleta = NULL;
	}
	PaletaFard(string numePaleta, bool arePensula, int lungimePaletaCm, float pretPaleta, const char* denumireTipPaleta, const int nrFarduri) :nrFarduri(nrFarduri) {
		this->numePaleta = numePaleta;
		this->arePensula = arePensula;
		this->lungimePaletaCm = lungimePaletaCm;
		this->pretPaleta = pretPaleta;
		this->denumireTipPaleta = new char[strlen(denumireTipPaleta) + 1];
		strcpy(this->denumireTipPaleta, denumireTipPaleta);
	}

	void afisareFard() {
		cout << "Nume paleta: " << this->numePaleta << endl;
		cout << "Lungime paleta in cm: " << this->lungimePaletaCm << endl;
		cout << "Are pensula? " << this->arePensula << endl;
		cout << "Pret paleta: " << this->pretPaleta << endl;
		cout << "Nr farduri:" << this->nrFarduri << endl;
		cout << "Tva: " << PaletaFard::Tva << endl;
		cout << "Denumire tip farduri: " << this->denumireTipPaleta << endl;
		
	}
};

int PaletaFard::Tva = 9;


int main() {
	Rimel r1;
	r1.afisareRimel();
	Rimel r2("Mac", 50.5, 7);
	r2.afisareRimel();
	Rimel r3("DM", 30.2, 6, 1, "Wing", 2021);
	r3.afisareRimel();
		
	Ruj ruj1;
	ruj1.afisareRuj();
	Ruj ruj2("mac", 1, 35);
	ruj2.afisareRuj();
	Ruj ruj3("NYX", 0, 50.5, "Sweet", 5675);
	ruj3.afisareRuj();

	PaletaFard p1;
	p1.afisareFard();
	PaletaFard p2("TooFaced", 0, 12);
	p2.afisareFard();
	PaletaFard p3("Anastasia", 1, 15, 206.7, "Warm", 6);

}