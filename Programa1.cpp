#include <iostream>

using namespace std;

int main(){
	long num=0;
	long res=1;

	cout<<"Ingresa un n\xA3mero: ";
	cin>>num;	
	
	if(num>10)
	{
		for(int i=1;i<=num;i++)
		{
			res*=i;
		}
		cout<<"El resultado multiplicando todos los anteriores a"<<num<<" es: "<<res;
	}
	else
	{
		res=0;
		for(int i=1;i<=num;i++)
		{
			res+=i;
		}
		cout<<"El resultado de sumar "<<num<<" con los anterior a este es: "<<res;
		
	}
	
	
	
	return 0;
}
