//Защита от переопредления структуры
#ifndef FIO_H
#define FIO_H

#define _CRT_SECURE_NO_WARNINGS
#define FIO_fields_size 30

struct FIO {
	char SurName[FIO_fields_size]; //Фамилия
	char Name[FIO_fields_size]; //Имя
	char Patronymic[FIO_fields_size]; //Отчество

	//Методы установки...
	void SetSurName(char buf[]);//фамилии
	void SetName(char buf[]);	//имени
	void SetPatronymic(char buf[]);//отчества
};

//Функция инициализации структуры
FIO CreateDate(char buf_surname[], char buf_name[], char buf_patronymic[]);

//Функция вывода структуры в консоль
void PrintFio(FIO buf_FIO);

//Функция ввода полей структуры из консоли
void ConsoleInputFIO(FIO buf_FIO);

#endif FIO_H
