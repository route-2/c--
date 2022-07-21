#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int j;
   
    for(int i=1;i<=n;i++)
    {
        
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++)
        {
            cout<<"*"<<"";
        }
         k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<"*"<<"";
        }
        cout<<endl;

 }
 
    for(int i=n;i>=1;i--)
    {
        
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++)
        {
            cout<<"*"<<"";
        }
         k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<"*"<<"";
        }
        cout<<endl;



        

    }


}