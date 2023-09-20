#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cctype>

using namespace std;
void greetNamesInFile(string);
void computeMidtermAverage(string);
void suggestSomeMovies(string, int);
void writeOnlyText(string, string);

int main() {
	greetNamesInFile("1_names.txt");
	cout << "---------------------------" << endl;
	computeMidtermAverage("2_midtermGrades.txt");
	cout << "---------------------------" << endl;
	suggestSomeMovies("3_bestPictures.txt", 7);
	cout << "---------------------------" << endl;
	writeOnlyText("4_fightClub.srt", "fightClub_justText.txt");
	return 0;
}

void greetNamesInFile(string file_name){
	ifstream file_reader;
	file_reader.open(file_name);
	string name;
	int num_names = 0;

	if(file_reader){
		while(true){
			file_reader >> name;
			if(!file_reader){
				break;
			}else{
				cout << "Hi " << name << endl;
				num_names++;
			}
		}
		file_reader.close();
	} else {
		cout << "Could not read file: " << file_name << endl;
	}
	cout << "There were " << num_names << " names in the file" << endl;
}

void computeMidtermAverage(string file_name){
	ifstream file_reader;
	file_reader.open(file_name);
	double grade, sum_grades = 0;
	int num_grades = 0;

	if(file_reader){
		while(true){
			file_reader >> grade;
			if(!file_reader){
				break;
			}else{
				sum_grades += grade;
				num_grades++;
			}
		}
		file_reader.close();
	} else {
		cout << "Could not read file: " << file_name << endl;
	}
	cout << "Average grade = " << (sum_grades / num_grades) << endl;
}

void printVectorContents(vector<string> lines){
	for(string line:lines){
		cout << line << endl;
	}
}
void readLines2Vector(string file_name, vector<string> &lines){
	string line;
	ifstream file_reader;
	file_reader.open(file_name);
	if(file_reader){
		while(getline(file_reader, line)){
			lines.push_back(line);
		}
		file_reader.close();
	} else {
		cout << "Could not read file: " << file_name << endl;
	}

}
void suggestSomeMovies(string file_name, int num_movies_2_suggest){
	srand(time(0)); // pick a different random sequence in each run
	vector<string> movies;
	readLines2Vector(file_name, movies);
	cout << "Suggested movies:" << endl;
	for(int i = 0; i < num_movies_2_suggest; i++){
		int random_index = rand() % movies.size();
		cout << movies[random_index] << endl;
		//erase the element not to suggest it again
		movies.erase(movies.begin()+random_index);
	}
//	printVectorContents(movies);
}
void writeOnlyText(string in_file_name, string out_file_name){
	std::string line;
	ifstream file_reader;
	ofstream file_writer;

	file_reader.open(in_file_name);
	file_writer.open(out_file_name);
	if(file_reader){
		while(getline(file_reader, line)){
			if(line.size()>2 and !isdigit(line[0])){
				file_writer << line;
			}
		}
		file_reader.close();
	} else {
		cout << "Could not read file: " << in_file_name << endl;
	}
	file_writer.close();
	cout << "Output files created: " << out_file_name << endl;
}
