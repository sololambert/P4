// PRACTICE 4: Exericse 3


#include <iostream>
using namespace std;

class Imaginary{
	public:

	double i,j;

	Imaginary(double ni, double nj){

	i=ni;j=nj;}
};

int main(){

	double numb1,numb2;
	cout << "first number \n";
	cout<< "Enter the real part:";
	cin>> numb1;
	cout<< "Enter the imaginary part:";
	cin>> numb2;
	Imaginary number1(numb1,numb2);
	cout << "second number \n";
    double numb3,numb4;
	cout<< "Enter the real part:";
	cin>> numb3;
	cout<< "Enter the imaginary part:";
	cin>> numb4;

	Imaginary number2(numb3,numb4);

	double real;

    real = number1.i +number2.i;

    double imaginary;

    imaginary = number2.j + number1.j;

    cout << "the sum of the real parts is "<< real << "\n";
    cout << "the sum of the imaginary parts is "<<imaginary;

    return 0;
}
