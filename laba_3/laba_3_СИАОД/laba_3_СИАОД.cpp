#include <iostream>

using namespace std;

int main()
{
	int a[100][50];
	int b[50];
	int n, m;
	int min;

	cout << "n, m?";
	cin >> n >> m;

	if ((n > 100) || (m > 50)) {
		cout << "Error";
		system("pause");
		return 0;
	}

	for (int v = 0; v < m; v++) {
		b[v] = 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	cout << "\n";

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";

	min = a[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] < min) {
				min = a[i][j];
			}
		}
	}

	cout << "\n\n" << min << "\n\n";

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == min) {
				for (int p = 0; p < m; p++) {
					for (int k = 0; k < m; k++) {
						a[i][p] = b[k];
					}
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	system("pause");
}
