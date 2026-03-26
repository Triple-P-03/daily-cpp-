#include <bits/stdc++.h>
using namespace std;
bool palin(int n){
    int num=n,count=0,rev=0,sum=0;
    while(num!=0){
        rev=num%10;
        sum=sum*10+rev;
        num/=10;
    }
    if(sum==n)
        return true;
    else 
    return false;
 
}
int main()
{
int num;
cout<<"enter a numner\n";
cin>>num;

cout<<(palin(num)==1?"True":"False");

    return 0;
}