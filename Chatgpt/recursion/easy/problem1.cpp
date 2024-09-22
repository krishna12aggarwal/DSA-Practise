// PRINT THE FABOLANCI NUMBER
#include<bits/stdc++.h>
using namespace std;
int n;
int number(int d){
    int a,b;
if(d == 1 ){
    return 1;
}
if(d == 0){
    return 0;
}
a = number(d-1);
b = number(d-2);
return a+b;

}
int main(){
    int x;
    cin>>n;
  x=  number(n);
  cout<<x;
}