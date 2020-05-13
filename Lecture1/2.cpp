#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  v.push_back(55);
  v.push_back(33);
  v.push_back(22);
  v.push_back(44);
  v.push_back(11);

  sort(v.begin(),v.end());

  for(vector<int>::iterator i = v.begin();i!=v.end();++i){
    cout<<*i<<endl;
  }

}
