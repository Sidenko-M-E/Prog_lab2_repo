#include "teacher.h"

//Метод установки рабочего стажа
void teacher::SetWorkExp(int buf) { WorkExp = buf; }

//Метод установки ученой степени
void teacher::SetDegree(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		Degree[i] = buf[i];
}

//Метод установки факультета
void teacher::SetFaculty(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		Faculty[i] = buf[i];
}

//Метод распечатки структуры
void teacher::PrintTeacher()
{
	human.PrintHuman();
	printf("working experience: %d years\n", WorkExp);
	printf("scientific degree: %s\n", Degree);
	printf("faculty: %s\n", Faculty);
}
