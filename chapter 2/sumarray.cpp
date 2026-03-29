#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[100],n;
cout<<"enter the size:\n";
cin>>n;

for (int  i = 0; i < n; i++)
{
    cout<<"enter the numbers:\n";
    cin>>arr[i];
}
int sum=0;
for (int i = 0; i < n; i++)
{
    sum+=arr[i];
}

cout<<"the sum is :"<<sum;
 
return 0;
}