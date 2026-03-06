#include<bits/stdc++.h>
using namespace std;
void f(){
    //infinite recursion
cout<<"1"<<endl;
f();
}
int fact(int n){
    if(n==0 || n==1){
        return 1;
        
    }
    else{
        return n*fact(n-1);
    }
}
void name(int i,int n){
   if(i>n){
       return;
   }

   cout<<"vansh"<<endl;
   name(i+1,n);
}

int main(){
    name(1,10);
}