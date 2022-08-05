#include <iostream>
#include <string>
using namespace std;

int main() {
	string name = "jason";
	//cin >> name; <- 띄어쓰기 나오면 문장 종료!
	getline(cin, name); // <- 엔터 나올때 까지!
	//gets() , gets_s()
	cout << name;

	return 0;
}