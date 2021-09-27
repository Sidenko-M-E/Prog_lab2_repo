#include "human.h"

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
void PrintTeacher(teacher buf_teacher);

//������� ����� ����� ��������� �� �������
teacher ConsoleInputTeacher()
{
	teacher new_teacher;
	new_teacher.thehuman = ConsoleInputHuman();

	printf("Enter working experience:\n");
	scanf("%d", &(new_teacher.WorkExp));
	printf("Enter scientific degree:\n");
	scanf("%s", &(new_teacher.Degree));
	printf("Enter faculty name:\n");
	scanf("%s", &(new_teacher.FacultyName));

	return(new_teacher);
}
