#include "human.cpp"

struct student {
	human human; //������������ "human"
	int course;  //���� ��������
	char EduProg[FIO_fields_size / 3 * 2];//������� ���������
	char Group[FIO_fields_size / 3];	  //�������� ������
	char FacultyName[FIO_fields_size];	  //�������� ����������

	//������ ���������...
	void SetCourse(int buf);	   //�����
	void SetEduProg(char buf[]); //����������� ���������
	void SetGroup(char buf[]);	   //������
	void SetFacultyName(char buf[]);   //����������

	//����� ���������� ���������
	void PrintStudent();
};