//PRINT SUM OF DIGIT
#include<bits/stdc++.h>
using namespace std;
int n;
int sum(int a, int b){
    if(a == 0){
        return 0;
    }
  
return a%10 + sum(a/10,n);
}
int main(){
    cin>>n;
    int x = sum(n,n);
    cout<<x;
}