#include "human.cpp"

struct teacher {
	human human; //������������ "human"
	int WorkExp;  //������� ����
	char Degree[FIO_fields_size];	//������ �������
	char FacultyName[FIO_fields_size];	//�������� ����������

	//������ ���������...
	void SetWorkExp(int buf);	//�������� �����
	void SetDegree(char buf[]);	//������ �������
	void SetFacultyName(char buf[]);//����������

	//����� ���������� ���������
	void PrintTeacher();
};
