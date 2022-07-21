#include <iostream>
using namespace std;
int main()
{
    int n, i, c=0, t;
    char a[50];

    cout << "Enter a decmail number :\n";
    cin >> n;
    t = n;

    for (i = 0; t > 0; i++)
    {
        if (a[i] % 16 > 9)
        {
            switch(a[i])
            {
                case 10 : a[i] = 'A'; break;
                case 11 : a[i] = 'B'; break;
                case 12 : a[i] = 'C'; break;
                case 13 : a[i] = 'D'; break;
                case 14 : a[i] = 'E'; break;
                case 15 : a[i] = 'F'; break;
            }
        }
        else
        {
            a[i] = t % 16;
        }
        t = t / 16;
    }    
    cout << n << " In hexdecmail = ";
    for(c = i - 1; c >= 0; c--)
    {
        cout << a[c];
    }
}