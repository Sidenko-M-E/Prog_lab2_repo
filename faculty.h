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

	//����� ��������� ���-�� ���������, ��������������, � ��������� �� ����������
	void SetAllQuantities(int buf_stu, int buf_tea, int buf_dis);

	//����� ���������� ���������
	void PrintFaculty();
};
