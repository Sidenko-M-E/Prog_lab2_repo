#include "student.h"

//����� ��������� �����
void student::SetCourse(int buf){course = buf;}

//����� ��������� ������� ���������
void student::SetEduProg(char buf[])
{
	for (int i = 0; i < (FIO_fields_size / 3 * 2); i++)
		EduProg[i] = buf[i];
}

//����� ��������� ������
void student::SetGroup(char buf[])
{
	for (int i = 0; i < FIO_fields_size / 3; i++)
		Group[i] = buf[i];
}

//����� ��������� ����������
void student::SetFacultyName(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		FacultyName[i] = buf[i];
}

//����� ���������� ���������
void student::PrintStudent()
{
	human.PrintHuman();
	printf("course: %d\n", course);
	printf("direction of preparation: %s\n", EduProg);
	printf("group: %s\n", Group);
	printf("faculty name: %s\n", FacultyName);
}