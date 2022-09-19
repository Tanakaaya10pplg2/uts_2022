#include <iostream>
using namespace std;

int main(){
	int nilai;
	cout << "nilai = ";
	cin >> nilai;
	cout << "predikat = ";
	if (nilai > 92){
		cout << "A" << endl;
	}
	else if (nilai > 86){
		cout << "AB" << endl;
	}
	else if (nilai > 80){
		cout << "B" << endl;
	}
	else if (nilai > 70){
		cout << "C" << endl;
	}
	else {
		cout << "D" << endl;
	}
	return 0;
}