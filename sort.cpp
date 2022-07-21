#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int arr[n]; // array to store user given input
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for(int i=0;i<n-1;i++) // 0 to n-1 loop
    {
        for(int j=i+1;j<n;j++) // i+1 to n loop // the elements after i are j elements 
        { // so the j element after i if less than i then swap it
            if (arr[j]<arr[i]) // if j is less than i we swap
            {
                int temp = arr[j]; // stores j in a temp variable
                arr[j]=arr[i]; // stores i in j
                arr[i]=temp; // stores temp aka the j variable we had stored in i
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    } cout<<endl;
    
}