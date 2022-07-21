#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool isPossible(vector<int> arr, int n, int m, int mid )
{
    int studentCount = 1; // initially just onestudent
    int pageSum = 0; // to count pages and store
    for(int i =0;i<n;i++)
    {
        if(pageSum + arr[i] <= mid)

        {
            pageSum+=arr[i];
        }
        else 
        { 
            studentCount++;
            if(studentCount>m || arr[i] > mid)
            {
              return false;
            }
            pageSum = arr[i];
        
    }
    }
    return true;
}

 int allocateBooks(vector<int> arr, int n, int m)
 {
     int s=0; // start
     int sum=0;

     for(int i=0;i<n;i++) // adding eleements in a array and finding sum
     { // 10 20 30 40  = 10+20+30+40 = 100
         sum += arr[i];
     }
     int e =sum; // storing sum in end which is 100
     int ans = -1;
     int mid = s+ (e-s)/2; // finding my initial mid
 while(s<=e)
 {
     if(isPossible(arr,n,m,mid)) // check if with this mid can i allott all books to students in a approp way
     {
         ans = mid;
         e = mid-1; // move end to mid - 1 because we need only minimum nums 
     }
     else
     {
         s=mid+1;
     }
     mid = s+ (e-s)/2;

 }
 return ans;









      }