#include<iostream>
using namespace std;
template <class T1 , class T2>
class musab{
    public:
    T1 a;
    T2 b;

    musab (T1 a,T2 b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout<<a<<endl<<b<<endl;
    }
};

int main(){
    musab<int, char> m1 (5,'m');
    m1.display();
    return 0;
}