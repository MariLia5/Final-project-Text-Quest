#include "Detective.hpp"

// ����� ������
int assertiveness = 0;
int	diplomacy = 0;
int	observation = 0;

void Stats() {
	std::cout << "������������: " << assertiveness << "\n";
	std::cout << "���������������: " << diplomacy << "\n";
	std::cout << "����������������: " << observation << "\n";
}
void PauseText() {
	std::cout << "\n������� q ��� �����������\n";
	char ch{};
	do {
		ch = std::cin.peek();
		std::cin.ignore();
	} while (ch != 'q');
	std::cout << '\r';
}
void PrintText(const char* str) {
	int lines{};
	int chars{};
	int current{};
	while (str[current] != '\0') {
		if (lines < 30) {
			std::cout << str[current];
			chars += 1;
			if (str[current] == '\n' || (chars % 200 == 0 && chars != 0)) {
				lines += 1;
			}
			if (str[current] == '\n') {
				chars = 0;
			}
			current += 1;
		}
		else {
			PauseText();
			lines = 0;
		}
	}
}