// chp0_extra.cpp
#include <iostream>
#include <string>

int main() {
	// Hello world ���α׷� ��ü ���ڿ�
	std::string incl = "#include <iostream>";
	std::string def = "int main() {";
	std::string print = "\tstd::cout << \"Hello, world!\" << std::endl;";
	std::string ret = "\treturn 0;";
	std::string end = "}";
	
	// Hello world ���α׷� ���
	std::cout << incl << std::endl << std::endl
		<< def << std::endl
		<< print << std::endl
		<< ret << std::endl
		<< end << std::endl;

	return 0;
}