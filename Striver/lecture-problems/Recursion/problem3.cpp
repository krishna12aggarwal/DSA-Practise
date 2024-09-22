// PRINT THE NUMBER FROM N TO 1 LINEARLY
#include<bits/stdc++.h>
using namespace std;
int n;
void print(int a,int b){
    if(a<1){
        return;
    }
    cout<<a<<endl;
    print(a-1,n);
}
int main(){
    cout<<"Enter the value of n: ";
    cin>>n;
print(n,n);
}
