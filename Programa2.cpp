#include <iostream>

using namespace std;

void numeroConLetra(int num){
	if(num == 0) cout << "Cero";
	else if(num == 1) cout << "Uno";
	else if(num == 2) cout << "Dos";
	else if(num == 3) cout << "Tres";
	else if(num == 4) cout << "Cuatro";
	else if(num == 5) cout << "Cinco";
	else if(num == 6) cout << "Seis";
	else if(num == 7) cout << "Siete";
	else if(num == 8) cout << "Ocho";
	else if(num == 9) cout << "Nueve";
	else if(num == 10) cout << "Diez";
	else cout << "N\xA3mero no valido";
}

int main(){
	long num=0;
	cout<<"Ingresa un n\xA3mero: ";
	cin>>num;	
	numeroConLetra(num);
	return 0;
}


