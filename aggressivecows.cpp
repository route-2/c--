#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool isPossible(vector<int> &stalls, int k , int mid)
{
    int cowCount = 1;
    int lastPos = stalls[0];
    for(int i =0;i<stalls.size();i++)
    {
        if(stalls[i]-lastPos >= mid)
        {
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}
int aggresive(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
   int s = 0;
   int maxi = -1; 
   for(int i=0;i<stalls.size();i++)
   {
       maxi = max(maxi,stalls[i]); // maximum number in the stalls array
   }
 int e = maxi;
 int ans = -1;
 int mid = s+ (e-s)/2;

 while(s<=e)
 {
     if(isPossible(stalls,k,mid)){ // after checking if mid isPossible
       ans = mid; // if its true the store the mid in ans 
       s = mid +1; // move the s to mid +1 because largest
     } 
     else 
     {
         e = mid-1; // move left
     }
     mid = s+ (e-s)/2;
 }
 return ans;
   
   
}
int main()
{
    return 0;
}