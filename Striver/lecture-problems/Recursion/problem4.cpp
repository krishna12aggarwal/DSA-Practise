// PRINT THE NUMBER FROM 1 TO N WITH USER DEFINED CONDITION
#include<bits/stdc++.h>
using namespace std;
int n;
void print(int a,int b){
    if(a<1){
        return;
    }
   print(a-1,n);
    cout<<a<<endl;
    
}
int main(){
    cout<<"Enter the n: ";
    cin>>n;
    print(n,n);
}