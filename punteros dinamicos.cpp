#include <iostream>
using namespace std;

main (){
	
		int edad,*p_edad;
	p_edad =&edad;
	cout<<"ingrese edad:";
	cin>>*p_edad;
	cout<<*p_edad<<endl;
	
	if(*p_edad>18){
		cout<<"mayor edad"<<endl;	
	}else{
		cout<<"menor edad"<<enld;
	}
	
	
/*	int total =0;
	int notas [total];
	char res;
	
	do{
		cout<<"ingrese nota"<<total<<": ";
		cin
	}while(res=='s' || res=='s');
	
	cout<<"--------------- mostrar notas---------------"<<enld;
	for (int i=0;i<total;i++){
		cout<<"notas ("<<i<<"): "<<notas[i]<<endl;
		
	}
*/	
	
int fila = 0, col=0,**pm_notas;
cout<<"ingrese la cantidad de estudientes:";
cin>>fil;
cout<<"indrese las cantidades notas por estudiante:";
cin>>col;
	pm_notas = new int *[fil]
	for(int i=0;i<fil;i++){
		pm_notas[i]=new int[col];
	}
	for (int i=0;i<fil;i++){
		cout<<"__________estudiante___________"<<i<<endl;
		for(int ii=0;00<col;ii++){
			cout<<"nota:"<<ii<<":";
			cin>>*(*(pm_notas+i)+ii);
			
		}
		cout<<"___________________________"<<enld;
	}
		cout<<"-------------Mostrar Notas----------------"<<endl;
		for (int i=0;i<fil;i++){
			cin>>*(*(pm_notas+i)+ii);
		}
	cout<<"________________________"<<endl;
	for(int i=0;i<fil;i++){
		delete []pm_n
	}
	delete []pm_notas;
	
	
	system ("pause");
}



