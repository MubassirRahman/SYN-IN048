#include<bits/stdc++.h>
using namespace std;
void Isprime(int n){
    if(n<=1){
    cout<<"Number is not Prime ";
    return ;
    }
    int limit=sqrt(n);
    for(int i=2;i<=limit;i++)
    {
        if(n%i==0)
        {
            cout<<"Number is not Prime ";
            return;
        }
    }
    cout<<"Number is Prime ";
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    Isprime(n);
    return 0;
}