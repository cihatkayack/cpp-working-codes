//============================================================================
// Name        : C++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void operation1(){
	string S0, S1 = "test1", S2("test2"), S3 = S1, S4(7,'-');
	cout << "S0: " << S0 << "uzunluðu: " << S0.length() << endl;
	S3[S3.length() - 1] = '3';
	cout << S1 <<  S2 << S3 << endl;
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

void take_inverse(string &);
void summaryofalldigit();
void some_string_operation();
void create_password();
void starrect_with_name();
void password_check();

int main() {
	operation1();
//	---------------------------
	cout << "---------------------" << endl;
	string text;
	cout << "STRING = ";
	getline(cin, text);
	take_inverse(text);
	cout << text << endl;
//	---------------------------
	cout << "---------------------" << endl;
	string_operator();
//	---------------------------
	cout << "---------------------" << endl;
	summaryofalldigit();
//	---------------------------
	cout << "---------------------" << endl;
	some_string_operation();
//	---------------------------
	cout << "---------------------" << endl;
	create_password();
//	---------------------------
	cout << "---------------------" << endl;
	starrect_with_name();
//	---------------------------
	cout << "---------------------" << endl;
	password_check();
	return 0;
}


void check_inverse(string &, string &);
void take_inverse(string & str){
	string inverse = "", first_string = str;
	for (int i = str.length() - 1; i >= 0; i--){
		inverse += str[i];
	}
	str = inverse;
	check_inverse(first_string, inverse);
}
void check_inverse(string & str, string & str2){
	if (str == str2){
		cout << "these strings are same" << endl;
	}else {
		cout << "these strings are not same" << endl;
	}
}
void summaryofalldigit(){
	string str;
	cout << "Enter a number:";
	int toplam = 0;
	cin >> str;
	for (unsigned int i = 0; i < str.length(); i++){
		toplam += str[i] - '0';
	}
	cout << "Toplam: " << toplam << endl;
}

void some_string_operation(){
	string str = "Cihat Kaya", str2 = "Cihat Kaya", str3 = "xxxxx", str4 = "yyyyy";
	cout << "length: " << str.length() << endl;
	cout << "at(k): " << str.at(4) << endl;
	cout << "substr(pos,n): " << str.substr(str.length()-5, str.length()) << endl;
	cout << "compare(str2): " << str.compare(str2) << endl;
	cout << "find(pattern, pos): " << str.find(" ") << endl;
	cout << "erase(pos,n): " << str.erase(0,3) << endl;
	cout << "insert(pos,str2): " << str2.insert(3, str2) << endl;
	cout << "replace(pos,n,str2): " << str3.replace(3,1,str4) << endl;
}

void create_password(){
	string user_name, sifre;
	cout << "Enter your name and surname: ";
	getline(cin, user_name);
	int space_index = user_name.find(" ");
	sifre = user_name.substr(0,2) + user_name.substr(space_index + 1, 2) + "12345";
	cout << sifre << endl;
}

void starrect_with_name(){
	string username, long_str, low_str, temp1, temp2;
	cout << "Enter your name: ";
	getline(cin, username);
	int space_index = username.find(" ");
	temp1 = username.substr(0, space_index);
	temp2 = username.substr(space_index+1, username.length());
	if (temp1.length() > temp2.length()){
		long_str = temp1;
		low_str = temp2;
	}else {
		long_str = temp2;
		low_str = temp1;
	}
	int numofstar = long_str.length() + 4;
	for (int i = 0; i < numofstar; i++){
		cout << "*";
	}
	cout << endl;
	int toplamUzunluk1 = long_str.length() + 4, uzunluk1, uzunluk2;
	uzunluk1 = toplamUzunluk1 - 2 - long_str.length();
	uzunluk2 = toplamUzunluk1 - 2 - low_str.length();
	cout << "*" << low_str.insert(0, uzunluk2/2,' ').append(uzunluk2/2, ' ') << "*" << endl;
	cout << "*" << long_str.insert(0, uzunluk1/2,' ').append(uzunluk1/2, ' ') << "*" << endl;
	string star(numofstar, '*');
	cout << star << endl;
}


bool password_value_control(string);
void password_check(){
	string password;
	do {
		cout << "þifre giriniz: ";
		cin >> password;
	}while (not password_value_control(password));
	cout << "þifreniz oluþturuldu" << endl;

}

bool password_value_control(string password){
	int lower = 0, upper = 0, digit = 0;
	for (unsigned int i = 0; i < password.length(); i++){
		if (isdigit(password[i])){
			digit++;
		}else if (isupper(password[i])){
			upper++;
		}else if(islower(password[i])){
			lower++;
		}
	}
	if (lower > 0 and upper > 0 and digit > 0){
		return true;
	}else {
		cout << "þifreniz oluþturulamadý" << endl;
		return false;
	}
}





