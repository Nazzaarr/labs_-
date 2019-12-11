#include <iostream>

using namespace std;
bool ex = true;

void exit(bool t) {
	t = false;
	exit(0);
}

class figure {

public:

	int x, y, r, x1, y1;

	figure() {
		this->x = x;
		this->y = y;
		this->r = r;
		this->x1 = x1;
		this->y = y1;
	}

	void input() {

		cout << "Enter rectangle coord: \n";
		cout << "x: ";
		cin >> x;
		cout << endl;
		cout << "y: ";
		cin >> y;
	}
	void inputradius() {
		cout << "Enter circle radius: ";
		cin >> r;
	}
	void check() {
		if ((r > y / 2) || (r >= x) || (r < 0)) {
			cout << "Error";
			exit(ex);
		}

	}

	void check1() {
		if (y1 < 0) {
			cout << "Error";
			exit(ex);
		}
	}

	void coords() {

		cout << "Enter your coord: \n";
		cout << "x: ";
		cin >> x1;
		cout << endl;
		cout << "y: ";
		cin >> y1;
	}

	void result() {
		if ((x1 < r) || (y1 < r) || (x1 > x) || (y1 > y)) {
			cout << "not included in the area";
		}
		else
		{
			cout << "entered the area";
			system("pause");
		}
	}
};

int main()
{
	figure first;
	first.input();
	first.inputradius();
	first.check();
	first.coords();
	first.check1();
	first.result();

}
