struct Faculty 
{
	char FacultyName[30];//�������� ����������
	int QuantityOfStudents;	  //���-�� �������� �� ����������
	int QuantityOfTeachers;	  //���-�� ��������������
	int QuantityOfDisciplines;//���-�� ������������� ���������

	//������ ���������...
	void SetFacultyName(char buf[]);   //�������� ����������
	void SetQuantityOfStudents(int buf);	//���-�� �������� �� ����������
	void SetQuantityOfTeachers(int buf);	//���-�� ��������������
	void SetQuantityOfDisciplines(int buf); //���-�� ������������� ���������

	//����� ���������� ���������
	void PrintFaculty();
};
