#include "human.h"

void human::SetId(int buf) { id = buf; }
void human::SetAge(int buf) { age = buf; }
void human::SetWeight(float buf) { weight = buf; }
void human::SetHeight(float buf) { height = buf; }
void human::SetGender(char buf) { gender = buf; }
void human::PrintHuman() 
{
	printf("id: %d\n", id);
	printf("age: %d\n", age);
	printf("weight: %0.1f\n", weight);
	printf("height: %0.1f\n", height);
	printf("gender: %c\n", gender);
	FIO.PrintFio();
}
