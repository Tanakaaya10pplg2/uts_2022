#include <iostream>
using namespace std;

float luas_lingkaran(int r){
	float phi=22/7, luas;
	luas=phi*r*r;
	return luas;
}

float keliling_lingkaran(int r){
	float phi=22/7, keliling;
	keliling=phi*r*2;
	return keliling;
}

int main()
{
	int r;
	cout<<"masukkan jari jari : ";
	cin>>r;
	
	cout<<"luas lingkaran = "<<luas_lingkaran(r)<<endl;
	cout<<"keliling lingkaran = "<<keliling_lingkaran(r)<<endl;
}