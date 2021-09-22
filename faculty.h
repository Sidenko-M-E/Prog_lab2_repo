struct Faculty 
{
	char FacultyName[30];//название факультета
	int QuantityOfStudents;	 //кол-во студетов на факультете
	int QuantityOfBachelors; //кол-во обучающихся на бакалавриате
	int QuantityOfMasters;	 //кол-во обучающихся в магистратуре

	int QuantityOfTeachers;	  //кол-во преподавателей
	int QuantityOfCandidates; //кол-во кандидатов наук
	int QuantityOfDoctors;    //кол-во докторов наук
	
	int QuantityOfDisciplines;//кол-во преподаваемых дисциплин

	//Методы установки...
	void SetFacultyName(char buf[]);   //названия факультета

	void SetQuantityOfStudents(int buf);  //кол-ва студетов на факультете
	void SetQuantityOfBachelors(int buf); //кол-ва обучающихся на бакалавриате
	void SetQuantityOfMasters(int buf);	  //кол-ва обучающихся в магистратуре

	void SetQuantityOfTeachers(int buf);   //кол-ва преподавателей
	void SetQuantityOfCandidates(int buf); //кол-ва кандидатов наук
	void SetQuantityOfDoctors(int buf);	   //кол-ва докторов наук

	void SetQuantityOfDisciplines(int buf); //кол-ва преподаваемых дисциплин

	//Метод установки информации о студентах
	void SetStudentsInfo(int all_quan, int bach_quan, int mast_quan);

	//Метод установки информации о преподавателях
	void SetTeachersInfo(int all_quan, int cand_quan, int doct_quan);

	//Метод распечатки структуры
	void PrintFaculty();
};
