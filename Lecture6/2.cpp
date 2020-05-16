#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

bool even(int n){
  return (n%2)==0;
}

int main(){
  vector<int> v;
  v.push_back(11);
  v.push_back(22);
  v.push_back(33);
  v.push_back(44);
  v.push_back(55);

  cout<<count_if(v.begin(),v.end(),even)<<endl;

}
