﻿//#include "student.cpp"
//#include "teacher.cpp"
//#include "faculty.cpp"
#include "human.cpp"

int main()
{
	///FIO struct
	printf("--------FIO struct--------\n");
	char Familia[] = "Sidenko";
	char Imya[] = "Matvey";
	char Otchestvo[] = "Evgen'evich";

	//Создание новой структуры из готовых данных
	FIO my_FIO = CreateFIO(Familia, Imya, Otchestvo);
	PrintFio(my_FIO);

	//Ввод полей существующей структуры из консоли
	ConsoleInputFIO(&my_FIO);
	PrintFio(my_FIO);

	//Ввод полей структуры с помощью методов
	my_FIO.SetSurName(Familia);
	my_FIO.SetName(Imya);
	my_FIO.SetPatronymic(Otchestvo);
	PrintFio(my_FIO);

	
	///human struct
	printf("\n--------human struct--------\n");
	//Создание новой структуры из готовых данных
	printf("---initialization function---\n");
	human me = CreateHuman(1913, 19, 70, 182, 'M', my_FIO);
	PrintHuman(me);

	//Ввод полей существующей структуры из консоли
	printf("---console enter function---\n");
	ConsoleInputHuman(&me);
	printf("\n");
	PrintHuman(me);
	

	/*
	//student struct
	printf("\n--------student struct--------\n");
	student Me2;
	char EduProg[] = "Bachelor";
	char Group[] = "PI-03";
	char FacultyName[] = "FoIT";
	Me2.human = Me;
	Me2.SetCourse(3);
	Me2.SetEduProg(EduProg);
	Me2.SetGroup(Group);
	Me2.SetFacultyName(FacultyName);
	Me2.PrintStudent();

	//teacher struct
	printf("\n--------teacher struct--------\n");
	teacher Me3;
	Me3.human = Me;
	Me3.SetWorkExp(20);
	char Degree[] = "Candidate of Mathematical Sciences";
	Me3.SetDegree(Degree);
	Me3.SetFacultyName(FacultyName);
	Me3.PrintTeacher();

	//faculty struct
	printf("\n--------faculty struct------------\n");
	printf("------separate filling------\n");
	Faculty Fac;

	Fac.SetFacultyName(FacultyName);
	Fac.SetQuantityOfStudents(500);
	Fac.SetQuantityOfBachelors(450);
	Fac.SetQuantityOfMasters(50);

	Fac.SetQuantityOfTeachers(50);
	Fac.SetQuantityOfCandidates(40);
	Fac.SetQuantityOfDoctors(5);

	Fac.SetQuantityOfDisciplines(40);

	Fac.PrintFaculty();

	printf("--------joint filling-------\n");
	Fac.SetStudentsInfo(600, 550, 50);
	Fac.SetTeachersInfo(60, 45, 7);
	Fac.PrintFaculty();*/
}

