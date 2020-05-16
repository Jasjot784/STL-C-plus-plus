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

  // vector<int dest;//error
  // copy(v.begin(),v.end(),dest.begin());

  vector<int> dest(5);
  copy(v.begin(),v.end(),dest.begin());

  for(auto i = dest.begin();i<dest.end();i++)
      cout<<*i<<endl;

}
