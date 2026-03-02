#include <bits/stdc++.h>
using namespace std;

void pair1() {
    pair<int,int> p = {1,2};
  pair<int , string> p2 = {3,"vansh"};
cout<<p2.second<<" "<<p2.first;
    cout << p.first ;
    pair<int,pair<int,int>> p1 = {1,{2,3}};
}
void pair2 (){
    pair <int,int> a[] = { {1,2},{3,4},{5,6}};
    cout<<a[2].second;
}
void Explainvector(){
    vector<int> v;
    v.push_back(1);
        v.push_back(17);

    v.push_back(100);

    v.emplace_back(2); //faster
    vector<pair<int ,int>>vec;
    vec.push_back({1,2});
    vector<int>ve(5);
    vector<int>v2(ve);
    vector<int>::iterator i = v.begin();
 
cout<<*(i)<<" ";
vector<int>::iterator i1 = v.end();
cout<<v[0]<<" "<<v.at(0);
cout<<v.back()<<" ";
for(vector<int>::iterator it = v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
}
// shortcut;
for(auto it = v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
}
for(auto it : v){
    cout<<it<<" ";
}
}
void vec(){
    vector<int> v;
    int i,x,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(auto it : v){
        cout<<it<<" ";
    }
    vector<int> v2;
    v.insert(v.begin(),100);
    v.erase(v.begin()+2);
      for(auto it : v){
        cout<<it<<" ";
        cout<<v.size();
        v.swap(v2);
        v.pop_back();
    }
}
void list1(){
    list <int> l;
    l.push_back(1);
    l.push_front(9);
    for(auto it : l){
        cout<<it<<" ";
    }
}
void estack(){
    stack<int> s;
    s.push(1);
        s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
   cout<< s.top()<<" \n";
   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   }
}
int main(){
estack();
return 0;
}


// STL :- Standard Template library 
// 4 components iteration function algorithm and containers
