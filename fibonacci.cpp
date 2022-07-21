#include<iostream>
using namespace std;

void fib(int n)
{
int t1=0;
int t2=1;
int next;
for(int i=1;i<=n;i++)
{
    cout<<t1<<endl;
    next=t1+t2; // 1,2 = 1+2 store in next
    // 2,3 (next) so store again
    // 
    t1=t2;
   t2=next;

}
return;
}

int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}