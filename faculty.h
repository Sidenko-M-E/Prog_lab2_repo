struct Faculty 
{
	char FacultyName[30];//�������� ����������
	int QuantityOfStudents;	 //���-�� �������� �� ����������
	int QuantityOfBachelors; //���-�� ����������� �� ������������
	int QuantityOfMasters;	 //���-�� ����������� � ������������

	int QuantityOfTeachers;	  //���-�� ��������������
	int QuantityOfCandidates; //���-�� ���������� ����
	int QuantityOfDoctors;    //���-�� �������� ����
	
	int QuantityOfDisciplines;//���-�� ������������� ���������

	//������ ���������...
	void SetFacultyName(char buf[]);   //�������� ����������

	void SetQuantityOfStudents(int buf);  //���-�� �������� �� ����������
	void SetQuantityOfBachelors(int buf); //���-�� ����������� �� ������������
	void SetQuantityOfMasters(int buf);	  //���-�� ����������� � ������������

	void SetQuantityOfTeachers(int buf);   //���-�� ��������������
	void SetQuantityOfCandidates(int buf); //���-�� ���������� ����
	void SetQuantityOfDoctors(int buf);	   //���-�� �������� ����

	void SetQuantityOfDisciplines(int buf); //���-�� ������������� ���������

	//����� ��������� ���������� � ���������
	void SetStudentsInfo(int all_quan, int bach_quan, int mast_quan);

	//����� ��������� ���������� � ��������������
	void SetTeachersInfo(int all_quan, int cand_quan, int doct_quan);

	//����� ���������� ���������
	void PrintFaculty();
};
