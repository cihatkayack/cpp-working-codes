//============================================================================
// Name        : SPEEL.cpp
// Author      : Cihat KAYA
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;
static int WordNumber = 0;

void printVector(vector <string> VEctor){
	for(unsigned int i = 0; i < VEctor.size(); i++){
		cout << VEctor[i] << endl;
	}
}

void dividelineToword(vector <string> &vectorName, string line){
	stringstream ss(line);
	string word;
	while(ss>>word){
		string new_word = "";
		for(unsigned int i = 0; i < word.length();i++){
			if(isalpha(word[i])){
				new_word += tolower(word[i]);
			}
		}
		if(new_word != ""){
			WordNumber++;
		}
		vectorName.push_back(new_word);
	}
}

void dividelineTowordForDict(vector <string> &vectorName, string line){
	stringstream ss(line);
	string word;
	while(ss>>word){
		vectorName.push_back(word);
	}
}

vector<string> readDictFileAndMakeVector(string filename){
	vector <string> allwordsInDict;
	ifstream filereader;
	string line;
	filereader.open(filename);
	if(filereader){
		while(getline(filereader, line)){
			vector<string> words;
			dividelineTowordForDict(words, line);
			allwordsInDict.push_back(words[0]);
			words.clear();
		}
	}
	return allwordsInDict;
}

void CheckWords(vector <string> words, vector <string> dictVector, int lineNumber){
	for(unsigned int wordInd = 0; wordInd < words.size();wordInd++){
		int count = 0;
		for(unsigned int dictVectorInd = 0; dictVectorInd < dictVector.size(); dictVectorInd++){
			if(words[wordInd] == dictVector[dictVectorInd]){
				count++;
				break;
			}
		}
		if(count == 0 and words[wordInd] != ""){
			cout << "Spelling error at line " << lineNumber << "\n" << words[wordInd] << endl;
		}
	}
}

int main() {
	ifstream txtreader;
	string line;
	vector <string> dictVector;
	int lineNumber = 0;
	txtreader.open("alice.txt");
	dictVector = readDictFileAndMakeVector("cmudict.dict");
	if(txtreader){
		while(getline(txtreader, line)){
			vector <string> words;
			lineNumber++;
			dividelineToword(words, line);
			CheckWords(words, dictVector, lineNumber);
			words.clear();
		}
		txtreader.close();
	}else{
		cerr << "ERROR" << endl;
	}
	cout << "Spell check finished after checking " << WordNumber << " word" << endl;
	return 0;
}























