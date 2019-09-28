
#include <iostream>

using namespace std;

int main() {
	int num, choice;
	int n[100];
	cout << "Enter your mas(1<=mas<=100): ";
	cin >> choice;
	while (choice > 100 || choice < 1) {
		cout << "Error mas, try again: ";
		cin >> choice;
	}
	for (int i = 0; i < choice; i++) {
		num = rand() % 19 - 9;
		n[i] = num;
		cout << n[i] << " ";
	}

	cout << endl;

	for (int j = 0; j < choice; j++) {
		if (n[j] == 0) {
			cout << n[j] << " ";
		}
	}
	for (int t = 0; t < choice; t++) {
		if (n[t] > 0) {
			cout << n[t] << " ";
		}
	}
	for (int l = 0; l < choice; l++) {
		if (n[l] < 0) {
			cout << n[l] << " ";
		}
	}
}

