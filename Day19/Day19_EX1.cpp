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
	coffee americano("�Ƹ޸�ī��", "���̽�");
	cout << "�ֹ��Ͻ� " << americano.gettemp()
		<< americano.getname() << "���Խ��ϴ�." << endl;

	return 0;
}