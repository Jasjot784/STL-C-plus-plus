#include<iostream>
#include<memory>
using namespace std;
int main(){
  unique_ptr<int> up(new int(1729));
  cout<<*up<<endl;
  cout<<"done"<<endl;
}
