#include<iostream>
#include<string>
using namespace std;
class introduce{
 public:  
    string name; 
    void firstclass()
    {
        cout<<"ist class"<<endl;
    }
};
class second{
    public:
    int age;  
    void secondclass()
    {
        cout<<"ii nd class"<<endl;
    }
    
};
class third:public second,public introduce{
    public:
     void thirdclass()
    {
        cout<<"iii rd class"<<endl;
    }
    
    void setdata(string iname,int iage)
    {
       name=iname;
       age=iage;
    }
    void tellme()
    {
        cout<<"my name is "<<name<<" and age  is "<<age<<endl;
    }
};

int main(){
    third obj;
    obj.setdata("vertika mittal",20);
    obj.firstclass();
    obj.secondclass();
    obj.thirdclass();
    obj.tellme();
    return 0;
}