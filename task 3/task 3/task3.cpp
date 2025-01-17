#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Rimel {

	string numeFirma;
	float pret;
	int inaltimeCm;
	bool esteWaterproof;
	char* numeRimel;
	const int anLansare;
	static string culoare;

public:

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
		cout << "culoare: " << Rimel::culoare << endl << endl;
	}
	~Rimel() {
		if (this->numeRimel != NULL) {
			delete[] this->numeRimel;
		}
	}

	Rimel(const Rimel& obj) :anLansare(obj.anLansare)
	{
		this->numeFirma = obj.numeFirma;
		this->pret = obj.pret;
		this->inaltimeCm = obj.inaltimeCm;
		this->esteWaterproof = obj.esteWaterproof;

		this->numeRimel = new char[strlen(obj.numeRimel) + 1];
		strcpy(this->numeRimel, obj.numeRimel);

	}

	string getNumeFirma() {
		return this->numeFirma;
	}
	float getPret() {
		return this->pret;
	}
	int getInaltimeCm() {
		return this->inaltimeCm;
	}
	bool getEsteWaterproof() {
		return this->esteWaterproof;
	}
	char* getNumeRimel() {
		return this->numeRimel;
	}
	int getAnLansare() {
		return this->anLansare;
	}
	static string getCuloare() {
		return Rimel::culoare;
	}

	void setNumeFirma(string numeFirmaNou) {
		this->numeFirma = numeFirmaNou;
	}
	void setPret(float pretNou) {
		this->pret = pretNou;
	}
	void setInaltimeCm(int inaltimeNoua) {
		this->inaltimeCm = inaltimeNoua;
	}
	void setEsteWaterproof(bool waterproofNou) {
		this->esteWaterproof = waterproofNou;
	}
	static void setCuloare(string culoareNoua) {
		Rimel::culoare = culoareNoua;
	}
	void setNumeRimel(const char* numeRimelNou)
	{
		if (this->numeRimel != NULL)
		{
			delete[] this->numeRimel;
		}
		this->numeRimel = new char[strlen(numeRimelNou) + 1];
		strcpy(this->numeRimel, numeRimelNou);
	}

	friend void operator!(Rimel& obj)
	{
		if (obj.esteWaterproof == 1)
		{
			obj.esteWaterproof = 0;
		}
	}
};

string Rimel::culoare = "negru";




class Ruj {

	string numeFirmaRuj;
	bool esteMat;
	float pretRuj;
	char* numeRuj;
	const int codNuanta;
	static int Tva;
public:

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
		cout << "Cod nuanta:" << this->codNuanta << endl;
		cout << "Tva: " << Ruj::Tva << endl << endl;
	}
	~Ruj() {
		if (this->numeRuj != NULL) {
			delete[] this->numeRuj;
		}
	}
	Ruj(const Ruj& obj) :codNuanta(obj.codNuanta)
	{
		this->numeFirmaRuj = obj.numeFirmaRuj;
		this->pretRuj = obj.pretRuj;
		this->esteMat = obj.esteMat;

		this->numeRuj = new char[strlen(obj.numeRuj) + 1];
		strcpy(this->numeRuj, obj.numeRuj);

	}
	string getNumeFirmaRuj() {
		return this->numeFirmaRuj;
	}
	float getPretRuj() {
		return this->pretRuj;
	}
	bool getEsteMat() {
		return this->esteMat;
	}
	char* getNumeRuj() {
		return this->numeRuj;
	}
	int getCodNuanta() {
		return this->codNuanta;
	}
	static int getTva() {
		return Ruj::Tva;
	}

	void setNumeFirmaRuj(string numeFirmaRujNou) {
		this->numeFirmaRuj = numeFirmaRujNou;
	}
	void setPretRuj(float pretRujNou) {
		this->pretRuj = pretRujNou;
	}
	void setEsteMat(bool matNou) {
		this->esteMat = matNou;
	}
	static void setTva(int tvaNou) {
		Ruj::Tva = tvaNou;
	}
	void setNumeRuj(const char* numeRujNou)
	{
		if (this->numeRuj != NULL)
		{
			delete[] this->numeRuj;
		}
		this->numeRuj = new char[strlen(numeRujNou) + 1];
		strcpy(this->numeRuj, numeRujNou);
	}
};

int Ruj::Tva = 19;

class PaletaFard {

	string numePaleta;
	bool arePensula;
	int lungimePaletaCm;
	float pretPaleta;
	char* denumireTipPaleta;
	const int nrFarduri;
	static int Tva;
public:

	PaletaFard() :nrFarduri(10) {
		this->numePaleta = "Anonim";
		this->arePensula = true;
		this->lungimePaletaCm = 10;
		this->pretPaleta = 105.8;
		this->denumireTipPaleta = new char[strlen("Necunoscut") + 1];
		strcpy(this->denumireTipPaleta, "Necunoscut");
	}
	PaletaFard(string numePaleta, bool arePensula, int lungimePaletaCm) :nrFarduri(13) {
		this->numePaleta = numePaleta;
		this->arePensula = arePensula;
		this->lungimePaletaCm = lungimePaletaCm;
		this->pretPaleta = 210.6;
		this->denumireTipPaleta = new char[strlen("Necunoscut") + 1];
		strcpy(this->denumireTipPaleta, "Necunoscut");
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
		cout << "Denumire tip farduri: " << this->denumireTipPaleta << endl;
		cout << "Tva: " << PaletaFard::Tva << endl << endl;

	}
	~PaletaFard() {
		if (this->denumireTipPaleta != NULL) {
			delete[] this->denumireTipPaleta;
		}
	}
	PaletaFard(const PaletaFard& obj) :nrFarduri(obj.nrFarduri)
	{
		this->numePaleta = obj.numePaleta;
		this->arePensula = obj.arePensula;
		this->lungimePaletaCm = obj.lungimePaletaCm;
		this->pretPaleta = obj.pretPaleta;

		this->denumireTipPaleta = new char[strlen(obj.denumireTipPaleta) + 1];
		strcpy(this->denumireTipPaleta, obj.denumireTipPaleta);

	}
	string getNumePaleta() {
		return this->numePaleta;
	}
	float getPretPaleta() {
		return this->pretPaleta;
	}
	int getLungimePaleta() {
		return this->lungimePaletaCm;
	}
	bool getArePensula() {
		return this->arePensula;
	}
	char* getDenumireTip() {
		return this->denumireTipPaleta;
	}
	int getNrFarduri() {
		return this->nrFarduri;
	}
	static int getTvaPaleta() {
		return PaletaFard::Tva;
	}

	void setNumePaleta(string numePaletaNou) {
		this->numePaleta = numePaletaNou;
	}
	void setPretPaleta(float pretPaletaNou) {
		this->pretPaleta = pretPaletaNou;
	}
	void setArePensula(bool pensulaNou) {
		this->arePensula = pensulaNou;
	}
	void setLungimePaleta(int lungimeNoua) {
		this->lungimePaletaCm = lungimeNoua;
	}
	static void setTvaPaleta(int tvaPaletaNou) {
		PaletaFard::Tva = tvaPaletaNou;
	}
	void setDenumirePaleta(const char* denumirePaletaNoua)
	{
		if (this->denumireTipPaleta != NULL)
		{
			delete[] this->denumireTipPaleta;
		}
		this->denumireTipPaleta = new char[strlen(denumirePaletaNoua) + 1];
		strcpy(this->denumireTipPaleta, denumirePaletaNoua);
	}
	static friend bool operator<(const PaletaFard& obj1, const PaletaFard& obj2)
	{
		if (obj1.pretPaleta < obj2.pretPaleta)
		{
			return 1;
		}
		else
		{
			return 0;
		}
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
	cout << "Obiectul r3 este waterproof? (1-DA ; 0-NU):" << r3.getEsteWaterproof() << endl;
	!r3;
	cout << "Obiectul r3 este waterproof? (1-DA ; 0-NU):" << r3.getEsteWaterproof() << endl << endl;


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


	cout << "Obiectul p3 inainte de a apela setterii:" << endl << endl;
	cout << "Numele paletei este:" << p3.getNumePaleta() << endl;
	cout << "Pretul paletei este:" << p3.getPretPaleta() << endl;
	cout << "Lungimea paletei in cm este:" << p3.getLungimePaleta() << endl;
	cout << "Are pensula? (1-DA ; 0-NU):" << p3.getArePensula() << endl;
	cout << "Nr farduri:" << p3.getNrFarduri() << endl;
	cout << "Tipul de paleta:" << p3.getDenumireTip() << endl;
	cout << endl << endl;

	p3.setNumePaleta("Benefit");
	p3.setPretPaleta(90.99);
	p3.setLungimePaleta(10);
	p3.setArePensula(0);
	p3.setDenumirePaleta("Dark");

	cout << "Obiectul p3 dupa apelul setterilor:" << endl << endl;
	cout << "Numele paletei este:" << p3.getNumePaleta() << endl;
	cout << "Pretul paletei este:" << p3.getPretPaleta() << endl;
	cout << "Lungimea paletei in cm este:" << p3.getLungimePaleta() << endl;
	cout << "Are pensula? (1-DA ; 0-NU):" << p3.getArePensula() << endl;
	cout << "Nr farduri:" << p3.getNrFarduri() << endl;
	cout << "Tipul de paleta:" << p3.getDenumireTip() << endl;
	cout << endl << endl;


	cout << "Pretul paletei p2 este:" << p2.getPretPaleta() << endl;
	cout << "Pretul paletei p3 este:" << p3.getPretPaleta() << endl;
	cout << "Pretul paletei p2 este < decat pretul paletei p3? (1-DA ; 0-NU):" << (p2 < p3) << endl << endl;
}