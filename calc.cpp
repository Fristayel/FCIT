#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");
    double a, b;

    
    cout << "¬ведите число a: "; cin >> a;
    cout << "¬ведите степень b: "; cin >> b;
    
    double result = pow(a, b);

    
   cout << a << " в степени " << b << " = " << result << endl;

    return 0;
}