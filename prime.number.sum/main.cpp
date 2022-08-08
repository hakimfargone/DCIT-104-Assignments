#include <iostream>

using namespace std;
/* I certify that I, Ishaq Sidiq wrote this code myself */
int main()
{
    int num;
    int a;
    int peak;
    cout << "Type any number: ";
    cin >> peak;
    int sum = 0;
    for(num = 2; num <= peak; num++)
    {
        for(a = 2; num <= (num/2); a++)
        {
            if(num % a == 0)
            {
                a = num;
                break;
            }
        }
    }
        if(a = num)
        {
            sum += num;
        }
    cout << sum << endl;

    return 0;
}
