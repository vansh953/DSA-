#include<bits/stdc++.h>
using namespace std;
void square(){
  int i,j;
  for(i=0;i<5;i++){
    for (j=0;j<5;j++){
        cout<<"*";
    }
    cout<<endl;
  }  
}
void p1(){
  int i,j;
  for(i=0;i<5;i++){
    for(j=1;j<=i;j++){
      cout<<j;
    }
    cout<<"\n";
  }
}
void p2(){
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
      cout<<i;
    }
    cout<<" \n";
  }
}

void p3(){
  int i,j;
  for(i=5;i>=1;i--){
    for(j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<" \n";
  }
}
void p4(){
  int i,j;
  for(i=5;i>=1;i--){
    for(j=1;j<=i;j++){
      cout<<j;
    }
    cout<<" \n";
  }
}
void p5(){
    int i, j, k, l;   

    for(i=1;i<=5;i++){
        for(j=5;j>i;j--){
            cout<<" ";
        }
        for(k=0;k<2*i-1;k++){  
            cout<<"*";
        }
        for(l=5;l>i;l--){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void p6(int n){
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<i;j++){
      cout<<" ";
    }
    for(j=0;j<2*n-(2*i+1);j++){
      cout<<"*";
    }
     for(j=0;j<i;j++){
      cout<<" ";
    }
    cout<<"\n";
  }
}
void p7(int n){
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
      cout<<" ";
    }
    for(j=0;j<2*i+1;j++){
      cout<<"*";
    }
     for(j=0;j<n-i-1;j++){
      cout<<" ";
    }
    cout<<"\n";
  }
  for(i=0;i<n;i++){
    for(j=0;j<i;j++){
      cout<<" ";
    }
    for(j=0;j<2*n-(2*i+1);j++){
      cout<<"*";
    }
     for(j=0;j<i;j++){
      cout<<" ";
    }
    cout<<"\n";
  }
}
int main(){
int n;
cin>>n;
p7(n);
}
