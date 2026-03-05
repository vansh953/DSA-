#include<bits/stdc++.h>
using namespace std;
void arm(int n){
  int o=n;
int v=n;
    int c=0;
while(n>0){
    n/=10;
    c++;
}
int sum =0;
while(o>0) {
    int rem = o%10;
    sum=sum+pow(rem,c);
    o/=10;
}
if(sum==v){
    cout<<" armstrong";
}
else{
    cout<<"no";
}
}
void div( int n){
int i =0;
for(i=1;i<sqrt(n);i++){
if(n%i==0){
    cout<<i<<" ";
    if(n/i!=i){
cout<<n/i<<" ";
}
}
}
}
void div1(int n){
    vector <int> v;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
        }
        if(n/i!=i){
            v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    for(auto it : v){
        cout<<it<<" ";
    }
}
int main(){
div1(36);
    return 0;
}