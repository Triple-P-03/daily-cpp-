#include <bits/stdc++.h>
using namespace std;
int main(){
int a[]={9,34,1,98},n=sizeof(a)/sizeof(int);
int min=a[0],max=a[0];
for (int i =1; i < n; i++)
{
    if(a[i]<min){
        min=a[i];
    }
}
cout<<min<<endl;
for (int i =1; i < n; i++)
{
    if(a[i]>max){
        max=a[i];
    }
}
cout<<max<<endl;

 
return 0;
}