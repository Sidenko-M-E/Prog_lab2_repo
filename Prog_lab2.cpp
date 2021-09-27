#include <stdio.h>
#include "student.h"
#include "teacher.h"
#include "faculty.h"


int main()
{
	///FIO struct
	printf("--------FIO struct--------\n");
	char Familia[] = "Sidenko";
	char Imya[] = "Matvey";
	char Otchestvo[] = "Evgen'evich";

	//Создание новой структуры из готовых данных
	printf("---initialization function---\n");
	FIO my_FIO = CreateFIO(Familia, Imya, Otchestvo);
	PrintFio(my_FIO);

	//Ввод полей существующей структуры из консоли
	printf("\n---console enter function---\n");
	my_FIO = ConsoleInputFIO();
	PrintFio(my_FIO);

	//Ввод полей структуры с помощью методов
	printf("\n--------method enter--------\n");
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
	printf("\n---console enter function---\n");
	me = ConsoleInputHuman();
	printf("\n");
	PrintHuman(me);
	


	///student struct
	printf("\n--------student struct--------\n");
	char EduProg[] = "Bachelor";
	char Group[] = "PI-03";
	char FacultyName[] = "FoIT";
	
	//Создание новой структуры из готовых данных
	printf("---initialization function---\n");
	student my_student = CreateStudent(me, 3, EduProg, Group, FacultyName);
	PrintStudent(my_student);

	//Ввод полей существующей структуры из консоли
	printf("\n---console enter function---\n");
	my_student = ConsoleInputStudent();
	printf("\n");
	PrintStudent(my_student);

	//Ввод полей структуры с помощью методов
	printf("\n--------method enter--------\n");
	my_student.SetEduProg(EduProg);
	my_student.SetGroup(Group);
	my_student.SetFacultyName(FacultyName);
	PrintStudent(my_student);



	///teacher struct
	printf("\n--------teacher struct--------\n");
	char Degree[] = "Candidate of Mathematical Sciences";

	//Создание новой структуры из готовых данных
	printf("---initialization function---\n");
	teacher my_teacher = CreateTeacher(me, 40, Degree, FacultyName);
	PrintTeacher(my_teacher);

	//Ввод полей существующей структуры из консоли
	printf("\n---console enter function---\n");
	my_teacher = ConsoleInputTeacher();
	printf("\n");
	PrintTeacher(my_teacher);

	//Ввод полей структуры с помощью методов
	printf("\n--------method enter--------\n");
	my_teacher.SetDegree(Degree);
	my_teacher.SetFacultyName(FacultyName);
	PrintTeacher(my_teacher);



	///faculty struct
	printf("\n------faculty struct----------\n");
	
	//Создание новой структуры из готовых данных
	printf("---initialization function---\n");
	faculty my_faculty = CreateFaculty(FacultyName, 180, 145, 35, 40, 20, 5, 70);
	PrintFaculty(my_faculty);

	//Ввод полей существующей структуры из консоли
	printf("\n---console enter function---\n");
	my_faculty = ConsoleInputFaculty();
	printf("\n");
	PrintFaculty(my_faculty);

	//Ввод полей структуры с помощью методов
	printf("\n--------method enter--------\n");
	my_faculty.SetStudentsInfo(300, 270, 30);
	my_faculty.SetTeachersInfo(40, 33, 7);
	PrintFaculty(my_faculty);

	//Методы обработки содержимого структуры
	printf("\n----processing by methods----\n");
	printf("Procent of masters on faculty: %0.2lf\n", my_faculty.ProcentOfMasters());
	printf("Procent of doctors on faculty: %0.2lf\n", my_faculty.ProcentOfDoctors());
	printf("Students to teachers quantity: %0.2lf\n", my_faculty.ProcOfStudToTeach());
}
