#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double pi{0};
    double term {0};
    double presicion {0.0000001};
    double n = 0;
    double absoluto {1};

    while (absoluto > presicion){
        term = (pow(-1,n))/ (2*n + 1);
        absoluto = term >= 0? term : term * -1;
        pi += term*4;
        n++;
    }
    
    cout.precision(8);
    cout<<"El valor de pi es: " << pi <<endl;
    
        return 0;
}
