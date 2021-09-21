struct Faculty 
{
	char FacultyName[30];//название факультета
	int QuantityOfStudents;	  //кол-во студетов на факультете
	int QuantityOfTeachers;	  //кол-во преподавателей
	int QuantityOfDisciplines;//кол-во преподаваемых дисциплин

	//Методы установки...
	void SetFacultyName(char buf[]);   //названия факультета
	void SetQuantityOfStudents(int buf);	//кол-ва студетов на факультете
	void SetQuantityOfTeachers(int buf);	//кол-ва преподавателей
	void SetQuantityOfDisciplines(int buf); //кол-ва преподаваемых дисциплин

	//Метод распечатки структуры
	void PrintFaculty();
};
