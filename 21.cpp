#include <iostream>
using namespace std;
class jeeprep
{
protected:
    string title;
    int year;

public:
   
    jeeprep(string s1, int r)
    {
        title = s1;
        year = r;
    }
    // virtual 
    void display() {}
};
class ms : public jeeprep
{
public:
    int ms_score;
    ms(string s, int f, int a) : jeeprep(s, f)
    {
        ms_score = a;
    }
    void display()
    {
        cout << "ms reviews are " << title << endl;
        cout << "jee year in ms is " << year << endl;
        cout << "score of ms is " << ms_score << endl;
    }
};
class fiitjee : public jeeprep
{
public:
    int f_score;
    fiitjee(string s, int f, int a) : jeeprep(s, f)
    {
        f_score = a;
    }
    void display()
    {
        cout << "fiitjee reviews are " << title << endl;
        cout << "jee year in fiitjee is " << year << endl;
        cout << "score of fiitjee is " << f_score << endl;
    }
};

int main()
{
    string t;
    int score;
    int year;
    t = "**** Poor faculty in day scholar ****";

    ms m1(t, 2018, 10);
    // METHOD - IV  m1.display();

    t = " ****Awesome studies**** ";
    fiitjee f1(t, 2019, 80);
    // METHOD - IV  f1.display();

    // METHOD - I ; I AND II are same just ptr initialization is different
    // ms * ptr = new ms [1];
    // ptr = &m1;
    // ptr->display();
    // fiitjee * fptr = new fiitjee [1];
    // fptr = &f1;
    // fptr->display();

    // METHOD - II
    // ms *ms_ptr;
    // ms_ptr = &m1;
    // fiitjee *f_ptr;
    // f_ptr = &f1;

    // ms_ptr->display();
    // f_ptr->display();

    // METHOD - III
    // jeeprep * ptr [2];
    // ptr[0] = &m1;
    // ptr[1] = &f1;
    // ptr[0]->display();
    // ptr[1]->display();

//     METHOD - V
    // jeeprep *Mptr;
    // jeeprep *Fptr;
    // Mptr = &m1;
    // Mptr->display();
    // Fptr = &f1;
    // Fptr->display();

    return 0;
}