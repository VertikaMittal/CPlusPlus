#include<iostream>
#include<string>
using namespace std;
class introduce{
    private:
    string name;
    string setpvname()
    {
        return(name+" Mittal");
    }
    public:
    void getname()
    {
        cout<<"my name is "<<setpvname()<<endl;
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