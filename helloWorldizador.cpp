#include <iostream>

using namespace std;

int main()
{
    bool flag = true;
    int n = 0;

    while (flag)
    {
        n++;
        cout << "Hello World " + n << endl;
        if (n >= 100)
        {
            flag = false;
        }
    }
}