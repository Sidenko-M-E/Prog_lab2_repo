#include "human.cpp"

struct teacher {
	human human; //������������ "human"
	int WorkExp;  //������� ����
	char Degree[40];	//������ �������
	char FacultyName[30];	//�������� ����������

	//������ ���������...
	void SetWorkExp(int buf);	//�������� �����
	void SetDegree(char buf[]);	//������ �������
	void SetFacultyName(char buf[]);//����������

	//����� ���������� ���������
	void PrintTeacher();
};
