#include<iostream>
using namespace std;
int main(){
	int k, n, f, total_beans;
	cin >> k >> n >> f;
	total_beans = k * n;
	int years = 0, a[f];
	for(int i = 0; i < f; i++){
		cin >> a[i];
		years += a[i];
	}

	if( years > total_beans ){
		cout << -1 << endl;
	}else{
		for(int i = 0; i < f; i++)
			total_beans -= a[i];
		cout << total_beans << endl;
	}
}
