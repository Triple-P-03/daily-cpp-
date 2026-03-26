    #include <bits/stdc++.h>
    using namespace std;
    void arm(int n){
    
        int copy=n,sum=0,rem=0;
        while(copy>0){
            rem=copy%10;
            copy/=10;
            sum+=(rem*rem*rem);
        }
        if(sum==n)
              cout<<"armstring";

        else
            cout<<"not armstring";
    }
    int main(){
        int n;
        cout<<"enter the number:\t";
        cin>>n;
       arm(n);

    
    return 0;
    }