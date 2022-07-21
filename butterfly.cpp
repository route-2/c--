#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; // if n =4 , 8 rows 8 colums so 2*n rows and columns
    for(int i=1;i<=n;i++) // row from 1 to n
    {
        for(int j=1;j<=i;j++) //  col from 1 to row number 
        {
            cout<<"*"; // print * according to row number 1 , 2 , 3 etc....
        }
        int space=2*n - 2*i; // spaces if n=4 its first 6,4,2... 2*4-2*1 (row number) == 6
        for(int j=1;j<=space;j++) // print 6 space so if j is <= space print space
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++) // for other columns print star again
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space=2*n - 2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
   




}