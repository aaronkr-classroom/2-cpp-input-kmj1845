// greet.cpp
#include <iostream>
#include <string>

int main() {
	//������� �̸��� �����
	std::cout << "What's your name? >>> ";

	//������� �̸��� �б�
	std::string name;
	std::cin >> name;

	//�λ��ϱ�
	std::cout << "Hello, " << name << "!" << std::endl;
	return 0;
}