#include<iostream>
using namespace std;
int reversenaturalno(int n);
int main(){
    int n=0;
    cout<<"enter any no.: ";
    cin>>n;
reversenaturalno(n);
    return 0;
}
int reversenaturalno(int n)
{
    for(int i=n;i>=1;i--){
cout<<i<<" ";
    }
    return n;
}
