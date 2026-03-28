#include <bits/stdc++.h>
using namespace std;
void g(int a, int b){
    int gcd=1, sm=min(a,b);

    for(int i=2;i<=sm;i++){
        if((a%i==0)&&(b%i==0)){
            gcd=i;
        }
    }
    cout<<"gcd\t"<<gcd;


}
int main(){
g(4,2);
// another approach is to start from end 
 
return 0;
}