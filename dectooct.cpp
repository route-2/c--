#include<iostream>
using namespace std;
int decoct(int n)
{
    int ans=0;
    int x=1;
    while(n!=0) { 
    int rem=n%8; // 33%8==1
    // 4%8==4
    // 0%8==0
    ans+=x*rem; // ans=0+1*1==1 // rem * basevalue + prev answer
    // 1+10*4==41
    // 41+100*0==41
    x*=10; // 1*10=10
    // 10*10==100
    n=n/8; // 33/8==4
    //4/8==0
    }
    cout<<ans<<endl; // prints 41
}
int main() {
int n;
cin>>n;
decoct(n);
}