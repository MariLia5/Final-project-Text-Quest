#include "Detective.hpp"

// ����� ������
int assertiveness = 0;
int	diplomacy = 0;
int	observation = 0;

void Stats() {
	std::cout << "������������: " << assertiveness << std::endl;
	std::cout << "���������������: " << diplomacy << std::endl;
	std::cout << "����������������: " << observation << std::endl;
}

void Cabinet() {
	std::cout << R"(
�������� ���� ����� ����� � ����� �������� � �������� � ������� ������, ������� ����������������� � �������������� ����.
������������ - ������� ��������. 
��������� ���� � ����� ������� ��� �����.
���� �����: �������.
� ������� ����� ������� � ������� ����� � ��������, �������� �������, ������ � ������ ������� ������.
�������: ������ ����, �������� ���� �����. �����?
���� �����: �����������. �����, ��������������.
�������: ���� ����� ������ ��������.
���� �����: ��� ��� ������� �� ���, ������ ��������?
������ ��������: �������� �����.... ��� ����, �����, �������.
���� �����: ������ ��������, � ������� ���� ��������. ���������� ���������.
������ ��������: ����� ������� ��� ��� ������. ������� ����������� �����, �����...
���� �����: �����������.
������: ��� �� ������ �������! � �������, ��� �� ��������. 
���� �����: ������ ��������, ������ �� ��� �������? ��� ��� ���� ������������� � ��������� �����?
������ ��������: �... � �� ����. �� �����... ��� ���, �� ���... �� ������ ����-��, ���������� � ��������, ����� �������� ������. � �� ����, ��� ��� �������� ���.
���� �����: �� �������� � ����� ����, ������ ���������? ���������� � ���.
������ ��������: �� �������� ����������������� ������ � ��������� ������� �������� - ���������. 
���� �����: ������ ��������, ��� ������ ��� ���������� �������������� � ����� ����?
������ ��������: � �����, ��� �� ���-�� �������. �� �� �����, ����� ����� ������ � ��� �����, ��� ���� ��� ������� �������. 
��� ������� � ����� � �������� ����� �������. ���� � ����� ���������, �� ��������� ��������� �� ��� �������� �������.
���� �����: � �������. ������ ��������, ������� ��� ���, ��� ������ � ������� ������ ����, � ��� ������. 
������ ��������: � �� ����, � ��� �� �������� ������. �� �� ��������� ������� � "��������� ���������", � "������", � "������". 
�� ������ �� ��� � �����, ��������� �������, ��� ��� ����� ���� ����������.
���� �����: � �����, ������ ��������. �������, ��� ������ ��� ������, �� ����� ���� ������, ����� ����� �����. �� ������ �������, ��� ��� ���� � ��������� ���, ��� ��� ������? 
������ ��������: ��� ���� ����. � ��������� �� ����������� �� ����, �� ��� ������� � ��������� �� ����� �� ����������. 
� ���� �� �������� ���� � ������ �� �������� � ���. � �� ���� �� � ������� �� ����� ����� �� � �� �����������.
���� �����: ������ ��������, � ������ ��� ����� �����.
������ ��������: �������� �����, ����� ���, ������� ��.)";
	std::cout << "\n\n";
}
void Director() {
	std::cout << R"(������� � ���������, �������� ���� ����� ���������� �� ����� � ����� �������� ������ ���������.
���� �����: �����������. ���� ����� ���� ����� � � ��������. ������ ����� �������� ������� ��� ���� ���������?
����� ��������: ������ ����, ����. �����, ���������.
���� �����: ������ ��������, � ������, ��� �� ������, ������ � �����.
����� ��������: �������� �����, �� ������ �� ����������� � ������� ���� ������. � ��� ����� �� ���� ������. � �������� ��� �� �������� ���.
���� �����: ������ ��������, ����� �� ������ ���� ���� � ��������� ���?
����� ��������: � ��������� �� ������, � ����� ����� ������ �����. �����, ����, ��� ����� ���� ��������� ������ � ������ ����������, ������, ��� ����� �������.
���� �����: � ��������� �����, ���� �� ���-�� �������������� � ��������� �����?
����� ��������: ���. �� �����. ������ ���. ����� ���� ���� ��� ������.
���� �����: ���� �� � ����� ��������������� ��� ���������?
����� ��������: � �� ���� ������ � ���������! ����� ���� ����, ��������, � ��� �������� � ��������, ��� �����. 
���� �����: �������� � ��������? ���������� ���������, ������ ��������.
����� ��������: ����, ��������...� �������� ������ ���� - �������� � �������� ��� ��������. ��� ����������, ����� ��������� ��� ��� ������.
���� �����: ���� ���� � ������ ��������, ����������, ��� ����� �� ������ �������. Ÿ ��������.
����� ��������: ������������� � ��������������� ����� ���������� ������������ �� ������.
���� �����: ������ ��������, ���� �� ���-�� �������������� � ����� ��������� � ��������� �����? ��������, �� ������� ��������� � ����� ��� �������� ���-�� ��������� ��������� �� ����� �����������?
����� ��������: ��� ����, ��� ������.)";
	std::cout << "\n\n";
}

	void Act1assertivenes() {
		std::cout << R"(����� ��������: ����� ���������� ������ �����.
���� �����: � ����, ��� �� ������ � ����, ������ ��������. � ������ � "��������� ���������", "������", � "������". 
����� ��������:  �� �����. ����� � ������� ���������, �������� �����.
���� �����:  � ���� ����, ��� � ���� ��������� � ����, �� ��� ��? 
����� ��������: � �� ����, ����� ������ � ����� ������ � ���� �����. 
���� �����: � ����� �����, ������ ��������? 
����� ��������: ��� ���� ������, ��������.
���� �����:  � ��� ���� ����� ���� ������� � �������� ����� ������?)";
		std::cout << "\n\n";
	}

	void Act1diplomacy() {
		std::cout << R"(����� ��������: ��, ��� ���. ����� � ������� ���������, �������� �����.
���� �����: � �������, ��� �� ������ �������� ���� �����, �� ������ � ����� - �������� �������. 
��������, ��� ���� �� ���� ������ � ��������, ���� �� ��� ����� �������� �� �� ������������. 
����� ��������: � ������ ���������� � ���, �� ���� �� ���������. 
���� �����: � ���� ���������� � ���, ������ ��������. � � ������, ��� �� �� ������, ����� ��� ���� � ����� ���, ���� �� �������� � ������� ����� �������� �� �� ������������.)";
		std::cout << "\n\n";
	}

	void Director2() {
		std::cout << R"(����� ��������: � �� ����. � ����� �� �����. � ����, ����� ��� ���� � ������������. ����� ��� ���� ����.
���� �����: ������ ��������, � ������� ��� �������� ������. ���� ���� ������ ���� ����� "���". 
����� ��������: � �� ����, ��� ������. 
���� �����:  � ������ ���. �� �� ������ ������� ��� ���.
����� ��������: � ����� �� �����.
����� �������� ����� �� ��������. 
)";
		std::cout << "\n";
	}

	void Director3() {
		std::cout << R"(� ������� �������� ����� ��������.
����� ��������: ��������! ��� ������ ����� ������. ������! �� ����� �����, � ������� ���.
���� �����: ������ ��������, � ������ ���������� ���� �� � ���������� � ����������� ����������� ������?
����� ��������: �������, ����� ��������� � �������� ���������� � ��� ��� ����������� �� ����� ����� ����������, � ��� �� ������ �� ���, ��� ��� � �������� � �����������.
���� �����: �����. ����� �������� ��� � ������������ ������ ��������.)";
		std::cout << "\n\n";
	}

	void Security() {
		std::cout << R"(���� ����� ����� �������� ��������� ������.
���� ����� ���� ����������� � ��� ������������� ������������, �������� ��� ������� ���������� ����� �������� - ������� �����.
���� �����: �����������! (����� ��� �� ��������) ������� ������, ��� ����?
������� ������: �������. ������ ������. �, �� ������? ��� ��� ���?
���� �����: ��� ��� ���� �����.
������� ������: ��� ������, � ������, ���� �����.
���� �����: ������ ����, ������.
������� ������: ��� ���� �� � ������ ��������� ������?
���� �����: (������� ����� � �������) �����. ������ �������� ������, � ��� ���. ������, ��������, ��� ������ �� ������? 
������� ������: �� ��� ��� ������, ����. ������ ��������, ����� �����, ���� ������ ����-������. 
���� �����: � ����� � ����-�� �� �����?
������� ������:  �� �� �� ������, ����. � ���� ������ ��� �� �����. 
���� �����: �������� ���, ��� �� ������. 
�������, ��� ������� ������� � ������ ��������� ��� ���� ���� �� ����������� ���������. �� ��� �������� ������ - ������������ � ������ � ���������.
������� ������: �� ���� � �� ����, ����� ���� ������� ��������, ����. 
���� �����: �� �����, ������. ��� �� � �������, ���� ����� ��� �����.
������� ����� �� ����� ��������� � ��� ����� ������� ������� ��������� ���������.
������� ������: � ��� � �������� ������� ����. 
���� �����: � ��� ���? 
������� ������: ������. ����� ��������. �������, ��� �� "�� �������". 
���� �����: ��� ������ � ����? 
������� ������: � ��� ��� �����. ������ ������ ���� ����������, ��� ������ ����� �� �����������, � �� ����� ����� ������� ���� �������� � �������. ����� �������. �� ��� ��� ������.
���� ����: ��� ���? 
������� ������: ��, ����. ��������� �������. ����� �������, � � ������ ������.
���� �����: ������, �������� �� ����� ��� ����-��, ��� �������� � ���� �������?
)";
		std::cout << "\n\n";
	}

	void Act3assertivenes() {
		std::cout << R"(������� ������: ����, � ������ �� ����. � ������ ������� �����. �� ������ ��� ������, �� � ���.
���� �����: �� ������ ���, ������. �� ��� ������. 
������� ������: �� �����, ����. ���� ���� ������� ������ ����. � �����, ��� �������� ������� �������� �������. � ��� �������� � ��������� � �����������. 
���� �����: � �����. 
������� ������: ����, � ���� ������� ���������� � ����. ������� �� ������� ������. 
���� �����: ������� �� �����, ������. � ��� �� ������.  
������� ������: ����, � ���� �������, ��� � ���� ������ ��� �� �����. �� ����� �� ���� � ���. 
���� �����: � �� ���� �� �������, ������. � ��������. 
������� ������: ����, �� ��� ���� ������������ �������� ��������. 
���� �����: �� � ������ ���, ������. �� � ���� ����� ������
)";
		std::cout << "\n\n";
	}

	void Act3diplomacy() {
		std::cout << R"(������� ������: ����, � ������ ������� �����. ������ ���������� �� �������. 
���� �����: � �������, ������. �� �� ������, ��� � ���������� ��� ���� ����� �����. � �� ��������, ����� ������, ��� ���� �������.
������� ������: �� �����, ����. ����� ������ ��, ��� �����, ��� �������� ������� ���������� � ��������. ��� �������� � ��������� � �����������. 
���� �����: ��.. ���������.
������� ������: ����, ���� ��������� � ����. ������� �� ������� ������.
���� �����: ������� �� �����, ������. � ��� ����. 
������� ������: ����, ����� ��������� �������� �� ���� �������. � ���������� ����� �� ������� � ����� ����. 
���� �����: � �������, ������. �� � ��������. � ������ ������ ������.
������� ������: ����, �� �������� ����� ������.
���� �����: ��������. �� � ������ ����� ������.
)";
		std::cout << "\n\n";
	}

	void Japanese() {
			std::cout << R"(����������������� �������� ������� �������� ������ ������� ���������� � �������. ���� ����� ������� � �������� �������, ������� ����� � �������� � �������������. ������� ���������� ������� �� ������� ������.
���� �����: �������, ��? ���������� �������.
�������� �������: ��. ���?
���� �����: ��� ��� ���������� � ����? ����� ����� � ����, ������ ����, �� ��� �� � �����?
�������� �������: � �������.
���� �����: ���� �������?
�������� �������: �� ���� ����.
���� �����: �, �� � ����� ����� ����, ������� �������� ������������ ������. 
�������� �������: � �� �������, � ��� �� ��������. ��� ����� ��������, �������.
���� �����: �� ��������, ��������. � ��� ��� ���� � ��� ����������. 
�������� �������:  �� ��� �����? � ������ ������ ���? 
���� �����: � ����, ��� �� ����� �� ������ ���.
�������� �������: � ��� �� ��������?
���� ����: �� �������, ��� ����� �� ��������, ��� �� �������� ����� � ������? ������������ �����������, ��� �� ����� � �������� ���������� ��������, �������.
�������� �������: �
���� �����: � ����, ��� �� �� ������ �������. � ���� ���� ������������ ����.
�������� �������: �� ������ ����� �� ��� ��������� � ������ ������.
�������� ������� �� �������� ������ ���������, ����������� � ����� ����� ��������, ������ ������ ������. 
��������, � �������� ��� ���� - ������� �������� ���� �����, �������� �� �������� ������� - ��� ����� ���-�� ��������. � ����� ������, ��� ������. )";
			std::cout << "\n\n";
}

	void Accountant() {
		std::cout << R"(������� � �������� �������� ����������, ���� ����� �������� � �����.
�������: ���?!
���� �����: ������ ����. ���� ����� ���� �����, � �� ������� ���������.
�������: ��-��. � �����. ������ � ������� ��� � ������.
���� �����: ��������..��..����?
�������: ���� �������.
���� �����: ���� �������, �� ������ ������ � �����?
���� �������: � ���������, ����. �� ����� ����� ���������.
���� �����: ���� � ��������, ������ ��� �������� �� ����?
���� �������: ���������� ��� ������� �� ������, ��� ����� ���� � � ���� ����� ��������� ��� �� ����. � ��� �� ��� ����� � ������������ ����� �������, ����� ����������� �����.
���� �����: � �� �����, ���� �������. 
���� �������: ��������� ���������.
���� �����: ���� �������, ��� �� ������, � ��������� ���� � ������� �����. ��������, �� ������ ��� ������� ���-�� ��������?
���� �������: �������� �����, � ���� ���� ������ ���������� �� ������.)";
std::cout << "\n\n";
}

	void Table() {
		std::cout << R"(���� �����: ���� �������, � ����, ��� �� ������ ��� ���� �����������. ��, ��� �������� "������" �������� ������. 
���� �������: � �� �������, � ��� �� ��������, ��������.
���� �����: ���� �������, �� ����� �� ���������, ��� ������ �� ������ ��������? � ����� �� �� ������, ����� � ����� �����? 
���� �������: �... � �� ����, � ��� �� ��������. 
���� �����: ���� �������, �� ���������� ���������. ����������, ������... ��, �����, �� �� ������ ������ �� ����. 
���� �������: �������� �����, � �� �������, ����� �� �������� ���. 
���� �����: � ����, ��� �� ���-�� ���������. � � ����, ��� ��� ������� � ������� � �������� �������. 
���� �������: �... � ������ �� �������. 
���� �����: ���� �������, � ����� ��� ������, ����� � �������� � �������� ��������� ������. �� ������ ������, ��� ��������. 
���� �������: � �� ����. 
���� �����: ���������� � ���� ������ � ������ �����������.
���� �������: ������, �� �����. � ���� ��������� ��������. ��... � �� �������, ��� �� ��� �������.
���� �����:  � ��� � ���? ������ �������� ��� ���.
���� �������: ���. ��� ���, ��� � ���� ����. ��� ���������� �� �������������� "���������".
���� �����: �������������� ��������"... ���������. � ���� ����� ������� ����� �����. 
���� �������: ��� ��������� �������, �������� �����. 
��� ������: ��� ����?
���� �������: ��� ������� ���������, ��� ���� � ������. 
���� �����: ��������� �������� �� ��������� �� �������������� �������? ���������, ���� �������, �� ��� ��?
���� �������: ������ �������� ��� ���������� �����. �� ����� ���������� ���� ����� ��� ���������� ������. 
���� �����: �� �� ������, ��� ����� ��������� ����� ������, ���� �������?
���� �������: � � ��� ������� ��� � ������ �������� ���� ����� � ����� �� �������� ��������� ���� ����� ���������. ��, ������... �� ������ ����� ����� � ����, ������� ���� �� ��������.
���� �����: ���� �������, �� ��������, ��� � ��� ���� ���������� �� ������. ���� �� � ����������?)";
		std::cout << "\n\n";
	}

	void Window() {
		std::cout << R"(���� �����: ���� �������, � ������� ��������� ���� ���������� �����? ����������? �����? 
���� �������: � ������ �� ����. 
���� �����: ���� �������, �� �� ��������� ������, ��� �������� � ������� ���������. �� ������ ��� �����������. ������ � �������� �������� � ��������� ��� ������ ������.
���� �������: � ���� ���� ��������. � ���� ��� ������� � ������ ����������.
���� �����: ������, � �������. �� �� ������ ������� ���, ��� ���������� �� ������? 
���� �������: � ��� ����������? ��������������� ���� ��������. ��������� �� �����. ��� �� ������ ��������? 
���� �����: ��������, � ���������� ���������� �����������? 
���� �������: ��� � ��� ��? 
���� �����: �������� �� �������� � ��������� �� ������� �������� �������, ������������� ������� �������. 
���� �������: ��� �����, ��� ��� ������� �� �����. �� ����� �������� ����������, ��� � ����������. 
���� �����: ���� �� ���-�� �������� � ��� ���������? 
���� �������: ������� ������, �������� �����. ���� �� ��� ��� ����������, ���������� � ���� � ���������� ��� ���. ��, ������... �� ������ ����� ����� � ����, ������� ���� �� ��������.
���� �����: �� ���������, ���...
���� �������: �� �� ��� � �� �������. ������� ���������, ���������� ����� ������� �� ������, ����������� ��������.
���� �����: ���� �������, �� ��������, ��� �������� ������� ������� �� �����, ��� ������ �� ����������?
���� �������: ��� � ��� ���, ������.
�������.. �� �� ����� ������.. ������ ������� �������. �������, ����� ������ ������� �� ���� - ������� ��������.
���� �����: ���� �������, �� ��������, ��� � ��� ���� ���������� �� ������. ���� �� � ����������?)";
		std::cout << "\n\n";
	}
	void Chair() {
		std::cout << R"(���� ������� ������� ����� � ����������� ������. ����������� ��������� ���������, �������� ���� ����� ������ � ������, ��� ����� � ������ ������ ���������� ����� ���� ��� �����.  
���� �������: ���� �� ��� ����������, � ������� ���.
���� �����: �������, ���� �������.)";
		std::cout << "\n\n";
	}

	void Exit() {
		std::cout << R"(����� �������� ���������� ������������ �� ������ ����� ������, �������� ����� ���� ������, ����������� ������� ������ ������ � ����. 
� ������ ��������� ��������� ����� ���� �������: " ��, ������... �� ������ ����� ����� � ����, ������� ���� �� ���������.
�� ����� �� ��� �� �����. �� �������, ��� � ���� ������� ������, ��� ������ ��������� �������. �� ����� ������, ��������� �� ����� ������ � �� ���� �����.  
����� �� ��������, �� ������� ������� ��������, ������������ ��� �����. ������� ������, ������, ������, ������� �� ��� ������������. 
�������� ���������� � ������ ���� ������� ������, ������ � ������ ������� ������. ���� � ��� ���� �������, ������� - ��������� � ���������������. �������� ������, - ������������ � ������ ������. 
����-�� �� ���...� - ������� ��������, �������� �� ���, ��� ��� ������������� � ���-�� � ������� ����� ��������.
��� ����� ������� ���� �� ���� - ������. ��������. ��� �� ������ ��������.� 
����� ������ �������. �� ��������� �� ����. �����, �� ��������� ��������, �� ����� �� ��������, �������� �� ������ �� �� ����.  
��� ��� ���� �����, ���� ����������� �������, ���� �������� �����, ������������� ������ ������. 
����� ��� ������������ ����� ������� �������, ������� ��������� �� ������� ������� ���������. ����� ��� ����� �� �����������, �������, � �������� ��������� ��������. 
������� �������� ������, ������� ������ ������ ���������. 
��� ��� ������, ��� ������ ����� �����. ��� ����� ��� ������?� - ������� �����.
�������� ��������� �� ������ ������, �������� ������� � �������� ���. 
�� �����, ��� ��������, �������� ������� �������, ������ ���-�� �������.
������ �������: ������ ��������, �� ������ ��� ������.
����� ��������: � �������, ������, �� ������ � ���� ��� ��������.
������ �������: �� � ��� ���� ���-�� ����� ������. 
����� ��������: ��� �� ������ � ����? 
������ �������: ���� ����. ��� ��� ����� ���������. � �� �� ����� ���������� � ���. 
����� �������� ���������, ��� ��� �������� ����, ����������� ��������� � �������. 
����� ��������: �� ������, ������ ���� � ��� ����� �� ������. 
������ �������: �� ���������, ��� ������ - ��� ������ ������.
����� ��������: � ����� �� ������� �������� � ����, �������� ���� � ����� Ը��������. 
������ �������: �� ������ � ������ �����, �� �� ������� � ����� ��������, ��� � �������� �� ����� �������� �����. ������� ��� ���� ��������� �� ���� ����.
����� ��������: � ��� ��� ������, ��� ������ ����� ������, ��� � ����������.
������ �������: �� ������, ��� ��� �� �������?
����� ��������: ��, ��������� � ���� �� �����, �� ��� ��� �����. � ������ �� ��������� ���!
������ �������: �� �� ��������. �� ������, ��� �� ����� ������� � ���
����� ��������: ��� �� �������� � �����?
������ �������: ��� ��� ���������. �� ������� ���� ����. �� �� �� ��������� ����������� "�����������". 
����� ��������: � ������ ��� �� ������.
������� ������ ��������� ����� �������� � ���� ����� �������� �����. 
������ �������: �� ��� ������ ���. 
������ ������ ������������ �������. ������� ��������� �� ��������� ������ � ������� ������� ��� ������. � ���� ������ �� ����� - � ���������� ��� ���� �������, ��� �� �����. 
� ����� � ������� ���������.)";
		std::cout << "\n\n";
	}
