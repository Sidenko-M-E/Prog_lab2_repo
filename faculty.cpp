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
void Faculty::SetQuantityOfBachelors(int buf) { QuantityOfBachelors = buf; } //кол-ва обучающихся на бакалавриате
void Faculty::SetQuantityOfMasters(int buf) { QuantityOfMasters = buf; }//кол-ва обучающихся в магистратуре

void Faculty::SetQuantityOfTeachers(int buf) { QuantityOfTeachers = buf; }//кол-ва преподавателей
void Faculty::SetQuantityOfCandidates(int buf) { QuantityOfCandidates = buf; }//кол-ва кандидатов наук
void Faculty::SetQuantityOfDoctors(int buf) { QuantityOfDoctors = buf; }//кол-ва докторов наук

void Faculty::SetQuantityOfDisciplines(int buf) { QuantityOfDisciplines = buf; } //кол-ва преподаваемых дисциплин

//Метод установки информации о студентах
void Faculty::SetStudentsInfo(int all_quan, int bach_quan, int mast_quan)
{
	QuantityOfStudents = all_quan;
	QuantityOfBachelors = bach_quan;
	QuantityOfMasters = mast_quan;
}

//Метод установки информации о преподавателях
void Faculty::SetTeachersInfo(int all_quan, int cand_quan, int doct_quan)
{
	QuantityOfTeachers = all_quan;
	QuantityOfCandidates = cand_quan;
	QuantityOfDoctors = doct_quan;
}

//Метод распечатки структуры
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