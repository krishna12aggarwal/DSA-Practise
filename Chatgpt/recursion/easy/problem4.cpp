// COUNT THE DIGITS
#include<bits/stdc++.h>
using namespace std;
int n;
int count_digits(int a){
int count = 0;
if(a == 0){
    return 0;
}
return 1+ count_digits(a/10);
}
int main(){
    cin>>n;
    int x = count_digits(n);
    cout<<x;
}