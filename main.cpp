#include <iostream>

using namespace std;

class overload
{
    private:
        int number;
    public:
        overload()
        {
            number=5;
        }
        overload(int m)
        {

            number=m;
        }
        void operator ++()
        {

            number = number+2+6;
        }
        void operator --()
        {

            number = number-3*10;
        }
        overload operator +(overload ol)
        {

            overload number2;
            number2.number = number + ol.number;
            return number2;
        }
        overload operator -(overload ol)
        {

            overload number2;
            number2.number = number - ol.number;
            return number2;
        }
        overload operator /(overload oo)
        {

            overload num;
            num.number = number / oo.number;
            return num;
        }
        overload operator *(overload o1)
        {

            overload number2;
            number2.number = number * o1.number;
            return number2;
        }
        void Display()
        {

            cout<<"\n number is : "<<number;
        }
};
int main()
{
    overload t,o2(9),o4(4);
    ++t;
    t.Display();
    --t;
    t.Display();
    t= t + t;
    t.Display();
    t= t - t;
    t.Display();
    o4 = o2 * t;
    o4.Display();
    o4 = o4/t;
    o4.Display();
    o4= o4 + o2;
    o4.Display();
    o2= o4 - o2;
    o2.Display();
    return 0;
}
