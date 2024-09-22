// PRINT THE SUM OF ALL FIRST N NUMBER
#include<bits/stdc++.h>
using namespace std;
int n;
int sum(int a, int b){
if(a<1){
    return 0;
}
return a+ sum(a-1,n);

}
int main(){
    cin>>n;
int x = sum(n,n);
cout<<x;
}