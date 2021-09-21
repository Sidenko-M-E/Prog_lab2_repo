#define FIO_fields_size 30

struct FIO {
	char SurName[FIO_fields_size];
	char Name[FIO_fields_size];
	char Patronymic[FIO_fields_size];

	void SetSurName(char buf[]);
	void SetName(char buf[]);
	void SetPatronymic(char buf[]);

	void PrintFio();
};
