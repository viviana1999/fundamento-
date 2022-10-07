#include<iostream>
using namespace std;

int main()
{
	int VAPO_i=0,VAPO_l;
	float VAPO_x,VAPO_s=0;
	cout<<"ingrese el limite VAPO_l="; cin>>VAPO_l;
	do{
		
	cout<<"ingrese el numero VAPO_x="; cin>>VAPO_x;
	VAPO_i=VAPO_i+1;
	VAPO_s=VAPO_s+VAPO_x;



	}while(VAPO_i<VAPO_l);
	cout<<"Se ingresaron "<<VAPO_l<<" numeros "<< "que sumaron "<<VAPO_s<<endl;
	return 0;



}
