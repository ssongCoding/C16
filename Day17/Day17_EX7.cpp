#include <iostream>
#include <string>
using namespace std;

int main() {
	string name = "jason";
	//cin >> name; <- ���� ������ ���� ����!
	getline(cin, name); // <- ���� ���ö� ����!
	//gets() , gets_s()
	cout << name;

	return 0;
}