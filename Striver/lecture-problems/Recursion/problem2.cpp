// PRINT THE NUMBER FROM 1 TO N LINEARLY
#include<bits/stdc++.h>
using namespace std;
int n;
void print(int a,int b){
    if(a>n){
        return;
    }
    cout<<a<<endl;
    print(a+1,n);
}
int main(){
    cout<<"Enter the value of n: ";
    cin>>n;
print(1,n);
}

