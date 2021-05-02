#include<iostream>
#include<string>
using namespace std;
class introduce{
    public:
    string name;
    int age;
    
    void set(string iname,int iage)
    {
        name=iname;
        age=iage;
    }
};
class second:public introduce{
    public:
    int rollno;
    void setroll(int iroll)
    {
        rollno=iroll;
    }
    void tellme()
    {
        cout<<"my name is "<<name<<" and age  "<<age<<" and roll no   "<<rollno<<endl;
    }
};

int main(){
    second obj;
    obj.set("vertika mittal",24);
    obj.setroll(65);
    obj.tellme();
    return 0;
}