// PRACTICE 4: Exercise 2

#include <iostream>
using namespace std;

class data{
   public:
   int numb1,numb2;
   data(int number1,int number2){
numb1=number1;numb2=number2;cout <<"numbers initialized \n";
    }
    int sum_numb(){return numb1+numb2;}
};


int main (){

    int num1;
	int num2;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;


	data set_numb(num1,num2);

	cout << "The addition result on:"<< set_numb.sum_num()<<"\n";


	return 0;
}
