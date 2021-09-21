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

//Метод распечатки структуры
void FIO::PrintFio()
{
	printf("FIO: %s %s %s\n", SurName, Name, Patronymic);
}

#endif FIO_CPP

