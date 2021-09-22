#include "faculty.h"
#include "stdio.h"

//Метод установки названия факультета
void Faculty::SetFacultyName(char buf[]) 
{
	for (int i = 0; i < 30; i++)
		FacultyName[i] = buf[i];
}

//Методы установки...
void Faculty::SetQuantityOfStudents(int buf) { QuantityOfStudents = buf; }	//кол-ва студетов на факультете
void Faculty::SetQuantityOfTeachers(int buf) { QuantityOfTeachers = buf; }	//кол-ва преподавателей
void Faculty::SetQuantityOfDisciplines(int buf) { QuantityOfDisciplines = buf; } //кол-ва преподаваемых дисциплин

//Метод установки кол-ва студентов, преподавателей, и дисциплин на факультете
void Faculty::SetAllQuantities(int buf_stu, int buf_tea, int buf_dis)
{
	QuantityOfStudents = buf_stu;
	QuantityOfTeachers = buf_tea;
	QuantityOfDisciplines = buf_dis;
}

//Метод распечатки структуры
void Faculty::PrintFaculty()
{
	printf("faculty name: %s\n", FacultyName);
	printf("quantity of students: %d\n", QuantityOfStudents);
	printf("quantity of teachers: %d\n", QuantityOfTeachers);
	printf("quantity of disciplines: %d\n", QuantityOfDisciplines);
}