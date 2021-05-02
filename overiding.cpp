#include<iostream>
#include<string>
using namespace std;
class introduce{
    public:
    string name;
    void myname()
    {
        cout<<"my name is noni"<<endl;
    }
};
class second:public introduce{
    public:
    void myname()
    {
        cout<<"my name is vertika"<<endl;
    }
    
};
int main(){
    second obj;
    obj.myname();
    obj.introduce::myname();
}