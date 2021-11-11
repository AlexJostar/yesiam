#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Input number" << endl;
    cin >> a;
    ((a > 0) || (a = 0)) ? (cout << "Positive") : (cout << "Zero");
}
