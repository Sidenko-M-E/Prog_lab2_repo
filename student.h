#include "human.cpp"

struct student {
	human thehuman; //������������ "human"
	int course;  //���� ��������
	char EduProg[FIO_fields_size / 3 * 2];//������� ���������
	char Group[FIO_fields_size / 3];	  //�������� ������
	char FacultyName[FIO_fields_size];	  //�������� ����������

	//������ ���������...
	void SetEduProg(char buf[]); //����������� ���������
	void SetGroup(char buf[]);	   //������
	void SetFacultyName(char buf[]);   //����������
};

//������� ������������� ���������
student CreateStudent(human buf_human, int buf_course, char buf_EduProg[], char buf_Group[], char buf_FacultyName[]);

//������� ������ ��������� � �������
void PrintStudent(student buf_student);

//������� ����� ����� ��������� �� �������
void ConsoleInputStudent(student* buf_student);
