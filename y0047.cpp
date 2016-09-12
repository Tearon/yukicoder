#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int N, ans;
  cin >> N;
  ans = ceil(log2(N));
  cout << ans << '\n';
}
