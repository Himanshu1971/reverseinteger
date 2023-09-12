#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int ans = 0;
    while(n!=0)
    {   
        // int ans = 0;
        int dig = n%10;
        ans = (ans*10) + dig;
        n = n/10;
        
        // cout<<ans<<endl;
    }
    
    while(ans!=0){
        int b = 0;
        int dig1 = ans%10;
        b = (b*10) + dig1;
        ans = ans/10;
        
        cout<<b<<endl;
    }
    
}