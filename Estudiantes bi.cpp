#include <iostream>
using namespace std;

main(){ 
    int fil = 0, col=0,**pm_notas;
    cout<<"Ingrese los Estudiantes:";
    cin>>fil;
    cout<<"Ingrese la cantidad de Notas por estudiantes:";
    cin>>col;
    
    pm_notas = new int *[fil];
    for(int i=0;i<fil;i++){
    	pm_notas[i] = new int[col];
	}
	
	for(int i=0;i<fil;i++){
		cout<<"_______Estudiante_______"<<i<<endl;
		for (int ii=0;ii<col;ii++){
			cout<<"Nota:"<<ii<<" : ";
			cin>>*(*(pm_notas+i)+i);
		}
		cout<<"______________"<<endl;
	}
	cout<<"-------Mostrar Notas-------"<<endl;
	for(int i=0;i<fil;i++){
		
		for (int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"_______________________"<<endl;
	}
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	
	
    system("pause");
}
