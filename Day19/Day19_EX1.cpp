#include <iostream>
using namespace std;

class coffee {
	private:
		string name;
		string temp;
	public:
		coffee(string n, string t);
		string gettemp();
		string getname();
};

coffee::coffee(string n, string t) {
	name = n;
	temp = t;
}

string coffee::gettemp() {
	return temp;
}

string coffee::getname() {
	return name;
}

int main() {
	coffee americano("아메리카노", "아이스");
	cout << "주문하신 " << americano.gettemp()
		<< americano.getname() << "나왔습니다." << endl;

	return 0;
}