#include "faculty.h"
#include "stdio.h"

//����� ��������� �������� ����������
void Faculty::SetFacultyName(char buf[]) 
{
	for (int i = 0; i < 30; i++)
		FacultyName[i] = buf[i];
}

//������ ���������...
void Faculty::SetQuantityOfStudents(int buf) { QuantityOfStudents = buf; }	//���-�� �������� �� ����������
void Faculty::SetQuantityOfTeachers(int buf) { QuantityOfTeachers = buf; }	//���-�� ��������������
void Faculty::SetQuantityOfDisciplines(int buf) { QuantityOfDisciplines = buf; } //���-�� ������������� ���������

//����� ���������� ���������
void Faculty::PrintFaculty()
{
	printf("faculty name: %s\n", FacultyName);
	printf("quantity of students: %d\n", QuantityOfStudents);
	printf("quantity of teachers: %d\n", QuantityOfTeachers);
	printf("quantity of disciplines: %d\n", QuantityOfDisciplines);
}