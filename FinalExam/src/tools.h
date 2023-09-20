
#ifndef TOOLS_H_
#define TOOLS_H_
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void print_digit_sum_being_prime(int, int);
void read_file(string, vector<string> &, vector<int> &);
void print_code_list(vector<string>, vector<int>, int);
void print_code_for_country(string, vector<string>, vector<int>);
void sort_codes(vector<string> &, vector<int> &);

#endif /* TOOLS_H_ */
