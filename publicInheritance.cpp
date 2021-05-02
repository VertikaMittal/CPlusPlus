#include<iostream>
#include<string>
using namespace std;
class introduce{
protected://the protected members can be accesed in either same class or in the child class.
    string name;
    int age;
 public:   
    void set(string iname,int iage)
    {
        name=iname;
        age=iage;
    }
};
class second:public introduce{
    public:
    void tellme()
    {
        cout<<"my name is "<<name<<" and age  is "<<age<<endl;
    }
};

int main(){
    second obj;
    obj.set("vertika mittal",20);
    obj.tellme();
    return 0;
}