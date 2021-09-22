#include "human.cpp"

struct student {
	human human; //подструктура "human"
	int course;  //курс обучения
	char EduProg[FIO_fields_size / 3 * 2];//учебная программа
	char Group[FIO_fields_size / 3];	  //название группы
	char FacultyName[FIO_fields_size];	  //название факультета

	//Методы установки...
	void SetCourse(int buf);	   //курса
	void SetEduProg(char buf[]); //направления подгтовки
	void SetGroup(char buf[]);	   //группы
	void SetFacultyName(char buf[]);   //факультета

	//Метод распечатки структуры
	void PrintStudent();
};