#include <iostream>

using namespace std;

int main()
{
    int i, n;
    cin >> n;
    for (i=1; i<n+1; i++)
    {
        if (n%i==0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
