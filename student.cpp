#include "student.h"

//Метод установки учебной программы
void student::SetEduProg(char buf[])
{
	for (int i = 0; i < (FIO_fields_size / 3 * 2); i++)
		EduProg[i] = buf[i];
}

//Метод установки группы
void student::SetGroup(char buf[])
{
	for (int i = 0; i < FIO_fields_size / 3; i++)
		Group[i] = buf[i];
}

//Метод установки факультета
void student::SetFacultyName(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		FacultyName[i] = buf[i];
}

//Функция инициализации структуры
student CreateStudent(human buf_human, int buf_course, char buf_EduProg[], char buf_Group[], char buf_FacultyName[])
{
	student new_student;
	new_student.course = buf_course;
	new_student.SetEduProg(buf_EduProg);
	new_student.SetGroup(buf_Group);
	new_student.SetFacultyName(buf_FacultyName);
	new_student.thehuman = buf_human;
	return new_student;
}

//Функция вывода структуры в консоль
void PrintStudent(student buf_student)
{
	PrintHuman(buf_student.thehuman);
	printf("course: %d\n", buf_student.course);
	printf("direction of preparation: %s\n", buf_student.EduProg);
	printf("group: %s\n", buf_student.Group);
	printf("faculty name: %s\n", buf_student.FacultyName);
}

//Функция ввода полей структуры из консоли
student ConsoleInputStudent()
{
	student new_student;
	new_student.thehuman = ConsoleInputHuman();

	printf("Enter course:\n");
	scanf("%d", &(new_student.course));
	printf("Enter education programm:\n");
	scanf("%s", &(new_student.EduProg));
	printf("Enter group:\n");
	scanf("%s", &(new_student.Group));
	printf("Enter faculty name:\n");
	scanf("%s", &(new_student.FacultyName));
}
