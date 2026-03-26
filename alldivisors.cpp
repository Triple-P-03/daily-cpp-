#include <bits/stdc++.h>
using namespace std;
void div(int n){
    // int limit=((n<100)?n:99);
    int limit=min(n,100);
    for (int i = 1; i <= limit; i++)
    {
        if(n%i==0)
        cout<<i<<endl;
    }
    
}

int main(){
div(100);
 
return 0;
}