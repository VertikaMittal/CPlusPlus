#include<iostream>
#include<string>
using namespace std;
class introduce{
protected:
    string name;
    int age;
 public:   
    void set(string iname,int iage)
    {
        name=iname;
        age=iage;
    }
};
class second:private introduce{
    public:
    void tellme()
    {
        cout<<"my name is "<<name<<" and age  is "<<age<<endl;
    }
    void setdata(string iname,int iage)
    {
       set(iname,iage);
    }
};
class third:public second{
    public:
    
    void setseconddata(string iname,int iage)
    {
       setdata(iname,iage);
    }
};

int main(){
    third obj;
    obj.setseconddata("vertika mittal",20);
    obj.tellme();
    return 0;
}