#include "FIO.cpp"

#ifndef HUMAN_H
#define HUMAN_H

struct human {
	int id;
	int age;
	float weight;
	float height;
	char gender;
	FIO FIO;

	void SetId(int buf);
	void SetAge(int buf);
	void SetWeight(float buf);
	void SetHeight(float buf);
	void SetGender(char buf);

	void PrintHuman();
};

#endif HUMAN_H// !HUMAN_H

