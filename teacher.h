#include "human.cpp"

struct teacher {
	human human; //подструктура "human"
	int WorkExp;  //рабочий стаж
	char Degree[40];	//ученая степень
	char FacultyName[30];	//название факультета

	//Методы установки...
	void SetWorkExp(int buf);	//рабочего стажа
	void SetDegree(char buf[]);	//ученой степени
	void SetFacultyName(char buf[]);//факультета

	//Метод распечатки структуры
	void PrintTeacher();
};
