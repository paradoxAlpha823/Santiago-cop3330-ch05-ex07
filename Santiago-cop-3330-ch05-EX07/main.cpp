#include <iostream>
using namespace std;

int main() {
    double a;
    double b;
    double c;

    cout << "Please enter three double values to serve as a, b, and c in ax^2 + bx + c = 0:" << endl;
    cin >> a >> b >> c;
    if(a==0)
    {
        if(b == 0)
        {
            cout << "No real roots" << endl;
        }else
        {
            cout << "x = " << -c/b << endl;
        }
    }else if(b==0)
    {
        double d = -c/a;
        if (d==0)
        {
            cout << "x=0" << endl;
        }else if (d<0)
        {
            cout << "No real roots." << endl;
        }else
        {
            cout << "Roots are: " << sqrt(d) << " and " << -sqrt(d) << endl;
        }
    }else
    {
        double disc = (b*b)-(4*a*c);
        if(disc==0)
        {
            cout << "Root is: " << -b/2*a << endl;
        }else if (disc < 0)
        {
            cout << "No real roots." << endl;
        }else
        {
            cout << "Roots are: " << ((-b+sqrt(disc))/(2*a)) << " and " << ((-b-sqrt(disc))/(2*a)) << endl;             // answers to the text response portion are in the .h file
        }
    }
    return 0;
}
