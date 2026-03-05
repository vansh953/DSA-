#include<bits/stdc++.h>
using namespace std;

void prime(int n){
    int c = 0;

    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            c++;               
            
            if(n / i != i){   
                c++;         
            }
        }
    }

    if(c == 2){
        cout << "yes";
    }
    else{
        cout << "no";
    }
}

void hcf(int x,int y){
    int mi,gcd;
    if(x>=y){
         mi =y;
    }
    else{
        mi=x;
    }
    for(int i=mi;i>=1;i--){
        if(x%i==0&&y%i==0){
            gcd = i;
            break;
        }
    }
    cout<<gcd;
}
int main(){
    hcf(130,110);
    return 0;
}