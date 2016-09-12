#include<iostream>
#define REP(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main(){
  int cnt = 0;
	int day[]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  REP(i,12){
    REP(j,day[i-1]){
      if( i == (j % 10) + (j / 10) ) cnt++;
    }
  }
  cout << cnt << endl;
}
