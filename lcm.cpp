#include <bits/stdc++.h>
using namespace std;
void lcm(int a ,int b){
    int lcm=max(a,b),n=min(a,b);
    while (true)
    {
        if(lcm%a==0 && lcm%b==0){
            break;
        }
        lcm*=n;

    }
    cout<<lcm;
}
int main(){
lcm(3,53);
 
return 0;
}