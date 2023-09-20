#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	vector <int> ilk_zar_ihtimalleri;
	for(int a = 1; a <= 4;a++){
		for(int b = 1; b <= 4;b++){
			for(int c = 1; c <= 4;c++){
				for(int d = 1; d <= 4; d++){
					int ihtimal1 = a + b + c + d;
					ilk_zar_ihtimalleri.push_back(ihtimal1);
				}
			}
		}
	}
	vector <int> ikinci_zar_ihtimalleri;
	for(int j = 1; j <= 6;j++){
		for(int k = 1; k <= 6;k++){
			int ihtimal2 = j + k;
			ikinci_zar_ihtimalleri.push_back(ihtimal2);
		}
	}
	int kazandigi_sefer = 0;
	for(unsigned int p = 0; p < ilk_zar_ihtimalleri.size();p++){
		for(unsigned int r = 0; r < ikinci_zar_ihtimalleri.size();r++){
			if (ilk_zar_ihtimalleri[p] > ikinci_zar_ihtimalleri[r]){
				kazandigi_sefer += 1;
			}
		}

	}
	cout << fixed << setprecision(7) << double(kazandigi_sefer)/double((4*4*4*4) * (6*6));
	return 0;
}




