#include <iostream>
using namespace std;

main() {
	int total= 0, *p_notas;
	int notas[total];
	char res;

	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>res;
	}while(res=='s' || res=='S');
	
	
	cout<<"----------- Mostrar Notas ----------"<<endl;
	for (int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<notas[i]<<endl;
		p_notas++;
	}
	delete[] p_notas;
	system("pause");
}
