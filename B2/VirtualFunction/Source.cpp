#include<iostream>

using namespace std;

class Instrument {

public:
	virtual void sound() {
		cout << "make siund" << endl;
	}
};

class Piano : public Instrument {
	void sound() {
		cout << "Piano sound" << endl;
	}
};

class Guitar : public Instrument {
	void sound() {
		cout << "Guitar sound" << endl;
	}
};

class Violin : public Instrument {
	void sound() {
		cout << "Violin sound" << endl;
	}
};

int main() {
	Instrument* p[3];
	p[0] = new Piano;
	p[1] = new Guitar;
	p[2] = new Violin;

	for (int i = 0; i < 3; i++) {
		p[i]->sound(); //in ra hàm tương ứng với từng lớp con
	}
}