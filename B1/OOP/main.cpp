#include<iostream>

using namespace std;

class car {

	static car oto1;
	car* oto2;
public:
	string brand;
	string color;

	void showColor();

	void showInfo() {
		cout << "Brand: " << brand << endl;
		cout << "Color: " << color << endl;
	}
};

void car::showColor() {
	cout << "Color: " << car::color << endl;
}

int main() {
	int a = 2;
	car lambogini;
	lambogini.brand = "Lambogini";
	lambogini.color = "Yellow";

	//cout << "Mau xe: " << lambogini.color << endl;

	lambogini.showInfo();
	lambogini.showColor();

	return 0;
}