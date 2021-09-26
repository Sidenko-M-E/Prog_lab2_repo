#include "human.h"

//������ �� ��������������� ������� ���������
#ifndef HUMAN_CPP
#define HUMAN_CPP

//������ ���������... 
void human::SetId(int buf) { id = buf; }	//id
void human::SetAge(int buf) { age = buf; }	//��������
void human::SetWeight(float buf) { weight = buf; }	//����
void human::SetHeight(float buf) { height = buf; }	//�����
void human::SetGender(char buf) { gender = buf; }	//����

//����� ��������� id, ��������, ����, �����
void human::SetAllNumeric(int buf_id, int buf_age, float buf_weight, float buf_height)
{
	id = buf_id;
	age = buf_age;
	weight = buf_weight;
	height = buf_height;
}

//����� ���������� ���������
void human::PrintHuman()
{
	printf("id: %d\n", id);
	printf("age: %d\n", age);
	printf("weight: %0.1f\n", weight);
	printf("height: %0.1f\n", height);
	printf("gender: %c\n", gender);
	FIO.PrintFio();
}

#endif HUMAN_CPP
