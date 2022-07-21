#include<iostream>
using namespace std;
int binsearch(int arr[], int n, int key)
{
    
    int s=0;
    int e=n;
    while(s<=e)
     { 
    int mid = (s+e)/2;
    if(arr[mid]==key) 
    {
        return mid;
    }
   if (arr[mid] < key) // key is greater than mid so mid+1 is my start
   {
       s=mid+1;
   }
   else e = mid - 1; // key is arriving before so make the end mid-1
   
      }
return -1;
}
int main() {
int n;
cin>>n; // user array size

int arr[n];
for(int i =0;i<n;i++) // store array elemnts 
{
    cout<<arr[n];
}
int key;
cin>>key;// input key user gives to search then applies binary search function
cout<<binsearch(arr,n,key);

return 0;
}
// binary search is when it checks for a number without traversing it linearly or through every element 
// it uses mid element , to split it, if key found before mid that is arr[mid]>key then u make end is mid-1
// if the mid element is lesser than key that is arrives after mid so we move s pointer to mid +1 
// time complexity 
// after first iteration lenght of array is n
// then n/2, 3rd iteration it is (n/2)/2= n/4
// 4th iteration n/4/2= n/8
// length of array becomes one after k iterations
// its n/2^k = 1 
// n=2^k
// log2(n)=log2(2k)
//log2(n)=klog2^2
// k=log2^n
// linear search it was O(n) >>> binary search O(log2^n)