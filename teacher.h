#include "human.cpp"

struct teacher {
	human human; //подструктура "human"
	int WorkExp;  //рабочий стаж
	char Degree[FIO_fields_size];	//ученая степень
	char FacultyName[FIO_fields_size];	//название факультета

	//Методы установки...
	void SetWorkExp(int buf);	//рабочего стажа
	void SetDegree(char buf[]);	//ученой степени
	void SetFacultyName(char buf[]);//факультета

	//Метод распечатки структуры
	void PrintTeacher();
};
