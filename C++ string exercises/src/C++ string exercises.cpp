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

void take_inverse(string &);
void make_upper_first_letter();
void find_longer_word();
void checking_vowel();
bool twoplaces_wordcheck();
void number_of_words();
string equality_for_two_words(string &, string, string);
string Palindrome(string);
void highest_number_of_letters();
void highes_numof_repeated_letter();
void insert_a_dash();
void lower_to_upper_and_upper_to_lower();
void find_nums_and_sum();
void number_to_words();

int main() {
	number_to_words();
	return 0;
}

void take_inverse(string & str){
	string inverse = "";
	for (int i = str.length() - 1; i >= 0; i--){
		inverse += str[i];
	}
	cout << inverse << endl;
}
void make_upper_first_letter(){
	string sentence = "cpp string exercises c", new_sentence = "";
	int lengthofsentence = sentence.length(), i = 1;
	new_sentence += toupper(sentence[0]);
	do{
//		bir altta karakter olarak arattýk "" böyle yapýnca hata veriyor.
		if (sentence[i - 1] == ' '){
			new_sentence += toupper(sentence[i]);
		}else {
			new_sentence += sentence[i];
		}
		i++;
	}while(i <= lengthofsentence);
	cout << new_sentence << endl;
}
void find_longer_word(){
	string sentence = "C++ is a general-purpose programming language", new_sentence = "", depo = "";
	int count = 0, max = 0, lenofsen = sentence.length();
	for (int i = 0; i < lenofsen; i++){
		if(sentence[i] == ' '){
			if (count > max){
				depo = new_sentence;
				new_sentence = "";
				max = count;
			}
			count = 0;
			new_sentence = "";
		}else {
			count++;
			new_sentence += sentence[i];
		}
	}
	cout << depo << endl;
}

void checking_vowel(){
	string str;
	cout << "Input your sentence or word: ";
	int count = 0;
	getline(cin, str);
	for (unsigned int i = 0; i < str.length(); i++){
		if(str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'u' or str[i] == 'o'){
			count++;
		}else if(str[i] == 'A' or str[i] == 'E' or str[i] == 'I' or str[i] == 'U' or str[i] == 'O'){
			count++;
		}
	}
	cout << "number of vowels: " << count << endl;
}

bool twoplaces_wordcheck(){
	string str;
	cout << "Input your sentence or word: ";
	getline(cin,str);
	for (unsigned int i = 0; i < str.length(); i++){
		if ((str[i] == 'e' and str[i + 2] == 'g') or (str[i] == 'g' and str[i + 2] == 'e')){
			return true;
		}else if ((str[i] == 'E' and str[i + 2] == 'G') or (str[i] == 'G' and str[i + 2] == 'E')){
			return true;
		}
	}
	return false;
}

void number_of_words(){
	string str;
	int count = 0;
	cout << "Input your sentence or word: ";
	getline(cin,str);
	for (unsigned int i = 0; i < str.length(); i++){
		if (str[i] == ' '){
			count++;
		}
	}
	cout << str << "->" << count + 1 << endl;
}

string equality_for_two_words(string & str, string word1, string word2){
	int count1 = 0, count2 = 0;
	for (unsigned int i = 0; i < str.length(); i++){
		if (str[i] == word1[0] or str[i] == toupper(word1[0])){
			count1++;
		}else if (str[i] == word2[0] or str[i] == toupper(word2[0])){
			count2++;
		}
	}
	if (count1 == count2){
		return "True";
	}
	return "False";
}

string Palindrome( string str){
	string inverse = "";
	for (int i = str.length() - 1; i >= 0; i--){
		inverse += str[i];
	}
	if(str == inverse){
		return "True";
	}
	return "False";
}

void highest_number_of_letters(){
	string str, new_sent = "", depo = "";
	cout << "Input your sentence or word: ";
	getline(cin,str);
	int count = 0, max = 0, temp = 0;
	unsigned int i = 0;
	do {
		if (str[i] == ' '){
			temp = count;
			if (count > max){
				depo = new_sent;
				new_sent = "";
				max = count;
				count = 0;
			}
			if (max == temp){
				cout << "-1" << endl;
				break;
			}
			i++;
			new_sent = "";
			count = 0;
		}else {
			if (not ispunct(str[i])){
				new_sent += str[i];
				count++;
			}
			i++;
		}
	}while(i < str.length());
	cout << depo;
}

void highes_numof_repeated_letter(){

}

void insert_a_dash(){
	string str;
	cout << "Input a number: ";
	cin >> str;
	for (unsigned int i = 0; i < str.length() - 1; i++){
		if((str[i] == '1' or str[i] == '3' or str[i] == '5' or str[i] == '7' or str[i] == '9') and
				(str[i+1] == '1' or str[i+1] == '3' or str[i+1] == '5' or str[i+1] == '7' or str[i+1] == '9')){
			str.insert(i + 1, "-");
		}
	}
	cout << str;
}


void lower_to_upper_and_upper_to_lower(){
	string str, newsentence = "";
	cout << "Input a word: ";
	cin >> str;
	unsigned int i = 0;
	do{
		if(islower(str[i])){
			newsentence += toupper(str[i]);
		}else if (isupper(str[i])){
			newsentence += tolower(str[i]);
		}
		i++;
	}while(i < str.length());
	cout << newsentence;
}

void find_nums_and_sum(){
	string str, numstr = "";
	int total = 0, num = 0;
	cout << "Input a word: ";
	getline(cin,str);
	for (unsigned int i = 0; i < str.length(); i++){
		if (isdigit(str[i])){
			num += str[i] - '0';
			if(isdigit(str[i + 1])){
				num	*= 10;
			}
		}
		if (not isdigit(str[i]) or i + 1 == str.length()){
			total += num;
			num = 0;
		}
	}
	cout << str << " Total: " << total;
}

void number_to_words(){
	string below10[] = {"sifir", "bir", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz"};
	string above10[] = {"","on", "yirmi", "otuz", "kirk", "elli", "altmis", "yetmis", "seksen", "doksan"};
	string yuz[] = {"yuz"};
	string bin[] = {"bin"};
	string milyon[] = {"milyon"};
	string numtoword = "", number, remainder_number;
	do{
		cout << "Sayý giriniz: ";cin >> number;
		remainder_number = number;
		unsigned int index = number.length(), temp = index;
		for (unsigned int i = 0; i <= index; i++){
			int count = 0;
			if (temp == 1){
				count = number[0] - '0';
				numtoword = " " +below10[count];
			}else if (temp == 2){
				count = number[0] - '0';
				numtoword += " " +above10[count];
				number.erase(0,1);
				count = number[0] - '0';
				if (number[0] != '0'){
					numtoword += " " +below10[count];
				}
				break;
			}else if (temp == 3){
				if (number[0] != '0'){
					count = number[0] - '0';
					if (number[0] != '1'){
						numtoword += " " +below10[count];
					}
				numtoword += " " + yuz[0];
				number.erase(0,1);
				}else if(number[0] == '0'){
					number.erase(0,1);
				}

			}else if (temp == 4){
				if (number[0] != '0'){
					count = number[0] - '0';
					if (number[0] != '0' and number[0] != '1'){
						numtoword += " " +below10[count];
					}
					numtoword += " " + bin[0];
					number.erase(0,1);
				}else if ((number[0] == '0')){
					number.erase(0,1);
				}

			}else if (temp == 5){
				if (number[0] != '0' and number[1] == '0'){
					count = number[0] - '0';
					numtoword += " " +above10[count];
					numtoword += " " +bin[0];
					number.erase(0,1);
				}else if (number[0] != '0'){
					count = number[0] - '0';
					numtoword += " " +above10[count];
					number.erase(0,1);
				}else if (number[0] == '0'){
					number.erase(0,1);
				}
			}else if (temp == 6){
				if (number[0] != '0'){
				count = number[0] - '0';
				if (number[0] != '1' and number[0] != '0'){
					numtoword += " " +below10[count];
				}
				numtoword += " " + yuz[0];
				number.erase(0,1);
				}else if(number[0] == '0'){
					number.erase(0,1);
				}
			}else if (temp == 7){
				count = number[0] - '0';
				numtoword += " " +below10[count];
				numtoword += " " + milyon[0];
				number.erase(0,1);
			}
			temp--;
		}
		if (remainder_number != "0"){
			cout << numtoword.erase(0,1) << endl;
		}else {
			cout << "BÝTTÝ" << endl;
		}
		numtoword = "";
	}while(remainder_number != "0");

}
























