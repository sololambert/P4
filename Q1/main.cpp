// PRACTICE 4: Exercise 1

#include <iostream>
using namespace std;

class Rectangle {

   public:
   int l,b;
   int area(){return l*b;}

};



int main () {

  Rectangle rect;
  cout<<"Enter length of rectangle:";
  cin>>rect.l;
  cout<<"Enter breadth of rectangle:";
  cin>>rect.b;
  cout <<"Area:"<< rect.area();


  return 0;
}
