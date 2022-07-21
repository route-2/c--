#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    } // difference of 2 elements in a sub array is still 1 so we increment by 2 directly every time the pd != the next difference set
    int curr=2; // because any subarray of 2 elements the difference is always 1 ex 5,7 7-5 = 2 which is a single element

    int pd= arr[1]-arr[0]; // previous difference where array at 1 index - array at 0 index
    int ans=2; // whatever difference it is of 2 elements is a single element so we initialise ans to 2
    int j=2; // start j with 2 because we already saw a[1] - a[0]
   while(j<n)
    {
        if(pd == arr[j]-arr[j-1]) // my prev diff is a[1]-a[0]
        {            // 1 2 4 5 6
                     // pd is 2-1==1 initially already so the diff in 4-2 checks with my initial pd
                     // my initial pd is 1 != not equal to 4-2=2
                     // if it was 3-2 then my current which is 2 will by incremented by 1 element
            curr++;
        }
        else // if pd != the next two elements difference
        {
            pd = arr[j] - arr[j-1]; // we find the difference between 
            curr = 2;
        }
            ans = max(curr,ans); // stores the current ans and compares the max and stores in final ans
           j++;  // keeps iterating in a loop 4 then 5 then 6....
    }
    
     cout<<ans<<endl;
     return 0;
}
// 1 sec has 10^8 operations 
// 20 sec has 10^9
// array challenges 26:00 apna college