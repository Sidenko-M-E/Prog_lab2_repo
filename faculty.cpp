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
void Faculty::SetQuantityOfBachelors(int buf) { QuantityOfBachelors = buf; } //���-�� ����������� �� ������������
void Faculty::SetQuantityOfMasters(int buf) { QuantityOfMasters = buf; }//���-�� ����������� � ������������

void Faculty::SetQuantityOfTeachers(int buf) { QuantityOfTeachers = buf; }//���-�� ��������������
void Faculty::SetQuantityOfCandidates(int buf) { QuantityOfCandidates = buf; }//���-�� ���������� ����
void Faculty::SetQuantityOfDoctors(int buf) { QuantityOfDoctors = buf; }//���-�� �������� ����

void Faculty::SetQuantityOfDisciplines(int buf) { QuantityOfDisciplines = buf; } //���-�� ������������� ���������

//����� ��������� ���������� � ���������
void Faculty::SetStudentsInfo(int all_quan, int bach_quan, int mast_quan)
{
	QuantityOfStudents = all_quan;
	QuantityOfBachelors = bach_quan;
	QuantityOfMasters = mast_quan;
}

//����� ��������� ���������� � ��������������
void Faculty::SetTeachersInfo(int all_quan, int cand_quan, int doct_quan)
{
	QuantityOfTeachers = all_quan;
	QuantityOfCandidates = cand_quan;
	QuantityOfDoctors = doct_quan;
}

//����� ���������� ���������
void Faculty::PrintFaculty()
{
	printf("faculty name: %s\n", FacultyName);
	printf("quantity of students: %d\n", QuantityOfStudents);
	printf("quantity of bachelors: %d\n", QuantityOfBachelors);
	printf("quantity of masters: %d\n\n", QuantityOfMasters);

	printf("quantity of teachers: %d\n", QuantityOfTeachers);
	printf("quantity of candidates: %d\n", QuantityOfCandidates);
	printf("quantity of doctors: %d\n\n", QuantityOfDoctors);

	printf("quantity of disciplines: %d\n", QuantityOfDisciplines);
}