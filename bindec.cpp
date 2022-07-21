#include<iostream>
using namespace std;
int bincheck(int n)
{
    int ans = 0; // no garbage value
    int x = 1; // bc x is temp variable which stores 2^0 = 1 / 2^1 = 2 / 2^2=4
    while(n>0)   // number we input is greater than 0
    {
        int y = n%10; // if my n=110 / 110%10 == 0
        ans+= x*y; // ans + x*y my x initially is 1 that is 2^0=1 * 0 that is (y=0) add it to ans and save it in ans so my ans = 0
         x*=2; // increase x^1 that is 2^1 = 2
         n=n/10; // update the n value so 110/10 = 11 so take 11 on top repeat until n!=0

    }
    return ans;

    }
    int main()
    {
        int n;
        cin>>n;
        
             cout<<bincheck(n)<<endl;
       

    }