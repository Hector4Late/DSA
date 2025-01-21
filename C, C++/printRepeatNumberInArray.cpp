#include <iostream>

using namespace std;

int a[8] = {0, 1, 2, 3, 7, 3, 5};
int b[8] = {4, 6, 2, 8, 2, 4, 5};

int main (){
	for (int i = 0; i < 8 - 1; i++){
		for (int j = 0; j < 8 - 1; j++){
			if (a[i] == b[j]){
				cout << a[i] << " ";
				break;
			}
		}
	}

}