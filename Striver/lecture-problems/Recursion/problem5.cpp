// PRINT THE NUMBER FROM N TO 1 WITH USER DEFINED CONDITION
 #include<bits/stdc++.h> 
 using namespace std;
int n;
void print(int a,int b){
    if(a>n){
        return;
    }
   print(a+1,n);
    cout<<a<<endl;
    
}
int main(){
    cout<<"Enter the n: ";
    cin>>n;
    print(1,n);
}