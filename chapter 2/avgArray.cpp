#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[]={12,34,5,56,7,68,9,8,0};
int n=sizeof(arr)/sizeof(int);
double sum=0;
for (int i = 0; i < n; i++)
{
    sum+=arr[i];
}
cout<<float(sum/n);

 
return 0;
}