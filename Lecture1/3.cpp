#include<algorithm>
#include<string>
#include<functional>
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<string> v;
  v.push_back("cat");
  v.push_back("dog");
  v.push_back("antelope");
  v.push_back("bear");
  v.push_back("puppy");

  sort(v.begin(),v.end(),greater<string>());

  for(vector<string>::iterator i = v.begin();i!=v.end();++i){
    cout<<*i<<endl;
  }

}
