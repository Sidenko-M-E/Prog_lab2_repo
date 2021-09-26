#include "human.h"

//«ащита от переопределени€ методов структуры
#ifndef HUMAN_CPP
#define HUMAN_CPP

//ћетоды установки... 
void human::SetId(int buf) { id = buf; }	//id
void human::SetAge(int buf) { age = buf; }	//возраста
void human::SetWeight(float buf) { weight = buf; }	//веса
void human::SetHeight(float buf) { height = buf; }	//роста
void human::SetGender(char buf) { gender = buf; }	//пола

//ћетод установки id, возраста, веса, роста
void human::SetAllNumeric(int buf_id, int buf_age, float buf_weight, float buf_height)
{
	id = buf_id;
	age = buf_age;
	weight = buf_weight;
	height = buf_height;
}

//ћетод распечатки структуры
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
