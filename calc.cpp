#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");
    double a, b;

    
    cout << "������� ����� a: "; cin >> a;
    cout << "������� ������� b: "; cin >> b;
    
    double result = pow(a, b);

    
   cout << a << " � ������� " << b << " = " << result << endl;

    return 0;
}