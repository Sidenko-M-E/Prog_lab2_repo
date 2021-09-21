#include "human.cpp"

int main()
{
	//FIO struct
	FIO MyName;
	char Familia[] = "Sidenko";
	char Imya[] = "Matvey";
	char Otchestvo[] = "Evgen'evich";

	MyName.SetSurName(Familia);
	MyName.SetName(Imya);
	MyName.SetPatronymic(Otchestvo);
	MyName.PrintFio();

	//human struct
	human Me;
	Me.SetId(1234);
	Me.SetAge(19);
	Me.SetWeight(70.6);
	Me.SetHeight(182);
	Me.SetGender('M');
	Me.FIO = MyName;

	Me.PrintHuman();
}