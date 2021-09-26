#include "human.h"

//������ �� ��������������� ������� ���������
#ifndef HUMAN_CPP
#define HUMAN_CPP

//������� ������ ��������� � �������
void PrintHuman(human buf_human) 
{
	printf("id: %d\n", buf_human.id);
	printf("age: %d\n", buf_human.age);
	printf("weight: %0.1f\n", buf_human.weight);
	printf("height: %0.1f\n", buf_human.height);
	printf("gender: %c\n", buf_human.gender);
	PrintFio(buf_human.human_FIO);
}

//������� ������������� ���������
human CreateHuman(int buf_id, int buf_age, float buf_weight, float buf_height, char buf_gender, FIO buf_FIO)
{
	human new_human;
	new_human.id = buf_id;
	new_human.age = buf_age;
	new_human.weight = buf_weight;
	new_human.height = buf_height;
	new_human.gender = buf_gender;
	new_human.human_FIO = buf_FIO;
	return new_human;
}

//������� ����� ����� ��������� �� �������
void ConsoleInputHuman(human *buf_human) 
{
	printf("Enter id:\n");
	scanf("%d", &(*buf_human).id);
	printf("Enter age:\n");
	scanf("%d", &(*buf_human).age);
	printf("Enter weight:\n");
	scanf("%f", &(*buf_human).weight);
	printf("Enter height:\n");
	scanf("%f", &(*buf_human).height);
	printf("Enter gender:\n");
	scanf("%s", &(*buf_human).gender);

	ConsoleInputFIO(&(buf_human->human_FIO));
}

#endif HUMAN_CPP
