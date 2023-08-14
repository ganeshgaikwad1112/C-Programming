#include<iostream>
using namespace std;


class Base
{
    public:
    int A,B;

    Base()
    {

        cout<<"inside base construcor\n";
    }  
    ~Base()
    {
        cout<<"inside base destructor\n";

    } 

    void Fun()
    {

        cout<"inside fun \n";

    }
};

    class Derived: public Base
{
    public:
    int X, Y;

    Derived()
    {
        cout<<"insidre the derived constructor\n";

    }

    ~Derived()
    {
        cout<<"inside the destructor\n";

    }
     
     void Gun()
     {
        cout<<"inside the gun of derived \n";
     }

};


int main()
{

    return 0;
}