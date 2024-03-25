#include <iostream>

using namespace std;

int main(void){
	string name, stdID;
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "학번을 입력하세요: ";
	cin >> stdID;
	cout << endl;

	cout << "<출력>" << endl;
	cout << "이름: " << name << endl;
	cout << "학번: " << stdID << endl;
	return 0;
}
