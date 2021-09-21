//Защита от переопредления структуры
#ifndef FIO_H
#define FIO_H

#define FIO_fields_size 30

struct FIO {
	char SurName[FIO_fields_size]; //Фамилия
	char Name[FIO_fields_size]; //Имя
	char Patronymic[FIO_fields_size]; //Отчество

	//Методы установки...
	void SetSurName(char buf[]);//фамилии
	void SetName(char buf[]);	//имени
	void SetPatronymic(char buf[]);//отчества

	//Метод распечатки структуры
	void PrintFio();
};

#endif FIO_H
