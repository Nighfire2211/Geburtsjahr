#include <iostream>

using namespace std;


int main() 
{
	int x;
	int jahr;
	
	cout << "Berechnung des Alters"<< endl;
	cout << "Geben Sie ihr Geburtsjahr ein: "<< endl;
	cin >> x;
	jahr= 2018 - x;
	cout << "Sie sind "<< jahr << " Jahre alt.\n";
	system("PAUSE");
	return 0;
}
