#include <iostream>
using namespace std;

int dectobin(int n)
{
int ans=0;
int x=1;
while(n!=0){ 
int rem = n%2; // if n=15 15%2 == 1
// 7%2==1
// 3%2==1
// 1%2==1
// 0 %2 == 0
ans=ans + x*rem; // add ans + the base which is x multiplied by 1 
// 0+1*1=1
// 1+10*1 = 11
// 11+100*1=111
// 111 + 1000*1=1111
// 
x*=10; 
// 1* 10 = 10
// 10 * 10 = 100
// 100 * 10= 1000
// 1000 *10 = 10000
n=n/2;
// 15/2 = 7
// 7/2 = 3
// 3/2 = 1
// 1/2 = 0
}
return ans;
}


int main()
{
    int n;
    cin>>n;

    cout<<dectobin(n);

}