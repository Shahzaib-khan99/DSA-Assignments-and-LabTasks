#include <iostream>
using namespace std;

class A {
    public :
    int y;

};

class B :  virtual public A {

};

class C :  virtual public A {

};
class D :  public B , public C {

};

int main ()
{
D obj;
obj.y =100;
cout<< obj.y << endl;
}