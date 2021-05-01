#include<iostream>
#include<string>
using namespace std;
class introduce{
    private:
    string name;
    int age;
    public:
    introduce(string iname,int iage)
    {
        name=iname;
        age=iage;
    }
    void tellme()
    {
        cout<<"my name and age are "<<name<<"&"<<age<<endl;
    }
    friend void display(introduce man);
};
void display(introduce man){
     cout<<"my name and age are "<<man.name<<"  &   "<<man.age<<endl;
    
}

int main(){
    introduce obj("vertika mittal",24);
    //obj.display(); class introduce' has no member named 'display'
    display(obj);

   
    return 0;
}