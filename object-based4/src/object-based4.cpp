

#include <iostream>
using namespace std;

class NotTablosu{
public:
	void setDersIsmi(string isim){ dersIsmi = isim;}
	string getDersIsmi() const {return dersIsmi;}
	void mesajYazdir() const {
		cout << getDersIsmi() << " dersine hosgeldiniz" << endl;
}
private:
	string dersIsmi;
};
int main() {
	string isim;
	NotTablosu cppDersiNotlari;
	cout << "Ders ismini giriniz:";
	getline(cin,isim);
	cppDersiNotlari.setDersIsmi(isim);
	cppDersiNotlari.mesajYazdir();
return 0;
}
