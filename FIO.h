//������ �� �������������� ���������
#ifndef FIO_H
#define FIO_H

#define _CRT_SECURE_NO_WARNINGS
#define FIO_fields_size 30

struct FIO {
	char SurName[FIO_fields_size]; //�������
	char Name[FIO_fields_size]; //���
	char Patronymic[FIO_fields_size]; //��������

	//������ ���������...
	void SetSurName(char buf[]);//�������
	void SetName(char buf[]);	//�����
	void SetPatronymic(char buf[]);//��������
};

//������� ������������� ���������
FIO CreateDate(char buf_surname[], char buf_name[], char buf_patronymic[]);

//������� ������ ��������� � �������
void PrintFio(FIO buf_FIO);

//������� ����� ����� ��������� �� �������
void ConsoleInputFIO(FIO buf_FIO);

#endif FIO_H
