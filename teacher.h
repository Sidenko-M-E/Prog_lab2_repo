#include "human.cpp"

struct teacher {
	human thehuman; //подструктура "human"
	int WorkExp;  //рабочий стаж
	char Degree[40];	//ученая степень
	char FacultyName[30];	//название факультета

	//Методы установки...
	void SetDegree(char buf[]);	//ученой степени
	void SetFacultyName(char buf[]);//факультета
};

//Функция инициализации структуры
teacher CreateTeacher(human buf_human, int buf_WorkExp, char buf_Degree[], char buf_FacultyName[]);

//Функция вывода структуры в консоль
void PrintStudent(student buf_teacher);

//Функция ввода полей структуры из консоли
void ConsoleInputTeacher(teacher* buf_teacher);
