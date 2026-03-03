#include<bits/stdc++.h>
using namespace std;
void equeue(){
queue<string> q;
q.push("vansh");
q.push("vnsh");
q.push("ansh");
q.pop();
while(!q.empty())
{
    cout<<q.front();
    q.pop();
}
}
void eset(){
    set<int> s;
    s.insert(1);
      s.insert(5);
        s.insert(4);
          s.insert(3);
            s.insert(2);
            for(auto it : s ){
         cout<<it<<" ";
            }
            auto it= s.find(31);
            cout<<*it;
            int c = s.count(1);
            cout<<c;
}
void emap(){
  map<int , int> m;
  map<pair<int,int>,float> m1; 
  m[1]=2;
  m.insert({2,3});
for(auto it : m){
    cout << it.first << " " << it.second << endl;
    cout<<m[1];
    cout<<m[5];
 
} 
 }
void fi() {
    map<int,int> m;

    m[1] = 10;
    m[2] = 20;
    m[3] = 30;

    auto it = m.find(2);

    if(it != m.end()){
        cout << "Key found\n";
        cout << "Key: " << it->first << endl;
        cout << "Value: " << it->second << endl;
    } else {
        cout << "Key not found\n";
    }
}
int main(){
fi();

    return 0;
}
// multi map : - duplication of the keys are allowed 
//unorderd internally uses a hash table not as specific irdered is defiine
