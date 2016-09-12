#include<iostream>
using namespace std;
int main(){
	long l, k;
	cin >> l >> k;
	int cnt, yuu;
	while (1) {
		cnt ++;
		l -= 2 * k;
		if (l <= 0) {
			yuu = (cnt - 1) * k;
			break;
		}
	}
	cout << yuu << endl;
}
