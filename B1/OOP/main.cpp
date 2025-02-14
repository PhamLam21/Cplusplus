#include<iostream>

using namespace std;

class PhanSo {

private:
	int mau;
	int tu;

public:
	//Khoi tao
	PhanSo(int _mau = 0, int _tu = 0) {
		mau = _mau;
		tu = _tu;
	}
	//Huy
	~PhanSo() {}

	PhanSo operator + (PhanSo ps) {
		PhanSo ketQua;
		ketQua.tu = tu * ps.mau + mau * ps.tu;
		ketQua.mau = mau * ps.mau;
		return ketQua;
	}

	void display(PhanSo a, PhanSo b, PhanSo ketqua) {
		cout << a.tu << "/" << a.mau << " + " << b.tu << "/" << b.mau << " = " << ketqua.tu << "/" << ketqua.mau << endl;
	}
};

int main() {
	PhanSo ps1(3, 2);
	PhanSo ps2(5, 1);
	PhanSo ps3 = ps1 + ps2;
	ps3.display(ps1, ps2, ps3);

	return 0;
}