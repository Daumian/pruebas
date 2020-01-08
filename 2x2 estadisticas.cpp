#include <iostream>

using namespace std;

double A=0;

double PorC=100;
double Divisor=10000;

int main(){

	cout<<"Debo ir actualizando estas apps"<<endl;
		cout<<"Posibilidad de que pase :   ";cin>>A; 
			cout<<endl;
	
			
double a=PorC-A;
			cout<<endl;
			
	
	cout<<"si hubieran 2 personas";cout<<endl;
	
	cout<<"posibilidades de que a ambos les pase:     ";cout<<(PorC/Divisor)*(A*A);cout<<" %  ";cout<<endl;
	cout<<"posibilidades de que solo a uno le pase:   ";cout<<(PorC/Divisor)*(a*A)+(PorC/Divisor)*(A*a);cout<<" %  ";cout<<endl;
	cout<<"posibilidades de que a ninguno le pase:    ";cout<<(PorC/Divisor)*(a*a);cout<<" %  ";cout<<endl;
	
	

	
	

		cout<<endl;





return 0;
}
