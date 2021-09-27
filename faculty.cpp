#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "faculty.h"

//Метод установки названия факультета
void faculty::SetFacultyName(char buf[]) 
{
	for (int i = 0; i < 30; i++)
		FacultyName[i] = buf[i];
}

//Метод установки информации о студентах
void faculty::SetStudentsInfo(int all_quan, int bach_quan, int mast_quan)
{
	QuantityOfStudents = all_quan;
	QuantityOfBachelors = bach_quan;
	QuantityOfMasters = mast_quan;
}

//Метод установки информации о преподавателях
void faculty::SetTeachersInfo(int all_quan, int cand_quan, int doct_quan)
{
	QuantityOfTeachers = all_quan;
	QuantityOfCandidates = cand_quan;
	QuantityOfDoctors = doct_quan;
}

//Метод подсчёта процентного кол-ва магистров среди учащихся
double faculty::ProcentOfMasters() 
{
	return(((double)QuantityOfMasters) / ((double)QuantityOfStudents) * 100);
}

//Метод подсчёта процентного кол-ва докторов наук среди преподавателей
double faculty::ProcentOfDoctors()
{
	return(((double)QuantityOfDoctors) / ((double)QuantityOfTeachers) * 100);
}

//Метод подсчёта кол-ва студентов, приходящихся на одного преподавателя
double faculty::ProcOfStudToTeach()
{
	return(((double)QuantityOfStudents) / ((double)QuantityOfTeachers));
}

//Функция инициализации структуры
faculty CreateFaculty(char buf_FacultyName[], int stud_quan, int bach_quan, int mast_quan, int teach_quan, int cand_quan, int doct_quan, int disc_quan)
{
	faculty new_faculty;
	new_faculty.SetFacultyName(buf_FacultyName);
	new_faculty.SetStudentsInfo(stud_quan, bach_quan, mast_quan);
	new_faculty.SetTeachersInfo(teach_quan, cand_quan, doct_quan);
	new_faculty.QuantityOfDisciplines = disc_quan;
	return new_faculty;
}

//Функция вывода структуры в консоль
void PrintFaculty(faculty buf_faculty)
{
	printf("faculty name: %s\n", buf_faculty.FacultyName);
	printf("quantity of students: %d\n", buf_faculty.QuantityOfStudents);
	printf("quantity of bachelors: %d\n", buf_faculty.QuantityOfBachelors);
	printf("quantity of masters: %d\n\n", buf_faculty.QuantityOfMasters);

	printf("quantity of teachers: %d\n", buf_faculty.QuantityOfTeachers);
	printf("quantity of candidates: %d\n", buf_faculty.QuantityOfCandidates);
	printf("quantity of doctors: %d\n\n", buf_faculty.QuantityOfDoctors);

	printf("quantity of disciplines: %d\n", buf_faculty.QuantityOfDisciplines);
}

//Функция ввода полей структуры из консоли
faculty ConsoleInputFaculty()
{
	faculty new_faculty;

	printf("Enter faculty name:\n");
	scanf("%s", &(new_faculty.FacultyName));
	printf("Enter quantity of students:\n");
	scanf("%d", &(new_faculty.QuantityOfStudents));
	printf("Enter quantity of bachelors:\n");
	scanf("%d", &(new_faculty.QuantityOfBachelors));
	printf("Enter quantity of masters:\n");
	scanf("%d", &(new_faculty.QuantityOfMasters));

	printf("Enter quantity of teachers:\n");
	scanf("%d", &(new_faculty.QuantityOfTeachers));
	printf("Enter quantity of candidates\n");
	scanf("%d", &(new_faculty.QuantityOfCandidates));
	printf("Enter quantity of doctors:\n");
	scanf("%d", &(new_faculty.QuantityOfDoctors));

	printf("Enter quantity of disciplines:\n");
	scanf("%d", &(new_faculty.QuantityOfDisciplines));

	return(new_faculty);
}
