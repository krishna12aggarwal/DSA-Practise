// PRINT THE NAME N TIMES 
#include<bits/stdc++.h>
using namespace std;
int n;
string name;
void print(int a,int b,string c){
    if(a>n){
        return;
    }
    cout<<c<<endl;
    print(a+1,n,name);
}
int main(){
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the value of n: ";
    cin>>n;
  print(1,n,name);
}

