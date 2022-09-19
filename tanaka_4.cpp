#include <iostream>
using namespace std;

float volume_balok(float p, float l, float t){
	float volume;
	volume = p*l*t;
	return volume;	
}

int main()
{
	float p, l, t;
	float volume;
	
	cout<<"masukkan panjang = ";
	cin>>p;
	
	cout<<"masukkan lebar = ";
	cin>>l;
	
	cout<<"masukkan tinggi = ";
	cin>>t;
	
	
	cout<<"volume = "<<volume; 
}
