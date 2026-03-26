#include <bits/stdc++.h>
using namespace std;
void prime(int n){
    if(n<=1){
        cout<<"not the correct input";
        return;
    }

    for (int i = 2; i*i <=n; i++)
    {
        if(n%i==0){
            cout<<"not prime";
            return ;
        }
    }

    cout<<" prime";
    
}
int main(){
prime(17);
 
return 0;
}