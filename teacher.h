#include "human.cpp"

struct teacher {
	human human; //������������ "human"
	int WorkExp;  //������� ����
	char Degree[FIO_fields_size];	//������ �������
	char Faculty[FIO_fields_size];	//�������� ����������

	//������ ���������...
	void SetWorkExp(int buf);	//�������� �����
	void SetDegree(char buf[]);	//������ �������
	void SetFaculty(char buf[]);//����������

	//����� ���������� ���������
	void PrintTeacher();
};
