#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;
int main(){
  vector<int> v;
  v.push_back(11);
  v.push_back(22);
  v.push_back(33);
  v.push_back(44);
  v.push_back(55);

  cout<<count(v.begin(),v.end(),33)<<endl;

}
