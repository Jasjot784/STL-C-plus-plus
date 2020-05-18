#include<iostream>
#include<ios>
#include<regex>
#include<string>
using namespace std;
int main(){
  cout<<boolalpha;
  const regex r("c+d+e+");

  for(string s;getline(cin,s);){
    smatch m;
    const bool b = regex_search(s,m,r);
    cout<<b<<endl;

    if(b){
      cout<<m[0].first-s.begin()<<endl;
      cout<<m[0].second-s.begin()<<endl;
    }
  }
  cout<<endl;
}
