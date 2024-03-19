#include <iostream>
using namespace std;

int panjang, lebar;

void inputdata()
   {
	cout << "Masukan Nilai Panjang : ";
	cin >> panjang;
	cout << "Masukan Nilai Lebar : ";
	cin >> lebar;
   }
int hitungluas()
   {
	return panjang * lebar;
   }
void bebas()
{
	cout << "luasanya adalah ; " << hitungluas() << endl;
}

int main() 
{
	inputdata(); 
	bebas();
}
   



