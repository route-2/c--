#include<iostream>
using namespace std;
int linsearch(int arr[], int n, int key)
{
    for(int i=0;i<n;i++) // array to traverse and check if key == number given
    {
        if (arr[i]==key) // arr found at index i == key 
        {
          return i; // return number at index i
        }
        
    }
    return -1;
}




int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; // array for taking input from the user storing it in array
    }
    int key;
    cin>>key;
    cout<<linsearch(arr,n,key)<<endl;
    return 0;
     }