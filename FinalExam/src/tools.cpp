#include "tools.h"

// Name, surname: Cihat Kaya
// Write your answers in this file


void print_digit_sum_being_prime(int number1, int number2){
	for(int i = number1; i <= number2; i++){
		string value = to_string(i);
		int total = 0;
		for(unsigned int j = 0; j < value.length();j++){
			total += value[j] - '0';
		}
		int countforPrime = 0;
		for(int k = 2; k < total; k++){
			if(total % k == 0){
				countforPrime++;
			}
		}
		if(countforPrime == 0){
			cout << i << " has a prime digit sum: " << total << endl;
		}
	}
}
void read_file(string filename, vector<string> &countryNames, vector<int> &codes){
	fstream filereader;
	string line;
	filereader.open("countryInfo.txt");
	if(filereader){
		getline(filereader, line);
		while(getline(filereader, line)){
			stringstream ss(line);
			string data;
			vector <string> values;
			while(ss >> data){
				values.push_back(data);
			}
			countryNames.push_back(values[0]);
			codes.push_back(stoi(values[1]));
			values.clear();
		}
	}
}
void print_code_list(vector<string> countryNames, vector<int> codes, int number){
	for(int i = 0; i < number;i++){
		cout << countryNames[i] << ": " << codes[i] << endl;
	}
}
void print_code_for_country(string country, vector<string> countryNames, vector<int> codes){
	int countryInd = 0 , count = 0;
	for(unsigned int i = 0; i < countryNames.size();i++){
		if(country == countryNames[i]){
			countryInd = i;
			count++;
			break;
		}
	}
	if(count == 1){
		cout << "Code for " << country << " = " << codes[countryInd] << endl;
	}else if(count == 0){
		cout << "Country " << country << " not available in the list" << endl;
	}
}
void sort_codes(vector<string> &countryNames, vector<int> &codes){
	for (unsigned int j=0; j<codes.size(); j++) {
		int min=codes[j]; unsigned int ind=j;
		for (unsigned int k=j+1; k<codes.size(); k++) {
			if(codes[k]<min){
				min=codes[k];ind=k;
			}
		}

		if(ind!=j){
			int temp=codes[ind];
			string temp2 = countryNames[ind];
			codes[ind]=codes[j];codes[j]=temp;
			countryNames[ind] = countryNames[j]; countryNames[j] = temp2;
		}

	}
}
















