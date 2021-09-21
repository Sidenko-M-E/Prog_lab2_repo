#include "human.cpp"

struct student {
	human human; //подструктура "human"
	int course;  //курс обучения
	char DirOfPrep[FIO_fields_size / 3 * 2];//направление подготовки
	char Group[FIO_fields_size / 3];		//название группы
	char FacultyName[FIO_fields_size];		//название факультета

	//Методы установки...
	void SetCourse(int buf);	   //курса
	void SetDirOfPrep(char buf[]); //направления подгтовки
	void SetGroup(char buf[]);	   //группы
	void SetFacultyName(char buf[]);   //факультета

	//Метод распечатки структуры
	void PrintStudent();
};