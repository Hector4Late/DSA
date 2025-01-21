#include <iostream>

using namespace std;

int main (){
	const int n = 12;
	int a[n] = {0, 1, 2, 3, 4, 5, 3, 2, 7, 2, 0, 3};
	for (int i = 0; i < n; i++){
		bool check = true;
		for (int j = 0; j < i; j++){
			if (a[i] == a[j]){
				check = false;
				break;
			}
		}
		if (check){
			cout << a[i] << " ";
		}
	}
}