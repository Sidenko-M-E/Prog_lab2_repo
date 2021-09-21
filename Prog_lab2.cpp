#include "FIO.cpp"

int main()
{
	FIO MyName;
	char Familia[] = "Sidenko";
	char Imya[] = "Matvey";
	char Otchestvo[] = "Evgen'evich";

	MyName.SetSurName(Familia);
	MyName.SetName(Imya);
	MyName.SetPatronymic(Otchestvo);
	MyName.PrintFio();
}