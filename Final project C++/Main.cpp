#include "Detective.hpp"

int main() {
	setlocale(LC_ALL, "Rus");
	
// Вводная в игру
	PrintText(Start);
	PauseText();
	std::cout << "\n";

// Скрытые статы игрока
	int table = 0;
	int window = 0;
	int chair = 0;

// Сюжет и выборы
	PrintText(Cabinet);
	PauseText();
	std::cout << "\n";

	PrintText(Director);
	std::cout << "\n";
	int Act1;
	do {
		PrintText(Act1Question);
		std::cout << "\n";
		std::cin >> Act1;
		std::cout << "\n";

		switch (Act1) {
		case 1: {
			assertiveness += 1;
			PrintText(Act1assertivenes);
			std::cout << "\n";
			break;
		}
		case 2: {
			diplomacy += 1;
			PrintText(Act1diplomacy);
			std::cout << "\n";
			break;
		}
		case 3: {
			Stats();
			std::cout << '\n';
			break;
		}
	}
	} while (Act1 != 1 && Act1 != 2);

	PauseText();
	std::cout << "\n";

	PrintText(Director2); 
	std::cout << "\n";
	int Act2;
	std::cout << "\n";
	PrintText(Act2Question);
	std::cout << "\n";
	std::cin >> Act2;
		switch (Act2) {
		case 1: {
			chair += 1;
			break;
		}
		case 2: {
			observation += 1;
			table += 1;
			PrintText(Act2Case2);
			std::cout << "\n";
			break;
		}
		case 3: {
			observation += 1;			
			window += 1;
			PrintText(Act2Case3);
			std::cout << "\n";
			break;
		} 
		}

	PrintText(Director3);
	std::cout << "\n";
	PauseText();

	PrintText(Security);
	std::cout << "\n";
	int Act3;
	std::cout << "\n";
	do {			
		PrintText(Act3Question);
		std::cout << "\n";
		std::cin >> Act3;
		std::cout << "\n";
		switch (Act3) {
		case 1: {
			diplomacy += 1;
			PrintText(Act3diplomacy);
			std::cout << "\n";
			break;
		}
		case 2: {
			assertiveness += 1;
			PrintText(Act3assertivenes);
			std::cout << "\n";
			break;
		}
		case 3: {
			Stats();
			std::cout << '\n';
			break;
		}
		}
	} while (Act3 != 1 && Act3 != 2);

	PauseText();
	PrintText(Japanese);
	std::cout << "\n";
	int Act4;
	std::cout << "\n";
	PrintText(Act4Question);
	std::cout << "\n";
	std::cin >> Act4;
	std::cout << "\n";
		switch (Act4) {
		case 1: {
			PrintText(Act4Case1);
			std::cout << "\n";
			break;
		}
		case 2: {
			observation += 1;
			PrintText(Act4Case2);
			std::cout << "\n";
			break;
		}
		case 3: {
			PrintText(Act4Case3);
			std::cout << "\n";
			break;
		}
		}
		PauseText();
		PrintText(Accountant);
		std::cout << "\n";

		if (table == 1) {
			PrintText(Table);
			PrintText(Chair);
			std::cout << "\n";
			PauseText();
		}
		if (window == 1) {
			PrintText(Window);
			PrintText(Chair);
			std::cout << "\n";
			PauseText();
		}
		if (chair == 1) {
			PrintText(Chair);
			std::cout << "\n";
			PauseText();
		}
	PrintText(Exit);
	std::cout << "\n";

// Концовки
if (observation == 2 && )


	return 0;
}