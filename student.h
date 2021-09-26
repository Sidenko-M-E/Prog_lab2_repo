#include "human.cpp"

struct student {
	human thehuman; //подструктура "human"
	int course;  //курс обучения
	char EduProg[FIO_fields_size / 3 * 2];//учебная программа
	char Group[FIO_fields_size / 3];	  //название группы
	char FacultyName[FIO_fields_size];	  //название факультета

	//Методы установки...
	void SetEduProg(char buf[]); //направления подгтовки
	void SetGroup(char buf[]);	   //группы
	void SetFacultyName(char buf[]);   //факультета
};

//Функция инициализации структуры
student CreateStudent(human buf_human, int buf_course, char buf_EduProg[], char buf_Group[], char buf_FacultyName[]);

//Функция вывода структуры в консоль
void PrintStudent(student buf_student);

//Функция ввода полей структуры из консоли
void ConsoleInputStudent(student* buf_student);
