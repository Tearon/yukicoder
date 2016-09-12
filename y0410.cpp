#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int px, py, qx, qy;
  cin >> px >> py >> qx >> qy;
  cout.precision(20);
  cout <<(double)( abs(px-qx) + abs(py-qy) ) * 0.5 << '\n';
}
