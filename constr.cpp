#include<iostream>
#include<string>
using namespace std;
class introduce{
    private:
    string name;
    public:
    introduce()
    {
        name="noname";
    }
    introduce(string iname)
    {
        name=iname;
    }
    void setname(string value)
    {
        name=value;
    }
    void myname()
    {
        cout<<"my name is "<<name<<endl;
    }
};
int main(){
    introduce obj("vertika mittal");
    // obj.setname("Vertika mittal");
    obj.myname();

    // introduce *obj2=new introduce;
    // obj2->name="Noni";
    // obj2->myname();
    return 0;
}