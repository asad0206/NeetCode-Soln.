// ! Find the first and last digit of a number in O(1)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long a = 42556;
    long num;
    num = floor(log10(a)) + 1;
    //* cout<<num<<" "<<"\n";  //prints the number of digits in the number

    cout << a / (int)pow(10, num - 1) << "\n"; //* prints the first digit
    cout << a % 10 << "\n";                    //* prints the last digit

    return 0;
}