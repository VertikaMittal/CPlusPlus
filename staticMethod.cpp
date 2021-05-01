#include<iostream>
using namespace std;
class count{
    public:
    static int studentcnt;
    count(){
       studentcnt++; 
    }
    static void counting(){
        cout<<"no of students are "<<studentcnt<<endl;
    }
    
};
int count::studentcnt=0;

int main(){
    cout<<count::studentcnt<<endl;
    count a;
    // cout<<count::studentcnt<<endl;
    count b;
    // cout<<count::studentcnt<<endl;
    count c;
    // cout<<count::studentcnt<<endl;
    count d;
    // cout<<count::studentcnt<<endl;
    count::counting();
}