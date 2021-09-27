struct faculty 
{
	char FacultyName[30];//название факультета
	int QuantityOfStudents;	 //кол-во студетов на факультете
	int QuantityOfBachelors; //кол-во обучающихся на бакалавриате
	int QuantityOfMasters;	 //кол-во обучающихся в магистратуре

	int QuantityOfTeachers;	  //кол-во преподавателей
	int QuantityOfCandidates; //кол-во кандидатов наук
	int QuantityOfDoctors;    //кол-во докторов наук
	
	int QuantityOfDisciplines;//кол-во преподаваемых дисциплин

	//Метод установки названия факультета
	void SetFacultyName(char buf[]);

	//Метод установки информации о студентах
	void SetStudentsInfo(int all_quan, int bach_quan, int mast_quan);

	//Метод установки информации о преподавателях
	void SetTeachersInfo(int all_quan, int cand_quan, int doct_quan);

	//Метод подсчёта процентного кол-ва магистров среди учащихся
	double ProcentOfMasters();

	//Метод подсчёта процентного кол-ва докторов наук среди преподавателей
	double ProcentOfDoctors();

	//Метод подсчёта кол-ва студентов, приходящихся на одного преподавателя
	double ProcOfStudToTeach();
};

//Функция инициализации структуры
faculty CreateFaculty(char buf_FacultyName[], int stud_quan, int bach_quan, int mast_quan, int teac_quan, int cand_quan, int doct_quan, int disc_quan);

//Функция вывода структуры в консоль
void PrintFaculty(faculty buf_faculty);

//Функция ввода полей структуры из консоли
faculty ConsoleInputFaculty();
