#include<iostream>

using namespace std;

int main() {
	int goods;
	int money;

	cout << "enter buy goods : ";
	cin >> goods;
	cout << "enter your money : ";
	cin >> money;

	if (1 <= goods)
		cout << "exist goods" << endl;
	else
		cout << "does not exist goods" << endl;

	if (5000 <= money) {
		cout << "buy goods" << endl;
		money -= 5000;
		cout << "balance : "<< money << endl;
	}
	else if (1000 <= money && money < 5000) {
		cout << "purchased cheap goods." << endl;
		money -= 1000;
		cout << "balance : " << money << endl;
	}
	else
		cout << "enough money" << endl;
	return 0;
}