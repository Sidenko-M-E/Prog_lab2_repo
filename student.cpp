#include "student.h"

//Метод установки курса
void student::SetCourse(int buf){course = buf;}

//Метод установки направления подготовки
void student::SetDirOfPrep(char buf[])
{
	for (int i = 0; i < (FIO_fields_size / 3 * 2); i++)
		DirOfPrep[i] = buf[i];
}

//Метод установки группы
void student::SetGroup(char buf[])
{
	for (int i = 0; i < FIO_fields_size / 3; i++)
		Group[i] = buf[i];
}

//Метод установки факультета
void student::SetFaculty(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		Faculty[i] = buf[i];
}

//Метод распечатки структуры
void student::PrintStudent()
{
	human.PrintHuman();
	printf("course: %d\n", course);
	printf("Direction Of Preparation: %s\n", DirOfPrep);
	printf("group: %s\n", Group);
	printf("faculty: %s\n", Faculty);
}
