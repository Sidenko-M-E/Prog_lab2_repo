#include "human.cpp"

struct teacher {
	human thehuman; //������������ "human"
	int WorkExp;  //������� ����
	char Degree[40];	//������ �������
	char FacultyName[30];	//�������� ����������

	//������ ���������...
	void SetDegree(char buf[]);	//������ �������
	void SetFacultyName(char buf[]);//����������
};

//������� ������������� ���������
teacher CreateTeacher(human buf_human, int buf_WorkExp, char buf_Degree[], char buf_FacultyName[]);

//������� ������ ��������� � �������
void PrintStudent(student buf_teacher);

//������� ����� ����� ��������� �� �������
void ConsoleInputTeacher(teacher* buf_teacher);
