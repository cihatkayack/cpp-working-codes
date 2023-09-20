//============================================================================
// Name        : exerciseForFile.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cctype>
#include <sstream>
using namespace std;

void example1(string);
void example2(string);
void example3(string, int);
void example4(string);
void example5(string);
void example6(string);
void example6type2(string);
void example7(string, string, string);
void example8(string);
void labexercise1WEEK8();
void labexercise2WEEK8();
void labexercise3WEEK8();
void exampleoffilewrite();
void medianfilterwithfile(string);
void exampleforcomma();

int main() {
//	example1("1_names.txt");
//	example2("2_midtermGrades.txt");
//	example3("3_bestPictures.txt", 4);
//	example4("isimler.txt");
//	example5("veri.txt");
//	example6("huseyni_turku_havada_bulut.txt");
//	example6type2("huseyni_turku_havada_bulut.txt");
//	example7("A_orta.txt", "A_sag.txt", "A_sol.txt");
//	example8("huseyni_turku_havada_bulut.txt");
//	labexercise1WEEK8();
//	labexercise2WEEK8();
//	labexercise3WEEK8();
//	exampleoffilewrite();
//	medianfilterwithfile("sig4Channel.txt");
	exampleforcomma();
	return 0;
}

void exampleforcomma(){
	ifstream filereader;
	string line;
	vector <string> words;
	filereader.open("reverse.txt");
	if(filereader){
		while(getline(filereader, line)){
			stringstream ss(line);
			string data;
			while(getline(ss, data, ',')){
				cout << data;
				words.push_back(data);
			}
		}
	}else{
		cerr << "ERROR" << endl;
	}
	filereader.close();


	ofstream filewriter;
	filewriter.open("newreverse.txt");
	for(unsigned int i = 0; i < words.size();i++){
		string word = words[i];
		int Ind = word.length()-1;
		if(word[Ind] == '.' or word[Ind] == ' '){
			filewriter << words[i] << endl;
		}else{
			filewriter << words[i];
		}
	}
	filewriter.close();
}

void PrintVector(vector <double> x){
	for(unsigned int i = 0; i < x.size();i++){
		cout << x[i] << endl;
	}
}

void divideintowords(string line, vector<double> &filesline){
	stringstream ss(line);
	double word;
	while(ss >> word){
		filesline.push_back(word);
	}
}

void writeFile(vector<double> signal1, vector<double> signal2, vector<double> signal3, vector<double> signal4){
	ofstream filewriter;
	filewriter.open("sigWithmedianoperaiton.txt");
	for(unsigned int i = 0; i < signal1.size();i++){
		filewriter << signal1[i] << "\t" << signal2[i] << "\t" << signal3[i] << "\t" << signal4[i] << "\t"  << endl;
	}
	filewriter.close();
}

void swap(vector <double> &x, int ind1, int ind2){
	int temp = x[ind1];
	x[ind1] = x[ind2], x[ind2] = temp;
}

double selectionSort(vector<double> &x, int len){
	for(int i = 0; i < len; i++){
		int min = x[i], ind = i;
		for(int k = i+1; k < len;k++){
			if(x[k] < min){
				min = x[k], ind = k;
			}
		}
		if(ind != i){
			swap(x, ind, i);
		}
	}
	int middlepoint = x[len/2];
	return middlepoint;
}


void median_filter(vector<double> &VectorName, int n){
	int middlePoint;
	for(unsigned int i = n;i < VectorName.size() - n; i++){
		vector <double> median;
		for(unsigned int medianInd = i - n; medianInd < i + n + 1 ;medianInd++){
			median.push_back(VectorName[medianInd]);
		}
		middlePoint = selectionSort(median, median.size());
		median.clear();
		VectorName[i] = middlePoint;
	}
}

void medianfilterwithfile(string filename){
	string line;
	vector <double> signal1;
	vector <double> signal2;
	vector <double> signal3;
	vector <double> signal4;
	ifstream filereader;
	filereader.open(filename);
	if(filereader){
		while(getline(filereader, line)){
			vector <double> Filesline;
			divideintowords(line, Filesline);
			signal1.push_back(Filesline[0]);
			signal2.push_back(Filesline[1]);
			signal3.push_back(Filesline[2]);
			signal4.push_back(Filesline[3]);
			Filesline.clear();
		}
		filereader.close();
	}else{
		cerr << "ERROR" << endl;
	}
	median_filter(signal1,2);
	median_filter(signal2,2);
	median_filter(signal3,2);
	median_filter(signal4,2);
	writeFile(signal1,signal2,signal3,signal4);
}

void exampleoffilewrite(){
	string filename = "4_fightClub.srt", wfilename = "fightclubWrite",line;
	ifstream filereader;
	ofstream filewriter;
	filereader.open(filename);
	filewriter.open(wfilename);
	if(filereader){
		while(getline(filereader, line)){
			if(line.size()>2 and !isdigit(line[0])){
				filewriter << line << endl;
			}
		}
	}else{
		cerr << "Error" << endl;
	}
}

void printVECTOR(vector <string> vectorname){
	for(unsigned int i = 0; i < vectorname.size(); i++){
		cout << vectorname[i] << endl;
	}
}

void readFile(string filename, vector<string> &Vectorname){
	ifstream file_reader;
	string line;
	file_reader.open(filename);
	if(file_reader){
		while(true){
			file_reader >> line;
			if(!file_reader){
				break;
			}else{
				for(unsigned int i = 0;i < line.length();i++){
					line[i] = tolower(line[i]);
				}
				Vectorname.push_back(line);
			}
		}
		file_reader.close();
	}else{
		cerr << "Error" << endl;
	}
}


void labexercise1WEEK8(){
	vector<string> wotWord, lotrWord, sameWords;
	readFile("wot.txt", wotWord);
	readFile("lotr.txt", lotrWord);
	for(unsigned int i = 0; i < wotWord.size(); i++){
		for(unsigned int j = 0; j < lotrWord.size(); j++){
			if(wotWord[i] == lotrWord[j]){
				int count = 0;
				for(unsigned int k = 0; k < sameWords.size();k++){
					if(wotWord[i] == sameWords[k]){
						count++;
					}
				}
				if (count == 0){
					sameWords.push_back(wotWord[i]);
				}
			}
		}
	}
	printVECTOR(sameWords);

}

void readfilebydivision(string filename, vector<string> &question, vector<string> &answer){
	ifstream filereader;
	string line;
	int count = 0;
	filereader.open(filename);
	if(filereader){
		while(getline(filereader, line)){
			count++;
			if(count % 2 == 0){
				answer.push_back(line);
			}else{
				question.push_back(line);
			}
		}
		filereader.close();
	}else{
		cerr << "Error" << endl;
	}
}


void labexercise2WEEK8(){
	srand(time(0));
	vector<string> question, answer;
	string answerfromuser;
	readfilebydivision("quiz.txt", question, answer);
	int numberofQuestion = 10, asknumber = 10;
	for(int i = 0; i < asknumber; i++){
		int question_index = rand()%numberofQuestion;
		cout << question[question_index]; cin >> answerfromuser;
		cout << "Here is the answer: " << answer[question_index] << endl;
	}
}

void readFileLine(string filename, vector <string> &Vectorname){
	ifstream filereader;
	string line;
	filereader.open(filename);
	if(filereader){
		while(getline(filereader, line)){
			Vectorname.push_back(line);
		}
	}else{
		cerr << "Error" << endl;
	}
}

void encoded(vector <string> &Vectorname, char mapkeys[], char mapvalues[]){
	for(unsigned int i = 0; i < Vectorname.size(); i++){
		string line = Vectorname[i], new_sentence = "";
		for(unsigned int j = 0; j < line.length(); j++){
			char letter = tolower(line[j]);
			for(unsigned int k = 0; k < 22; k++){
				if(letter == mapkeys[k]){
					letter = mapvalues[k];
					break;
				}
			}
			new_sentence += letter;
		}
		Vectorname[i] = new_sentence;
	}
}

void decoded(vector <string> &Vectorname, char mapkeys[], char mapvalues[]){
	for(unsigned int i = 0; i < Vectorname.size();i++){
		string line = Vectorname[i], new_line = "";
		for(unsigned int j = 0; j < line.length(); j++){
			char letter = tolower(line[j]);
			for(unsigned int k = 0; k < 22;k++){
				if(letter == mapvalues[k]){
					letter = mapkeys[k];
					break;
				}
			}
			new_line += letter;
		}
		Vectorname[i] = new_line;
	}
}

void fileWriteCode(string filename, vector<string> line){
	ofstream filewriter;
	filewriter.open(filename);
	for(unsigned int i = 0; i < line.size();i++){
		filewriter << line[i];
	}
	filewriter.close();
}

void labexercise3WEEK8(){
	char map_keys[] =   {'a','b','c','d','e','f','g','h','i','j'
			,'k','l','m','n','o','p','r','s','t','w','y','z'};
	char map_values[] = {'m','s','n','g','f','o','a','j','w','b',
			'e','c','i','k','h','d','z','l','t','y','r','p'};
	string filename = "message.txt", wfilename = "encode.txt", wfilename2 = "decode.txt";
	vector<string> line;
	readFileLine(filename, line);
	printVECTOR(line);
	encoded(line, map_keys, map_values);
	printVECTOR(line);
	fileWriteCode(wfilename, line);
	decoded(line,map_keys,map_values);
	printVECTOR(line);
	fileWriteCode(wfilename2, line);
}


void example1(string file_name){
	ifstream file_reader;
	string line;
	int student_numbers = 0;
	file_reader.open(file_name);
	if(file_reader){
		while(true){
			file_reader >> line;
			if(!file_reader){
				cout << "There were " << student_numbers << " names in the file" << endl;
				break;
			}else{
				student_numbers++;
				cout << "Hi " << line << endl;
			}
		}
		file_reader.close();
	}else{
		cout << "File could not open: " << file_name << endl;
	}
}

void example2(string file_name){
	ifstream file_reader;
	double line, TotalGrades = 0;
	int numberOfGrades = 0;
	file_reader.open(file_name);
	if(file_reader){
		while(true){
			file_reader >> line;
			if(!file_reader){
				break;
			}else{
				numberOfGrades++;
				TotalGrades += line;
			}
		}
		file_reader.close();
	}else{
		cout << "File could't open: " << file_name << endl;
	}
	cout << "Avarage of grades = " << (TotalGrades/numberOfGrades) << endl;
}

void readlinestoVector(string file_name, vector<string> &movies){
	ifstream file_reader;
	string line;
	file_reader.open(file_name);
	if(file_reader){
		while(getline(file_reader, line)){
			movies.push_back(line);
		}
	}
}

void printVector(vector<string> vectorname){
	for(unsigned int i = 0; i < vectorname.size(); i++){
		cout << vectorname[i] << endl;
	}
}

void example3(string file_name, int numofmovie){
	srand(time(0));
	vector<string> movies;
	readlinestoVector(file_name, movies);
//	printVector(movies);
	for(int i = 0; i < numofmovie;i++){
		int random_index = rand()%movies.size();
		cout << movies[random_index] << endl;
		movies.erase(movies.begin()+random_index);
	}
}

void example4(string file_name){
	ifstream file_reader;
	string line;
	file_reader.open(file_name);
	if(file_reader){
		while(true){
			file_reader >> line;
			if(!file_reader){
				break;
			}else{
				for(unsigned int i = 0; i < line.length(); i++){
					line[i] = toupper(line[i]);
				}
				cout << "HELLO " << line << endl;
			}
		}
		file_reader.close();
	}
}

void readvectorInt(string file_name, vector <int> &values){
	ifstream file_reader;
	double line;
	file_reader.open(file_name);
	if(file_reader){
		while(true){
			file_reader >> line;
			values.push_back(line);
			if(!file_reader){
				break;
			}
		}
	}else{
		cout << "File could not open: " << file_name << endl;
	}
}

void example5(string file_name){
	vector <int> values;
	double toplam = 0;
	readvectorInt(file_name, values);
	for(unsigned int i = 0; i < values.size(); i++){
		toplam += values[i];
	}
	cout << "Avarage of number from file = " << toplam/values.size() << endl;
}

void example6(string file_name){
	ifstream file_reader;
	string line;
	file_reader.open(file_name);
	if(file_reader){
		while(getline(file_reader, line)){
			cout << line << endl;
		}
	}else{
		cout << "File couldn't open: " << file_name << endl;
	}
}

void example6type2(string file_name){
	vector <string> turkuhavada;
	string line;
	ifstream file_reader;
	file_reader.open(file_name);
	if(file_reader){
		while(getline(file_reader, line)){
			turkuhavada.push_back(line);
		}
	}else{
		cerr << "Error" << endl;
	}
	for(unsigned int i = 0; i < turkuhavada.size();i++){
		cout << turkuhavada[i] << endl;
	}
}

void readfile(string file_name, vector <string> &vectorname){
	ifstream file_reader;
	string line;
	file_reader.open(file_name);
	if(file_reader){
		while(getline(file_reader,line)){
			vectorname.push_back(line);
		}
		file_reader.close();
	}
}

void example7(string file_name1, string file_name2, string file_name3){
	srand(time(0));
	vector <string> middle, right, left;
	readfile(file_name1, middle);
	readfile(file_name2, right);
	readfile(file_name3, left);
	for(int i = 0; i < 10; i++){
		cout << left[rand()%left.size()] <<  " ";
		cout << middle[rand()%middle.size()] << " ";
		cout << right[rand()%right.size()] << endl;
	}
}

void createWords(string line, vector <string> &words){
	stringstream ss(line);
	string word;
	while(ss >> word){
		words.push_back(word);
	}
}

void example8(string file_name){
	vector <string> nota, lyrics;
	string line;
	ifstream file_reader;
	file_reader.open(file_name);
	if(file_reader){
		while(getline(file_reader, line)){
			vector <string> words;
			createWords(line, words);
			nota.push_back(words[1]);
			lyrics.push_back(words[5]);
			words.clear();
		}
		file_reader.close();
	}else{
		cerr << "Error" << endl;
	}
	for(unsigned int i = 0; i < nota.size();i++){
		cout << nota[i] << "\t";
	}
	cout << endl;
	for(unsigned int i = 0; i < lyrics.size();i++){
		cout << lyrics[i] << "\t";
	}
	cout << endl;
}














