#include "student.h"

void student::SetCourse(int buf){course = buf;}

void student::SetDirOfPrep(char buf[])
{
	for (int i = 0; i < FIO_fields_size / 2; i++)
		DirOfPrep[i] = buf[i];
}

void student::SetGroup(char buf[])
{
	for (int i = 0; i < FIO_fields_size / 3; i++)
		Group[i] = buf[i];
}

void student::SetFaculty(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		Faculty[i] = buf[i];
}

void student::PrintStudent()
{
	human.PrintHuman();
	printf("course: %d\n", course);
	printf("Direction Of Preparation: %s\n", DirOfPrep);
	printf("group: %s\n", Group);
	printf("faculty: %s\n", Faculty);
}
