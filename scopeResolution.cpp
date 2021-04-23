#include<iostream>
#include<string>
using namespace std;
class introduce{
    public:
    string name;
    void myname();
    
};

void introduce::myname()
{
        cout<<"my name is "<<introduce::name<<endl ;
}

int main(){
    introduce obj;
    obj.name="Vertika";
    obj.myname();

    introduce *obj2=new introduce;
    obj2->name="Noni";
    obj2->myname();
    return 0;
}