#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the value of a and b" << endl;
    int a, b;
    cin >> a;
    cin >> b;

    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    cout << "Ans : " << ans << endl;
}