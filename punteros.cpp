#include<iostream>
using namespace std;
main(){
	int edad=25,*p_edad;
	p_edad = &edad;
	
	cout<<"variable edad:"<<edad<<endl;
	cout<<"variable puntero:"<<*p_edad<<endl;
	
	cout<<"--------- cambiar valores --------- "<<endl;
	*p_edad = 40;
	
	cout<<"variable edad:"<<edad<<endl;
	cout<<"variable puntero:"<<*p_edad<<endl;
	
	cout<<"---------- otra varieble a p_edad valores --------"<<endl;
	int edad2=100;
	*p_edad = &edad2;
	edad=400;
	cout<<"variable edad:"<<edad<<endl;
	cout<<"variable puntero:"<<*p_edad<<endl;
	cout<<"Variable edad2:"<<edad2<<endl;
	
	
	
	
	
	system("pause");
}
