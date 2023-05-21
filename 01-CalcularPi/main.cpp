#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double pi{0.0};
    for (int n = 0; n < 1000000 ; n++)
    { 
        pi += (pow(-1,n))/ (2*n + 1);
    }
    pi = pi*4.00;
    cout.precision(6);
    cout << fixed << pi ;
    
        return 0;
}
