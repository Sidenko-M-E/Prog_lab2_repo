#include "FIO.cpp"

//Защита от переопределения структуры
#ifndef HUMAN_H
#define HUMAN_H

struct human {
	int id;		//id
	int age;	//возраст
	float weight; //вес
	float height; //рост
	char gender;  //пол
	FIO FIO;	  //подструктура ФИО

	//Методы установки...
	void SetId(int buf);	//id
	void SetAge(int buf);	//возраста
	void SetWeight(float buf);	//веса
	void SetHeight(float buf);	//роста
	void SetGender(char buf);	//пола

	//Метод распечатки структуры
	void PrintHuman();
};

#endif HUMAN_H

