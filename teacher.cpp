#include "teacher.h"

void teacher::SetWorkExp(int buf) { WorkExp = buf; }

void teacher::SetDegree(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		Degree[i] = buf[i];
}

void teacher::SetFaculty(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		Faculty[i] = buf[i];
}

void teacher::PrintTeacher()
{
	human.PrintHuman();
	printf("working experience: %d years\n", WorkExp);
	printf("scientific degree: %s\n", Degree);
	printf("faculty: %s\n", Faculty);
}
