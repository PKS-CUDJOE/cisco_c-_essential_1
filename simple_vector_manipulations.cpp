#include <iostream>

using namespace std;

int main(void) {

	int vector1[7] = {4, 7, 2, 8, 1, 3, 0};
	int vector2[7];
	int auxilliary[7];
	for(int i=0;i<7;i++){
		auxilliary[i]=vector1[i];
		vector2[6-i] = auxilliary[i];

	}
	

	for(int i = 0; i < 7; i++)
		cout << vector2[i] << ' ';
	cout << endl;
	return 0;
}