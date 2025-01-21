#include <iostream>
//O(N)
using namespace std;

int cnt[1000];
int main (){
	const int n = 12;
	int a[n] = {0, 1, 2, 3, 4, 5, 3, 2, 7, 2, 0, 3};
	for (int i = 0; i < n; i ++){
		cnt[a[i]] = 1;
	}
	
	for (int i = 0; i < n; i++){
		if (cnt[i] == 1)
			cout << i << " ";
	}
}