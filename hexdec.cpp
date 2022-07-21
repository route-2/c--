#include<bits/stdc++.h>
using namespace std;
int hexdec(string n)
{
    int ans = 0;
    int x = 1;
    int s=n.size(); // size of my string
    for(int i=s-1;i>=0;i--) // tracing back in a array from last index 
    {
        if(n[i] >= '0' && n[i]<= '9') // decimals ranging from 0  to 9
        {
            ans+=x*(n[i] - '0'); // normal decimal number 
        }
        else if(n[i] >= 'A' && n[i] <= 'F') // if its A to F
        {
            ans += x*(n[i] - 'A' + 10); // ex if our n[i]=B-A==1, SO 1+10 WILL BE 11 value of B
        }
        x *= 16; // we multiply x with 16 after every loop and set the final x to that so ex AB7 if 7, x=1, 7*1 store the set x to 16,the B its 11 but we set x to 16 right so 
        // 16 * 11 then 16*16*10 so on...
        // we set our x to 16 because hexadec because 16^1,16^2,16^3
    }
    return ans;

}
int main()
{
    string n;
    cin>>n;
    cout<<hexdec(n)<<endl;

}