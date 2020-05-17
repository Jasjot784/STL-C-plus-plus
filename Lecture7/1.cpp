#include<iostream>
#include<algorithm>
#include<functional>
#include<iterator>
#include<vector>
using namespace std;
int main(){
  const int arr[] = {22,99,33,44,55};
  vector<int> v;
  v.push_back(11);
  v.push_back(77);

  for (auto i = v.begin(); i < v.end(); i++) {
    cout<<*i<<" ";
  }
  cout<<endl;
  copy(arr,arr+sizeof(arr)/sizeof(arr[0]),back_inserter(v));

  for_each(v.begin(),v.end(),[](int n){
    cout<<n<<" ";
  });
  cout<<endl;

  sort(v.begin(),v.end());
  copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
  cout<<endl;

  vector<int>::iterator i = lower_bound(v.begin(),v.end(),50);
  cout<<i-v.begin()<<endl;
}
