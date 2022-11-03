#include<iostream>
using namespace std;
class Test{
    int value;
    public:
    void getVal(){
        cout<<"enter the value";
        cin>>value;

    }
    void display(){
cout<<"value is "<<value;
    }
void operator-();
friend void operator+(Test &s);
};
void operator+(Test &s){//operator fn as friend fn to overload unary + operator
    s.value=+s.value;
}
void Test::operator-(){//operator fn as member fn to overload unary - operator
    value=-value;
}





int main(){
    Test t;
    t.getVal();
    cout<<"valur before change"<<endl;
    t.display();
    -t;
    cout<<"valur after change"<<endl;
    t.display();
    cout<<"valure after applying freind fn"<<endl;
    +t;
    t.display();
}