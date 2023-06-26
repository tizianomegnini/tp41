#include <iostream>
using namespace std;
int ConvertirPesos(int dolar);
int main (){
	
	int dolar;
	cout<<"Ingresar la cantidad de dolares: ";
	cin>>dolar;
	cout<<"la cantidad de pesos es: "<<ConvertirPesos(dolar)<<endl;
	return 0;
}
int ConvertirPesos(int dolar){
	int pas;
	pas=dolar*331.37;
	return pas;
}
