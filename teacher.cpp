#include "teacher.h"

//����� ��������� �������� �����
void teacher::SetWorkExp(int buf) { WorkExp = buf; }

//����� ��������� ������ �������
void teacher::SetDegree(char buf[])
{
	for (int i = 0; i < 40; i++)
		Degree[i] = buf[i];
}

//����� ��������� ����������
void teacher::SetFacultyName(char buf[])
{
	for (int i = 0; i < 30; i++)
		FacultyName[i] = buf[i];
}

//����� ���������� ���������
void teacher::PrintTeacher()
{
	human.PrintHuman();
	printf("working experience: %d years\n", WorkExp);
	printf("scientific degree: %s\n", Degree);
	printf("faculty name: %s\n", FacultyName);
}
