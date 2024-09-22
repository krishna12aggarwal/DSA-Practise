// RAISE A NUMBER X TO POWER OF N
#include<bits/stdc++.h>
using namespace std;
int x,n;
int power_raiser(int a, int b){
if(b == 0){
    return 1;
}
return a * power_raiser(a,b-1);

}
int main(){
    cin>>x>>n;
    int m = power_raiser(x,n);
    cout<<m;
}