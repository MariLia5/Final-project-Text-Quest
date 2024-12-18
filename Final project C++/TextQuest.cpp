#include "Detective.hpp"

// ��������� ����� � ������ ������

const char* Start = R"(�������� ���� �����: ���������.
����������� ��� � ����! 
��� ��������� ������ �� ���� ��������� ����� ������ � ������� ��������� ���. 

���� ������������ ���� ��������� ��������������, ������� ����� �������� � ���� ����, � ����������� �� ������ ������.
�������� - �������� ���� �����.
������� � 51 ���.
���� ������� �������������� � ����, ������� ������ �� �������� �����.
������������ � 0
��������������� � 0
���������������� � 0;

�����, ���� ��������� ������� �������������, ������� ����� ������ �� �������������!
������� ����������� � ������� ������, ������� ������� ��� �������� �������.)";

const char* Cabinet = R"(�������� ���� ����� ����� � ����� �������� � �������� � ������� ������, ������� ����������������� � �������������� ����.
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
������: ��� �� ������ �������! � �������, ��� �� ��������. )";

const char* Act0Question = R"(��������:
�� ���� ����������� ������ ��� ����� ���������� ������, ������� ���������� �������. ������ � ���� ������� ������ �� ����� �������������.
��������� ���, ��� ��� �����!
��� ������ ���� �����?
1.������ ��������, ������ �� ��� �������? ��� ��� ���� ������������� � ��������� �����?
2.����� ��������, ����� ����������� �� ���������� � ���������� ������ �� ��� �������?.
3.���������� ����� ������.)";

const char* Cabinet2 = R"(������ ��������: �... � �� ����. �� �����... ��� ���, �� ���... �� ������ ����-��, ���������� � ��������, ����� �������� ������. � �� ����, ��� ��� �������� ���.
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

const char* Director = R"(������� � ���������, �������� ���� ����� ���������� �� ����� � ����� �������� ������ ���������.
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

const char* Act1Question = R"(
��� ������ ���� �����?
1.�� �������, ��� � ��� ������ ������? ����� �������� � ���������, � ����������� � ��������� ������� � ����� ������ � � ����������� ������. 
��� ����� �� � ������, ������ ��������? ��� ����� �� ������ ���������������� �����������?
2.�������, ��� ��� ��������, ������ ��������. �������� � ������� ������������� ���������. 
����� �������� � ��������� � ������ ��������� ���������� � ����� ����������� � � ��������� ������. � ��� �����, ���������� � ���������� ����������.
3.���������� ����� ������.)";

const char* Act1assertivenes = R"(����� ��������: ����� ���������� ������ �����.
���� �����: � ����, ��� �� ������ � ����, ������ ��������. � ������ � "��������� ���������", "������", � "������". 
����� ��������:  �� �����. ����� � ������� ���������, �������� �����.
���� �����:  � ���� ����, ��� � ���� ��������� � ����, �� ��� ��? 
����� ��������: � �� ����, ����� ������ � ����� ������ � ���� �����. 
���� �����: � ����� �����, ������ ��������? 
����� ��������: ��� ���� ������, ��������.
���� �����:  � ��� ���� ����� ���� ������� � �������� ����� ������?)";

const char* Act1diplomacy = R"(����� ��������: ��, ��� ���. ����� � ������� ���������, �������� �����.
���� �����: � �������, ��� �� ������ �������� ���� �����, �� ������ � ����� - �������� �������. 
��������, ��� ���� �� ���� ������ � ��������, ���� �� ��� ����� �������� �� �� ������������. 
����� ��������: � ������ ���������� � ���, �� ���� �� ���������. 
���� �����: � ���� ���������� � ���, ������ ��������. � � ������, ��� �� �� ������, ����� ��� ���� � ����� ���, ���� �� �������� � ������� ����� �������� �� �� ������������.)";

const char* Director2 = R"(����� ��������: � �� ����. � ����� �� �����. � ����, ����� ��� ���� � ������������. ����� ��� ���� ����.
���� �����: ������ ��������, � ������� ��� �������� ������. ���� ���� ������ ���� ����� "���". 
����� ��������: � �� ����, ��� ������. 
���� �����:  � ������ ���. �� �� ������ ������� ��� ���.
����� ��������: � ����� �� �����.
����� �������� ����� �� ��������.)";

const char* Act2Question = R"(��� � ��� ����� ������� ���� �����?
1.���� ����� ��������� ������ �� ����� � �������� ������ ���������.
2.���� ����� �������� ���� ������ ���������.
3.���� ����� �������� �� �������� � ��������� � ����.)";

const char* Act2Case2 = R"(���� ����� �� ����� � ������� � ����� ������ ���������.
���..� ��� ��� ����� - ������� ��������. �� ����� ��������� ������ ��������� � ����������� ����� ��� ������. 
���� ����� ���� � ���� ��������� � �������� �������� �� ������.
������������ ����� ����� �������� �� ����� 1 �������� ��������. ��������� - ������� ����� � ������� ��������� �� �����.)";

const char* Act2Case3 = R"(���� ����� �� ����� � ������� � ���� ��������. ������� - ������� ��������, ������� ������� �� �����������.
�� ��� ��� �����?�. �� ����� ��������� �������� ������� �� �������� �����.
�������� ��������������� ������ � ����� �� �����.)";

const char* Director3 = R"(� ������� �������� ����� ��������.
����� ��������: ��������! ��� ������ ����� ������. ������! �� ����� �����, � ������� ���.
���� �����: ������ ��������, � ������ ���������� ���� �� � ���������� � ����������� ����������� ������?
����� ��������: �������, ����� ��������� � �������� ���������� � ��� ��� ����������� �� ����� ����� ����������, � ��� �� ������ �� ���, ��� ��� � �������� � �����������.
���� �����: �����. ����� �������� ��� � ������������ ������ ��������.)";

const char* Security = R"(������� ������� ������ ���������, ���� ����� ��� �� ���� � �������� � �������� ���������, ��� ����� ���� ������, ���� ��������� ������. 
�� �������� ���� � ��������� � ������ ������� �������� �� ��������� ��� ���������� ������.
���� ����� ����� �������� ��������� ������.
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
������� ������: � ��� ��� �����. ������ ������ ���� ����������, ��� ������ ������� �� �����������, � �� ����� ����� ������� ���� �������� � �������. ����� �������. �� ��� ��� ������.
���� ����: ��� ���? 
������� ������: ��, ����. ��������� �������. ����� �������, � � ������ ������.
���� �����: ������, �������� �� ����� ��� ����-��, ��� �������� � ���� �������?)";

const char* Act3Question = R"(��� ������� ���� �����?
1.������, � �������, ��� �� ������ ���������� ���� ������, �� ��, ��������, ������� ����� �����������, �������� �� ���������� ������?;
2.������, �������� �� ����� ��� ����-��, ��� �������� � ���� �������?
3.���������� ����� ������.)";

const char* Act3assertivenes = R"(������� ������: ����, � ������ �� ����. � ������ ������� �����. �� ������ ��� ������, �� � ���.
���� �����: �� ������ ���, ������. �� ��� ������. 
������� ������: �� �����, ����. ���� ���� ������� ������ ����. � �����, ��� �������� ������� �������� �������. � ��� �������� � ��������� � �����������. 
���� �����: � �����. 
������� ������: ����, � ���� ������� ���������� � ����. ������� �� ������� ������. 
���� �����: ������� �� �����, ������. � ��� �� ������.  
������� ������: ����, � ���� �������, ��� � ���� ������ ��� �� �����. �� ����� �� ���� � ���. 
���� �����: � �� ���� �� �������, ������. � ��������. 
������� ������: ����, �� ��� ���� ������������ �������� ��������. 
���� �����: �� � ������ ���, ������. �� � ���� ����� ������)";

const char* Act3diplomacy = R"(������� ������: ����, � ������ ������� �����. ������ ���������� �� �������. 
���� �����: � �������, ������. �� �� ������, ��� � ���������� ��� ���� ����� �����. � �� ��������, ����� ������, ��� ���� �������.
������� ������: �� �����, ����. ����� ������ ��, ��� �����, ��� �������� ������� ���������� � ��������. ��� �������� � ��������� � �����������. 
���� �����: ��.. ���������.
������� ������: ����, ���� ��������� � ����. ������� �� ������� ������.
���� �����: ������� �� �����, ������. � ��� ����. 
������� ������: ����, ����� ��������� �������� �� ���� �������. � ���������� ����� �� ������� � ����� ����. 
���� �����: � �������, ������. �� � ��������. � ������ ������ ������.
������� ������: ����, �� �������� ����� ������.
���� �����: ��������. �� � ������ ����� ������.)";

const char* Japanese = R"(����������������� �������� ������� �������� ������ ������� ���������� � �������. ���� ����� ������� � �������� �������, ������� ����� � �������� � �������������. 
������� ���������� ������� �� ������� ������.
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
��������, � �������� ��� ���� - ������� �������� ���� �����, �������� �� �������� ������� - ��� ����� ���-�� ��������. � ����� ������, ��� ������.)";

const char* Act4Question = R"(����� �������� ������� ������� � ���� ��������� ���������, ��� ������ ���� �����?
1.���� ����� �����, ��� � ����������� �� ������ ��������� � ���������� � ����������.
2.���� ����� ������� � ��������, �� ������� ������� �������� �������.
3.���� ����� ����� ��������������� �������� ������.)";

const char* Act4Case1 = R"(���� ����� ����������� � ����� � ������ ������� �� �������� �������. �������� �� ������ ���� � ����� � ������� �������� �������� ����������.)";

const char* Act4Case2 = R"(���� ����� �������� ���������� �� �������� � ����� ����� � �������, �� ������� ������� �������� �������. 
�������� ����� �����, ��� ��������� � ���������. �������� ������, ���� ����� ��������� � ������� � ���� �������� �� ����� �����.
��������, ������� ��������� ��������������, ��� ����� ��������� ������� �� �����. ���������.
�������� ����������� �������� �������: �������� � �������. ��������� ������ ������ �������, ���� ����� ��������� ������������� � ������� ������� �������.
���� ���! ���������?� - ���������� � ������ � �����. �������� ��� ��������� �������, �������� ��������, ��� �� ���� ����� ������� �������. 
����� ���� ������� �����, ��������, ��������, ��� ������ ����� ��� � ���������� �� ������ ���� � �������� �������� ����������.)";

const char* Act4Case3 = R"(���� ����� ����������� � ����� � ������ ������� �� �������� �������. 
������, ��������� ��������� �� ������ �������� ����������� � ����� ���������. ����� �����, �������� �������� �� ������ ���� � ����� � ������� �������� �������� ����������.)";

const char* Accountant = R"(������� � �������� �������� ����������, ���� ����� �������� � �����.
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

const char* Table = R"(���� �����: ���� �������, � ����, ��� �� ������ ��� ���� �����������. ��, ��� �������� "������" �������� ������. 
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

const char* Window = R"(���� �����: ���� �������, � ������� ��������� ���� ���������� �����? ����������? �����? 
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

const char* Chair = R"(���� ������� ������� ����� � ����������� ������. ����������� ��������� ���������, �������� ���� ����� ������ � ������, ��� ����� � ������ ������ ���������� ����� ���� ��� �����.  
���� �������: ���� �� ��� ����������, � ������� ���.
���� �����: �������, ���� �������.)";

const char* Exit = R"(����� �������� ���������� ������������ �� ������ ����� ������, �������� ����� ���� ������, ����������� ������� ������ ������ � ����. 
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

// ��������
const char* GoodEndingAssertiveness1 = R"(������ �������� �� ��������, ��������� ���� � �������� ����, ����� ���� �����, �����������, �� ���������, ����� � ����� ��������. 
����, ������� ������������ ���, ���� ���������. ����� ��������, ������� ������� � ���������� �������, �������-�� ���� ��������.
����� ��������, ���� �����, ��� �� ���, ��� �������. �� ������ ������� � ������. �� �������� ������� ����� ������� ��������� �� ������ � ��� � ����, �� �� ���������� ���� �������. 
��������� �� ����� ����� ����� ������ ��� �� ����������� �����. 
���� ����� ����� ���������, ��������������, ��� ����� �������� ��������� ����������� ����� �����, �� ��� ������ ���� ����������� ���� � ������ �������� �� ����� ������ �����,
����� ������� ����� ������� �� �, ��������, �����. �� ����������� �������� ��������� ������� � ���������� �� ����� ������.
������ � ����� �������� �������� ��� ����� � ������� ����������. ��� �������� � ��������� � �������� � ������ ��������� ����� �����.
������� �� ����������� ���� ����� ������� ������� �������. ������ � ����� ������ �������� ������� �������.)";

const char* GoodEndingDiplomacy1 = R"(������ �������� �� ��������, ��������� ���� � �������� ����, ����� ���� �����, �����������, �� ���������, ����� � ����� ��������. 
����, ������� ������������ ���, ���� ���������. ����� ��������, ������� ������� � ���������� �������, �������-�� ���� ��������.
����� ��������, ���� �����, ��� �� ���, ��� �������. �� ������ ������� � ������. �� �������� ������� ����� ������� ��������� �� ������ � ��� � ����, �� �� ���������� ���� �������. 
��������� �� ����� ����� ����� ������ ��� �� ����������� �����. 
���� ����� ����� ���������, ��������������, ��� ����� �������� ��������� ����������� ����� �����, �� ��� ������ ���� ����������� ���� � ������ �������� �� ����� ������ �����,
����� ������� ����� ������� �� �, ��������, �����. �� ����������� �������� ��������� ������� � ���������� �� ����� ������.
������ � ����� �������� �������� ��� ����� � ������� ����������. ��� ��������� � ������ ������, � �����, ��� ����� �� �� ����. ��� ��� ����� ������ ����� �����, ��������� �� ������� � �������������.
������� �� ����������� ���� ����� ������� ������� �������.)";

const char* GoodEndingAssertiveness2 = R"(������ �������� �� ��������, ��������� ���� � �������� ����, ����� ���� �����, �����������, �� ���������, ����� � ����� ��������. ����, ������� ������������ ���, ���� ���������. ����� ��������, ������� ������� � ���������� �������, �������-�� ���� ��������.
���� ����� �����, ��� ����� ��������, ��� �� ������ ���������� ������, � ���������� �������� �����. ��������������, ��������� � �������� �������� �������, ����� ��������� ������ ��� ����������� �������������. 
������� ������ ���������, ������� ���������� �� ����� ������, ����������� �������� �� ��������. �������� �����, ����������� ��������, ���� ����������, � �� ���������� ������������ ���������. 
����� �������� � �����������: �� ������ ���������� ����� ������ ����������, ����� ��������� � ��������� �����. �� �������� ��������. ���������, ��� �������� �����, �������� ������� � ����������, � �� ������ ���� ��������� ����������.
����� ��������, ����� � ���, ��� �������� ����� ���� ���������� ����� ��� ��������. �� ����������� � ������� ������, �������� �������� ����������� � ��������� ����� �� ���. � �������� ��� ��������?
����� ��������, ���������� ���������� ��������, ���� ��������.
������ � ����� �������� �������� ��� ����� � ������� ����������. ��� �������� � ��������� � �������� � ������ ��������� ����� �������. 
����������, ��� ����� ������� ������� � ���� ����� ���� �� ������. ��� ���������� ��� ���� ������� ������� � �������� ������.)";

const char* GoodEndingDiplomacy2 = R"(������ �������� �� ��������, ��������� ���� � �������� ����, ����� ���� �����, �����������, �� ���������, ����� � ����� ��������. ����, ������� ������������ ���, ���� ���������. ����� ��������, ������� ������� � ���������� �������, �������-�� ���� ��������.
���� ����� �����, ��� ����� ��������, ��� �� ������ ���������� ������, � ���������� �������� �����. ��������������, ��������� � �������� �������� �������, ����� ��������� ������ ��� ����������� �������������. 
������� ������ ���������, ������� ���������� �� ����� ������, ����������� �������� �� ��������. �������� �����, ����������� ��������, ���� ����������, � �� ���������� ������������ ���������. 
����� �������� � �����������: �� ������ ���������� ����� ������ ����������, ����� ��������� � ��������� �����. �� �������� ��������. ���������, ��� �������� �����, �������� ������� � ����������, � �� ������ ���� ��������� ����������.
����� ��������, ����� � ���, ��� �������� ����� ���� ���������� ����� ��� ��������. 
�� ����������� � ������� ������, �������� �������� ����������� � ��������� ����� �� ���. � �������� ��� ��������?
����� ��������, ���������� ���������� ��������, ���� ��������. ������ � ����� �������� �������� ��� ����� � ������� ����������. 
��� ��������� � ������ ������, � �����, ��� ����� �� �� ����. ��� ��� ����� ������ ����� �����, ��������� �� ������� � �������������. )";

const char* GoodEndingAssertiveness3 = R"(������ � ����� �������� �������� ��� ����� � ������� ����������. ��� �������� � ��������� � �������� � ������ ��������� ����� �������. 
����������, ��� ����� ������� ������� � ���� ����� ���� �� ������. ��� ���������� ��� ���� ������� ������� � �������� ������.)";

const char* GoodEndingDiplomacy3 = R"(����� ��������, ���������� ���������� ��������, ���� ��������. ������ � ����� �������� �������� ��� ����� � ������� ����������. 
��� ��������� � ������ ������, � �����, ��� ����� �� �� ����. ��� ��� ����� ������ ����� �����, ��������� �� ������� � �������������. )";

const char*  AverageEndingAssertiveness = R"(������ �������� �� ��������, ��������� ���� � �������� ����, ����� ���� �����, �����������, ����� � ����� ��������. ����, ������� ������������ ���, ���� ���������. ����� ��������, ������� ������� � ���������� �������, �������-�� ���� ��������. �� ����� �����?
�������� �� ����� �������������� ����, ��� ������� ����� ����� ���� ����������� "�������� �����" �� �������� ��� ������ ���������� �� ������ ����������. �� �� �� ��� ������� ��������� ����� � ������������� ����� ��������. �� ��� ������� �������.
���� � ������� ����� ����� � �����. ������� ����� ��������� ��-�� ���������� �������������. ��������� ��������� ������ � ����������.
����� ��������, ���� ������� � ������ � ��������� � ��������������� ���������. ��� ��� �������, �� ���������� �����������, �������� ������.
�������� � ��������� �������������� ��������� �����, �������� ���� ����, �� �� ������� �� ��������� � ������� � �����.
������ � ������ �������� �������� ��������� �� � ���������.
����� �������� ����������� ���� � ���� �����, ��������� �� ������ ����������, ������� �������� ����� ������.
������ �������� ������� ������� ����������. )";

const char* AverageEndingDiplomacy = R"(������ �������� �� ��������, ��������� ���� � �������� ����, ����� ���� �����, �����������, ����� � ����� ��������. ����, ������� ������������ ���, ���� ���������. ����� ��������, ������� ������� � ���������� �������, �������-�� ���� ��������. �� ����� �����?
�������� �� ����� �������������� ����, ��� ������� ����� ����� ���� ����������� "�������� �����" �� �������� ��� ������ ���������� �� ������ ����������. �� �� �� ��� ������� ��������� ����� � ������������� ����� ��������. �� ��� ������� �������.
���� � ������� ����� ����� � �����. ������� ����� ��������� ��-�� ���������� �������������. ��������� ��������� ������ � ����������.
����� ��������, ���� ������� � ������ � ��������� � ��������������� ���������. ��� ��� �������, �� ���������� �����������, �������� ������.
�������� � ����� ���� ����� �� ��������� ������ ������ ������� ���������� � ��������� �������� ����.
������ � ������ �������� �������� ��������� ����� � ���������.
����� �������� �������� ����.
����� �������� ����������� ���� � ���� �����, ��������� �� ������ ���������� ������, ������� �������� ����� ������.
������ �������� ������� ������� ����������.)";

const char* BadEndingAssertiveness = R"(������ �������� �� ��������, ��������� ���� � �������� ����, ����� ���� �����, �����������, ����� � ����� ��������. ����, ������� ������������ ���, ���� ���������. ����� ��������, ������� ������� � ���������� �������, ���� ������.
���� ����� ������� ��������� ����, � ������� ������ ������ ��������� �� ��������� ����� �����, �� �� ����� ��������� � ��������� �������. �� �������, ��� � ���� ���� ������������� ����, ������� �� ��� �� ��� ������. ����, ������� �������� � �������� ������ ����������.
���� � ������� ����� ����� � �����. ������� ����� �� ������� ��-�� ���������� �������������. ��������� ��������� ������ � ����������.
����� �������� ��������� ���� � ��� ������, ����� ������� ��������� ���������. ��� ���� ������� ������, �� ���� ���� ����������� � ��������� � ���� ������ �� ������� �� ������.
����� �������� ����������� ���� � ���� �����, ��������� �� ������ ������, ������� �������� ����� ������.
����� �������� ��������� ����� �� ������� � ����� �� ��� ���� ���������� - ���� ��� ������.
������ ���� ������ ����� ������������� � ������ ���� ��������� ������ ��������.)";

const char* BadEndingDiplomacy = R"(������ �������� �� ��������, ��������� ���� � �������� ����, ����� ���� �����, �����������, ����� � ����� ��������. ����, ������� ������������ ���, ���� ���������. ����� ��������, ������� ������� � ���������� �������, ���� ������.
���� ����� ������� ��������� ����, � ������� ������ ������ ��������� �� ��������� ����� �����, �� �� ����� ��������� � ��������� �������. �� �������, ��� � ���� ���� ������������� ����, ������� �� ��� �� ��� ������. ����, ������� �������� � �������� ������ ����������.
���� � ������� ����� ����� � �����. ������� ����� �� ������� ��-�� ���������� �������������. ��������� ��������� ������ � ����������.
����� �������� ��������� ���� � ��� ������, ����� ������� ��������� ���������. ��� ���� ������� ���������� � ����� �� ����������� ������� ������ � ��������. ������� ��� ������� �� ������������.
����� �������� ����������� ���� � ���� �����, ��������� �� ������ ������, ������� �������� ����� ������.
����� �������� ��������� ����� �� ������� � ����� �� ��� ���� ���������� - ���� ��� ������.
������ ���� ������ ����� ������������� � ������ ���� ��������� ������ ��������.)";

const char* End = R"(��������� ��� �� ��������� ���������� ��������� ������.
������� ��� ����������� ������ �� ���� ��������� ����� ������ � �� �������� ����� ���������.)";