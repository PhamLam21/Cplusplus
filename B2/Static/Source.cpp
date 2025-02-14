#include<iostream>

using namespace std;

class UART {
private:
	static int baudrate;
	int ID;

public:
	UART(int id) {
		ID = id;
	}
	~UART() {}

	static void setBaudRate(int _baudrate) {
		baudrate = _baudrate;
	}

	static int getBaudRate() {
		return baudrate;
	}

	void display() {
		cout << "UART Instance ID: " << ID << ", Baud Rate: " << baudrate << endl;
	}
};
//Khoi tao dia chi và gia tri cho baudrate
int UART::baudrate = 9600;

int main() {
	UART uart1(1);
	UART uart2(2);

	UART::setBaudRate(115200);

	uart1.display();
	uart2.display();

	cout << "Baudrate: " << UART::getBaudRate() << endl;

	return 0;
}