#include<iostream>
using namespace std;

int main()
{
	int JDPM_i=0,JDPM_l;
	float JDPM_x,JDPM_s=0;
	cout<<"ingrese el limite JDPM_l="; cin>>JDPM_l;
	do{
		
	cout<<"ingrese el numero JDPM_x="; cin>>JDPM_x;
	JDPM_i=JDPM_i+1;
	JDPM_s=JDPM_s+JDPM_x;



	}while(JDPM_i<JDPM_l);
	cout<<"Se ingresaron "<<JDPM_l<<" numeros "<< "que sumaron "<<JDPM_s<<endl;
	return 0;



}
