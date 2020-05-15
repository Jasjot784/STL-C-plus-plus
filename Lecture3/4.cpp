#include<iostream>
#include<memory>
using namespace std;
int main(){
  shared_ptr<int> sp = make_shared<int>(1724);
  cout<<*sp<<endl;
  cout<<"done"<<endl;
}
