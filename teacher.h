#include "human.cpp"

struct teacher {
	human human; //подструктура "human"
	int WorkExp;  //рабочий стаж
	char Degree[FIO_fields_size];	//ученая степень
	char Faculty[FIO_fields_size];	//название факультета

	void SetWorkExp(int buf);
	void SetDegree(char buf[]);
	void SetFaculty(char buf[]);

	void PrintTeacher();
};
