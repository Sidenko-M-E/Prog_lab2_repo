struct faculty 
{
	char FacultyName[30];//�������� ����������
	int QuantityOfStudents;	 //���-�� �������� �� ����������
	int QuantityOfBachelors; //���-�� ����������� �� ������������
	int QuantityOfMasters;	 //���-�� ����������� � ������������

	int QuantityOfTeachers;	  //���-�� ��������������
	int QuantityOfCandidates; //���-�� ���������� ����
	int QuantityOfDoctors;    //���-�� �������� ����
	
	int QuantityOfDisciplines;//���-�� ������������� ���������

	//����� ��������� �������� ����������
	void SetFacultyName(char buf[]);

	//����� ��������� ���������� � ���������
	void SetStudentsInfo(int all_quan, int bach_quan, int mast_quan);

	//����� ��������� ���������� � ��������������
	void SetTeachersInfo(int all_quan, int cand_quan, int doct_quan);

	//����� �������� ����������� ���-�� ��������� ����� ��������
	double ProcentOfMasters();

	//����� �������� ����������� ���-�� �������� ���� ����� ��������������
	double ProcentOfDoctors();

	//����� �������� ���-�� ���������, ������������ �� ������ �������������
	double ProcOfStudToTeach();
};

//������� ������������� ���������
faculty CreateFaculty(char buf_FacultyName[], int stud_quan, int bach_quan, int mast_quan, int teac_quan, int cand_quan, int doct_quan, int disc_quan);

//������� ������ ��������� � �������
void PrintFaculty(faculty buf_faculty);

//������� ����� ����� ��������� �� �������
faculty ConsoleInputFaculty();
