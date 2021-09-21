#include "FIO.h"
#include "stdio.h"

#ifndef FIO_CPP
#define FIO_CPP

void FIO::SetSurName(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		SurName[i] = buf[i];
}

void FIO::SetName(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		Name[i] = buf[i];
}

void FIO::SetPatronymic(char buf[])
{
	for (int i = 0; i < FIO_fields_size; i++)
		Patronymic[i] = buf[i];
}

void FIO::PrintFio()
{
	printf("FIO: %s %s %s\n", SurName, Name, Patronymic);
}

#endif // !FIO_CPP

