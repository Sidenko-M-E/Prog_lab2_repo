struct FIO {
	char SurName[30];
	char Name[30];
	char Patronymic[30];

	void SetSurName(*(char[30]) buf);
	void SetName(*(char[30]) buf);
	void SetPatronymic(*(char[30]) buf);

	*(char[30]) GetSurName();

};