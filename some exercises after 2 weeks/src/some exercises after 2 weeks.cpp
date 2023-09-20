//============================================================================
// Name        : some.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include <string>
const int DICE_NUMBER = 10000;
using namespace std;

void exp(){
	int random;
	for (int i = 0; i < 200;i++){
		random = 1+rand()%6;
		cout << random << endl;
	}
}

void anynumToZero(int hist[], int len){
	for(int i = 0; i < len; i++){
		hist[i] = 0;
	}
}

void printHistogram(int hist[], int len){
	for(int i = 0; i < len;i++){
		cout << "There is " << hist[i] << " " << "'" <<i+1 << "'" << endl;
	}
}

void dice_experiment(){
	srand(time(0));
	int histogram[6];
	anynumToZero(histogram, 6);
	for(int i = 0; i < DICE_NUMBER;i++){
		int dicenumber;
		dicenumber = 1+rand()%6;
		histogram[dicenumber-1]++;
	}
	printHistogram(histogram, 6);
}

void wordShistogram(){
	string str = "Cicero, bu eserinde yaþlýlýk sorunlarý hakkýndaki "
			"düþüncelerini dört bölümde dile getiriyor. "
			"Yaþlýlarýn yapacaðý iþler yok muydu? diye baþlýyor sözüne. ";
	int histogram[26];
	anynumToZero(histogram, 26);
	for(unsigned int i = 0; i < str.length(); i++){
		if(isupper(str[i])){
			str[i] = tolower(str[i]);
		}
		if(str[i] >= 'a' and str[i] <= 'z'){
			histogram[str[i] - 'a']++;
		}
	}
	for(int i = 0; i < 26;i++){
		cout << char('a'+i) << ": " << histogram[i] << endl;
	}
}

void pitchtossgame(){
	srand(time(0));
	int expNum = 0, temp, count = 0;
	while(true){
		expNum++;
		temp = 1+rand()%2;
		if(temp == 1){
			count = 0;
		}else if(temp == 2){
			count++;
		}
		if(count == 10){
			cout << "There are made " << expNum << " experiment" << endl;
			break;
 		}
	}
}

void numpredictgame(){
	srand(time(0));
	int lowlimit, highlimit;
	cout << "Enter low and high limit: "; cin >> lowlimit >> highlimit;
	int num = lowlimit + rand()%highlimit;
	while(true){
		int predict;
		cout << "yourPredict? : "; cin >> predict;
		if (predict != num){
			cout << "it is not correct";
			if(predict > num){
				cout << " num is lower";
			}else{
				cout << " num is higher";
			}
			cout << endl;
		}else{
			cout << "it is correct" << endl;
			break;
		}
	}

}

void take_inverse(){
	string str = "onur", str2 = "";
	for(int i = str.length(); i > -1;i--){
		str2 += str[i];
	}
	cout << str2 << endl;
}

void verylargenumberSummuration(){
	string number = "123456789123456789123456789";
	int toplam = 0;
	for(unsigned int i = 0; i < number.length(); i++){
		toplam += number[i] - '0';
	}
	cout << toplam << endl;
}

void some_string_operation(){
	string str = "Cihat Kaya", str2 = "Cihat Kaya", str3 = "xxxxx", str4 = "yyyyy";
	cout << "length: " << str.length() << endl;
	cout << "at(k): " << str.at(6) << endl;
	cout << "substr(pos,n): " << str.substr(str.length()-5, str.length()) << endl;
	cout << "compare(str2): " << str.compare(str2) << endl;
	cout << "find(pattern, pos): " << str.find(" ") << endl;
	cout << "erase(pos,n): " << str.erase(0,3) << endl;
	cout << "insert(pos,str2): " << str2.insert(3, str2) << endl;
	cout << "replace(pos,n,str2): " << str3.replace(3,1,str4) << endl;
//	length: 10
//	at(k): K
//	substr(pos,n):  Kaya
//	compare(str2): 0
//	find(pattern, pos): 5
//	erase(pos,n): at Kaya
//	insert(pos,str2): CihCihat Kayaat Kaya
//	replace(pos,n,str2): xxxyyyyyx
}

void createPassword(){
	string name;
	cout << "Enter your name and surname: "; getline(cin, name);
	int spaceindex = name.find(" ");
	string password = "";
	password += name.substr(0,2) + name.substr(spaceindex+1, 2) + "12345";
	cout << password << endl;
}

void password2(){
	string password;
	while(true){
		int lower = 0, higher = 0, number = 0;
		cout << "Enter any password: "; cin >> password;
		for (unsigned int i = 0; i < password.length(); i++){
			if(islower(password[i])){
				lower++;
			}else if(isupper(password[i])){
				higher++;
			}else if(isdigit(password[i])){
				number++;
			}
		}
		if(lower > 0 and higher > 0 and number > 0){
			cout << "Password is created correctly!" << endl;
			break;
		}else{
			cout << "You need at least a digit, a upper word and a lower word." << endl;
		}

	}

}

void string_operator(){
	string text1 = "abcdef", text2 = "ghjklmn", experiment;
	experiment = text1 + text2;
	cout << experiment << endl;
	if (text1 > text2){
		cout << text1 << endl;
	}else {
		cout << text2 << endl;
	}
	text1 += text2;
	cout << text1 << endl;
}

void makeUpper_fistLetter(){
	string sentence = "cpp string exercises c", newsentence = "";
	sentence[0] = toupper(sentence[0]);
	for(unsigned int i = 0; i < sentence.length();i++){
		if (sentence[i] == ' '){
			sentence[i+1] = toupper(sentence[i+1]);
		}
	}
	cout << sentence;
}

void find_longer_word(){
	string sentence = "C++ is a general-purpose programming language", temp = "", new_sentence = "";
	int count = 0, max = 0, lenofsen = sentence.length();
	for(int i = 0; i < lenofsen; i++){
		if(sentence[i] == ' '){
			if(count > max){
				new_sentence = temp;
				temp = "";
				max = count;
			}
			count = 0;
			temp = "";
		}else{
			count++;
			temp += sentence[i];
		}
	}
	cout << new_sentence;
}

void howmuchwordexist(){
	string sentence = "C++ is a general-purpose programming language";
	int total = 0;
	for(unsigned int i = 0; i < sentence.length();i++){
		if(isupper(sentence[i])){
			sentence[i] = tolower(sentence[i]);
		}
		if(sentence[i] >= 'a' and sentence[i] <= 'z'){
			total++;
		}
	}
	cout << total << " word are exist" << endl;
}

void insert_a_dash(){
	string number, new_sentence = "";
	cout << "Input a number: "; cin >> number;
	for(unsigned int i = 0;i < number.length();i++){
		if((number[i] - '0')%2 != 0 and (number[i-1] - '0')%2 != 0){
			new_sentence += '-';
		}
		new_sentence += number[i];
	}
	cout << new_sentence;
}

int main() {
//	exp();
//	dice_experiment();
//	wordShistogram();
//	pitchtossgame();
//	numpredictgame();
//	take_inverse();
//	verylargenumberSummuration();
//	some_string_operation();
//	createPassword();
//	password2();
//	string_operator();
//	makeUpper_fistLetter();
//	find_longer_word();
//	howmuchwordexist();
	insert_a_dash();
	return 0;
}






















