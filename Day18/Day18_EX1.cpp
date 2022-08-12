#include <iostream>
#include <string>
using namespace std;

/*  
	main
	poca.setPrice(1800);
	poca.info();
*/

class Snack {
	private: // 밖에서 접근 X
		string name; // 필드
		int price;
	public: // 밖에서 접근 가능
		Snack(string n); // 생성자
		void setName(string n); // 클래스 함수 선언
								// 밑에 있음!
		string getName();
		void setPrice(int p);
		int getPrice();
		void info();
		void ASMR();
};

Snack::Snack(string n) { // 생성자
	name = n;
}

// 클래스 함수 구현
// 반환 타입 클래스명::함수명() <-- 이 클래스의 함수다
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

void Snack::info() { // 과자 정보 출력
	cout << "과자의 이름은 " << name
		<< "이고, 가격은 " << price << "원입니다."<< endl;
}

void Snack::ASMR() {
	cout << "바삭바삭" << endl;
}

int main() {
	string name;
	cout << "어떤 과자를 주문하시겠어요?";
	getline(cin, name);
	// 과자 이름 : 입력

	Snack poca(name); // 생성자 호출 방법
	//poca.setName("포카칩");
	//poca.name = "포카칩";
	cout << poca.getName() << endl;
	poca.ASMR();
	// 안녕하세요.

	poca.setPrice(1800);
	poca.info();

	return 0;
}