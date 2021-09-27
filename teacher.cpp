#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "teacher.h"

//Метод установки ученой степени
void teacher::SetDegree(char buf[])
{
	for (int i = 0; i < 40; i++)
		Degree[i] = buf[i];
}

//Метод установки факультета
void teacher::SetFacultyName(char buf[])
{
	for (int i = 0; i < 30; i++)
		FacultyName[i] = buf[i];
}

//Функция инициализации структуры
teacher CreateTeacher(human buf_human, int buf_WorkExp, char buf_Degree[], char buf_FacultyName[])
{
	teacher new_teacher;
	new_teacher.WorkExp = buf_WorkExp;
	new_teacher.SetDegree(buf_Degree);
	new_teacher.SetFacultyName(buf_FacultyName);
	new_teacher.thehuman = buf_human;
	return new_teacher;
}

//Функция вывода структуры в консоль
void PrintTeacher(teacher buf_teacher)
{
	PrintHuman(buf_teacher.thehuman);
	printf("working experience: %d years\n", buf_teacher.WorkExp);
	printf("scientific degree: %s\n", buf_teacher.Degree);
	printf("faculty name: %s\n", buf_teacher.FacultyName);
}

//Функция ввода полей структуры из консоли
teacher ConsoleInputTeacher()
{
	teacher new_teacher;
	new_teacher.thehuman = ConsoleInputHuman();

	printf("Enter working experience:\n");
	scanf("%d", &(new_teacher.WorkExp));
	printf("Enter scientific degree:\n");
	scanf("%s", &(new_teacher.Degree));
	printf("Enter faculty name:\n");
	scanf("%s", &(new_teacher.FacultyName));

	return(new_teacher);
}
