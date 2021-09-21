#include "human.cpp"

struct student {
	human human; //подструктура "human"
	int course;  //курс обучения
	char DirOfPrep[FIO_fields_size / 3 * 2];	//направление подготовки
	char Group[FIO_fields_size / 3];		//название группы
	char Faculty[FIO_fields_size];	//название факультета

	void SetCourse(int buf);
	void SetDirOfPrep(char buf[]);
	void SetGroup(char buf[]);
	void SetFaculty(char buf[]);

	void PrintStudent();
};