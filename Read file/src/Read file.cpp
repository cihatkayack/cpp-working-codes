//============================================================================
// Name        : Read.cpp
// Author      : Cihat Kaya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <sstream>
using namespace std;

void ornek1(){
	string metin;
	ifstream dosyaOkuyucu;
	dosyaOkuyucu.open("isimler.txt");
	if(dosyaOkuyucu){
		while(true){
			dosyaOkuyucu >> metin;
			if(!dosyaOkuyucu){//dosya okuma burada false oldu (dosyaOkuyucu boolean gibi davranýr)
				break;
			}
			cout << "Merhaba " << metin << endl;
		}
		dosyaOkuyucu.close();
	}else{
		cout << "Dosyayý okuyamadým" << endl;
	}
}
void yazdir(int [], int);
void ornek2(){
	const int UZUNLUK = 100;
	int deger, toplam = 0, index = 0;
	int dizi[UZUNLUK];
	string dosyaIsmi;
	cout << "Dosya ismi:  " << endl;
	cin >> dosyaIsmi;
	ifstream dosyaOkuyucu;
	dosyaOkuyucu.open(dosyaIsmi.c_str());
	if(dosyaOkuyucu){
		while(true){
			dosyaOkuyucu >> deger;
			if(!dosyaOkuyucu){break;}
			toplam += deger;
			dizi[index] = deger;
			index++;
		}
		dosyaOkuyucu.close();
		yazdir(dizi, index);
		cout << "Ortalamasý: " << toplam / index << endl;
	}else{
		cout << "Dosyayý okuyamadým" << endl;
	}
}
void yazdir(int dizi[], int len){
	for(int i = 0; i<len;i++){
		cout << dizi[i] << " ";
	}
}

void ornek3(){
	string satir;
	ifstream dosyaOkuyucu;
	dosyaOkuyucu.open("huseyni_turku_havada_bulut.txt");
	if(dosyaOkuyucu){//dosya acildiysa
		while(getline(dosyaOkuyucu,satir)){
			cout << satir << endl;
		}
		dosyaOkuyucu.close();
	}else{
		cout<<"Dosya okunamadi"<<endl;
	}
}

void dosyaOku(string dosyaIsmi, vector<string> & satirlar){
	string satir;
	ifstream dosyaOkuyucu;
	dosyaOkuyucu.open(dosyaIsmi);
	if(dosyaOkuyucu){
		while(getline(dosyaOkuyucu,satir)){
			satirlar.push_back(satir);
		}
		dosyaOkuyucu.close();
	}else{
		cout<<"Dosya "<< dosyaIsmi << " okunamadi"<<endl;
	}
}

void ornek4(){
	vector<string> A_solKelimeler;
	vector<string> A_ortaKelimeler;
	vector<string> A_sagKelimeler;
	dosyaOku("A_sol.txt",A_solKelimeler);
	dosyaOku("A_orta.txt",A_ortaKelimeler);
	dosyaOku("A_sag.txt",A_sagKelimeler);
	srand(time(0));
	int cumleSayisi = 10;
	for(int i = 0; i < cumleSayisi; i++){
		cout << A_solKelimeler[rand()%A_solKelimeler.size()] << " ";
		cout << A_ortaKelimeler[rand()%A_ortaKelimeler.size()] << " ";
		cout << A_sagKelimeler[rand()%A_sagKelimeler.size()] << endl;
	}

}
void kelimelereBol(string satir, vector<string> & kelimeler){
	stringstream ss(satir);
	string kelime;
	while ( ss >> kelime){
		kelimeler.push_back(kelime);
	}
}
void ornek5(){
	ifstream dosyaOkuyucu;
	dosyaOkuyucu.open("huseyni_turku_havada_bulut.txt");
	string satir;
	vector<int> satirNo;vector<string> nota; vector<string> sozler;
	if(dosyaOkuyucu){
		vector<string> kelimeler;
		while(getline(dosyaOkuyucu,satir)){
			kelimelereBol(satir,kelimeler);
			satirNo.push_back(stoi(kelimeler[0]));
			nota.push_back(kelimeler[1]);
			sozler.push_back(kelimeler[5]);
			kelimeler.clear();
		}
		dosyaOkuyucu.close();
	}else{
		cout<<"Dosya okunamadi"<<endl;
	}
	for(unsigned int i = 0;i < nota.size(); i++){
		cout << nota[i] << "\t";
	}
	cout << endl;
	for(unsigned int i = 0;i < sozler.size(); i++){
		cout << sozler[i] << "\t";
	}
}

void ornek6(){
	ifstream dosyaOkuyucu;
	dosyaOkuyucu.open("lena.txt");
	string satir;
	vector < vector <int> > matris;
	if(dosyaOkuyucu){
		while(getline(dosyaOkuyucu,satir)){
			vector<int> matrisSatiri;
			stringstream ss(satir);
			string veri;
			while(getline(ss, veri, ',')){//virgulden böl
				matrisSatiri.push_back(stoi(veri));
			}
			matris.push_back(matrisSatiri);
		}
		dosyaOkuyucu.close();
	}else{
		cout<<"Dosya okunamadi"<<endl;
	}
	int satirSayisi = matris.size();
	int sutunSayisi = matris[0].size();
	cout << "Matris boyutlari: " << satirSayisi << " * " << sutunSayisi;
}


int main() {
//	ornek1();
//	ornek2();
//	ornek3();


//	vector<string> satirlarim;
//	string dosyaIsmi;
//	cout << "Dosya: " << endl; cin >> dosyaIsmi;
//	dosyaOku(dosyaIsmi, satirlarim);
//	for(unsigned int i = 0; i < satirlarim.size(); i++){
//		cout << satirlarim[i] << endl;
//	}

//	ornek4();

	ornek5();

//	ornek6();
	return 0;
}
