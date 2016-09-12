#include<iostream>
using namespace std;
main(){
  int n;
  cin >> n;
  if( n % 2 == 1 ){
    cout << 7;
    n -= 3;
  }
  while(n){
    cout << 1;
    n -= 2;
  }
  cout << endl;
}
/*-------
N=2n   -> 1111.....11
N=2n+1 -> 7111.....11
-------*/
