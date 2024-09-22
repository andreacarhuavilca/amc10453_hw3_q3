// amc10453_hw3_q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//ask user 3 questions to enter ints
//calculate that into aquadratic equation
//calculate the answer, meaning 5 different outcomes if this then that
// print the 6 solutions (if it has 1 or 2 solutions)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, discriminant;
    
    


    cout << "Please enter value of a: "; cin >> a;
    cout << "Please enter value of b: "; cin >> b;
    cout << "Please enter value of c: "; cin >> c;




    if (a == 0 && b == 0 && c == 0) 
    {
        cout << "This equation has an infinite number of solutions";
    }

    else if (a== 0 && b == 0) 
    {
        cout << "This equation has no solution";
    }

    else if (a == 0)
    {
        double x = -c / b;
        cout << "This equation has one real solution: x = " << x << endl;
    }
    else 
    {
        discriminant = (b * b) - (4 * a * c);

        if (discriminant > 0) 
        {
            double x1 = (-b + sqrt(discriminant)) / (2 * a);
            double x2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "This equation has two real solutions: x1 = " << x1 << "and x2 = " << x2 << endl;
        }
        else if (discriminant == 0) 
        {
            double x = -b / (2 * a);
            cout << "This equation has one real solution: x = " << x << endl;
        }
        else if (discriminant < 0)
        {
            cout << "This equation has no real solution." << endl;

        }
    }

    return 0;
}

