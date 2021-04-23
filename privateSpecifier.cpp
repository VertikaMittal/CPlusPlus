#include<iostream>
#include<string>
using namespace std;
class introduce{
    private:
    string name;
    public:
    void getname()
    {
        cout<<"my name is "<<name<<endl;
    }
    void setname(string value)
    {
        name=value;
    }
};
int main(){
    introduce obj;
    obj.setname("Vertika");
    obj.getname();

    introduce *obj2=new introduce;
    obj2->setname("noni");
    obj2->getname();
    return 0;
}