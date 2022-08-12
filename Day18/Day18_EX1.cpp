#include <iostream>
#include <string>
using namespace std;

/*  
	main
	poca.setPrice(1800);
	poca.info();
*/

class Snack {
	private: // �ۿ��� ���� X
		string name; // �ʵ�
		int price;
	public: // �ۿ��� ���� ����
		Snack(string n); // ������
		void setName(string n); // Ŭ���� �Լ� ����
								// �ؿ� ����!
		string getName();
		void setPrice(int p);
		int getPrice();
		void info();
		void ASMR();
};

Snack::Snack(string n) { // ������
	name = n;
}

// Ŭ���� �Լ� ����
// ��ȯ Ÿ�� Ŭ������::�Լ���() <-- �� Ŭ������ �Լ���
void Snack::setName(string n) {
	name = n;
}

string Snack::getName() {
	return name;
}

void Snack::setPrice(int p) {
	price = p;
}

int Snack::getPrice() {
	return price;
}

void Snack::info() { // ���� ���� ���
	cout << "������ �̸��� " << name
		<< "�̰�, ������ " << price << "���Դϴ�."<< endl;
}

void Snack::ASMR() {
	cout << "�ٻ�ٻ�" << endl;
}

int main() {
	string name;
	cout << "� ���ڸ� �ֹ��Ͻðھ��?";
	getline(cin, name);
	// ���� �̸� : �Է�

	Snack poca(name); // ������ ȣ�� ���
	//poca.setName("��īĨ");
	//poca.name = "��īĨ";
	cout << poca.getName() << endl;
	poca.ASMR();
	// �ȳ��ϼ���.

	poca.setPrice(1800);
	poca.info();

	return 0;
}