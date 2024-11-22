#pragma once

#include<iostream>
#include<cstdlib>

// Статы игрока
extern int assertiveness;
extern int	diplomacy;
extern int	observation;
extern int table;
extern int window;
extern int chair;

// Текст
extern const char* Start;
extern const char* Cabinet;
extern const char* Act0Question;
extern const char* Cabinet2;
extern const char* Director;
extern const char* Director2;
extern const char* Act1Question;
extern const char* Act1assertivenes;
extern const char* Act1diplomacy;
extern const char* Director2;
extern const char* Act2Question;
extern const char* Act2Case2;
extern const char* Act2Case3;
extern const char* Director3;
extern const char* Security;
extern const char* Act3Question;
extern const char* Act3assertivenes;
extern const char* Act3diplomacy;
extern const char* Japanese;
extern const char* Act4Question;
extern const char* Act4Case1;
extern const char* Act4Case2;
extern const char* Act4Case3;
extern const char* Accountant;
extern const char* Table;
extern const char* Window;
extern const char* Chair;
extern const char* Exit;

// Концовки
extern const char* GoodEndingAssertiveness1;
extern const char* GoodEndingDiplomacy1;
extern const char* GoodEndingAssertiveness2;
extern const char* GoodEndingDiplomacy2;
extern const char* GoodEndingAssertiveness3;
extern const char* GoodEndingDiplomacy3;

extern const char* AverageEndingAssertiveness;
extern const char* AverageEndingDiplomacy;

extern const char* BadEndingAssertiveness;
extern const char* BadEndingDiplomacy;

extern const char* End;


// Функции
void PauseText();
void PrintText(const char* str);
void Stats();

