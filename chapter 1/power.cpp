#include <bits/stdc++.h>
using namespace std;
void power(int a,int b){
    int ans=a;
    for (int i = 1; i <=b; i++)
    {
        ans*=a;
    }
    cout<<ans;
    
}
int main(){
power(2,4);
 
return 0;
}