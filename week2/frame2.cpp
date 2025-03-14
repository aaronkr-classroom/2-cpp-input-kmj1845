// frame2.cpp
#include <iostream>\
#include <string>

using std::cin;		using std::cout;
using std::string;  using std::endl;

int main() {
	cout << "What's your name? >>> ";
	string name;
	cin >> name;

	// �λ� ���ڿ� �����
	const std::string greeting = "Hello, " + name + "!";

	// �λ縻 ��/��/��/�Ʒ� �ִ� ���� ����
	const int pad = 3;
	
	// ���� ���� ����
	const int rows = pad * 2 + 3; // ��
	const string::size_type cols = greeting.size() + pad * 2 + 2; //��
	

	// ������� ���
	cout << endl;

	// rows�� ���� ���
	// �Һ���: ���ݱ���r�� ���� ���
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;

		//�Һ���: ���� �࿡�� c�� ���ڸ� ���
		while (c != cols) {
			// �λ縻 ��� ���θ� �Ǻ�
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				// �׵θ� ��� ���θ� �Ǻ�
				if (r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1) {
					cout << "\\";
				}
				else {
					cout << " ";
				} // if-else ��
				++c;
			} // if-else ��
		} // while ��
		cout << endl;

	} // for ��

	return 0;
}