#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    int num1 = generateFirstNum();
    int num2 = generateSecondNum();
    int sum  =add(num1 , num2);
    cout << "generated numbers...." << endl;
    cout << num1 << endl;
    cout << num2 << endl;

    cout <<"sum is: "<<endl ;
    cout << sum <<endl;
    cout << "difference is: "<<endl;
    cout << sub(num1 , num2) <<endl;
    cout << "quotient is: "<<endl;
    cout<<divide(num1 , num2) << endl;
    cout << "product is is: "<<endl;
    cout << mul(num1 , num2) << endl;
    return 0;
}
