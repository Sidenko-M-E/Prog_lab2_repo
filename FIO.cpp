#include "FIO.h"
#include "stdio.h"

//Защита от переопределения методов структуры
#ifndef FIO_CPP
#define FIO_CPP

//Метод установки фамилии
void FIO::SetSurName(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		SurName[i] = buf[i];
}

//Метод установки имени
void FIO::SetName(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		Name[i] = buf[i];
}

//Метод установки отчества
void FIO::SetPatronymic(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		Patronymic[i] = buf[i];
}

//Функция инициализации структуры
FIO CreateFIO(char buf_surname[], char buf_name[], char buf_patronymic[])
{
	FIO new_FIO;
	new_FIO.SetSurName(buf_surname);
	new_FIO.SetName(buf_name);
	new_FIO.SetPatronymic(buf_patronymic);
	return (new_FIO);
}

//Функция вывода структуры в консоль
void PrintFio(FIO buf_FIO)
{
	printf("FIO: %s %s %s\n", buf_FIO.SurName, buf_FIO.Name, buf_FIO.Patronymic);
}

//Функция ввода полей структуры из консоли
void ConsoleInputFIO(FIO *buf_FIO)
{
	printf("Enter surname:\n");
	scanf("%s", (*buf_FIO).SurName);
	printf("Enter name:\n");
	scanf("%s", (*buf_FIO).Name);
	printf("Enter partonymic:\n");
	scanf("%s", (*buf_FIO).Patronymic);
}

#endif FIO_CPP