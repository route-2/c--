#include<iostream>
using namespace std;
int octcheck(int n) { 
    int ans=0;
    int x=1;
{
    
    int y=n%10;
    ans+= x*y;
    x*=8;
    n=n/10;
}
return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<octcheck(n)<<endl;

}