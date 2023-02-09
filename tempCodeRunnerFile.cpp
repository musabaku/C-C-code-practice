#include <iostream>
#include <memory>
using namespace std;

class Complex
{
    int rp, cp;
    public:
        Complex()
        {
            rp=0;
            cp=0;
        }
        
        Complex(const int &x, const int &y)
        {
            rp=x;
            cp=y;
        }
        
        static unique_ptr<Complex> subtract(unique_ptr<Complex> &p1, unique_ptr<Complex>&p2)
        {
            unique_ptr<Complex> a (new Complex());
            a->rp = p1->rp - p2->rp;
            a->cp = p1->cp - p2->cp;
            return a;
        }
        
        void print(unique_ptr<Complex> &p3)
        {
            if(p3->rp != 0)
            {
                if(p3->cp < 0)
                    cout << p3->rp << p3->cp << "i";
                
                else if(p3->cp == 0)
                    cout << p3->rp;
                
                else
                    cout << p3->rp << "-" << p3->cp << "i";
                
                cout << endl;
            }
            else
            {
                if(p3->cp < 0)
                    cout << p3->cp << "i";
                
                else if(p3->cp == 0)
                    cout << p3->rp;
                
                else
                    cout << p3->cp << "i";
                
                cout << endl;
            }
        }
};

int main()
{
    int r1, c1;
    int r2, c2;
    
    r1 = 5;
    c1 = -1;
    r2 = 6;
    c2 = 2;
    
    unique_ptr<Complex> p1 (new Complex(r1,c1));
    unique_ptr<Complex> p2 (new Complex(r2,c2));
    unique_ptr<Complex> p3 (new Complex());
    
    p3 = Complex :: subtract(p1, p2);
    
    p3->print(p3);
}