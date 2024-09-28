#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long x, i;
    
    cin >> x >> i;
    if ((x > 0) && (x < (pow(10, 9)) + 1))
    {
        if (x & (1 << i))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
        


    }
    else
    {
        cout << "x must be from 0 to 10^9 and i for 0 to x - 1" << endl;
    }


}