#include "student.cpp"
#include "teacher.cpp"
#include "faculty.cpp"

int main()
{
	//FIO struct
	printf("\n--------FIO struct--------\n");
	FIO MyName;
	char Familia[] = "Sidenko";
	char Imya[] = "Matvey";
	char Otchestvo[] = "Evgen'evich";

	MyName.SetSurName(Familia);
	MyName.SetName(Imya);
	MyName.SetPatronymic(Otchestvo);
	MyName.PrintFio();

	//human struct
	printf("\n--------human struct--------\n");
	human Me;
	Me.SetId(1234);
	Me.SetAge(19);
	Me.SetWeight(70.6);
	Me.SetHeight(182);
	Me.SetGender('M');
	Me.FIO = MyName;
	Me.PrintHuman();

	//student struct
	printf("\n--------student struct--------\n");
	student Me2;
	char EduProg[] = "Bachelor";
	char Group[] = "PI-03";
	char FacultyName[] = "FoIT";
	Me2.human = Me;
	Me2.SetCourse(3);
	Me2.SetEduProg(EduProg);
	Me2.SetGroup(Group);
	Me2.SetFacultyName(FacultyName);
	Me2.PrintStudent();

	//teacher struct
	printf("\n--------teacher struct--------\n");
	teacher Me3;
	Me3.human = Me;
	Me3.SetWorkExp(20);
	char Degree[] = "Candidate of Science";
	Me3.SetDegree(Degree);
	Me3.SetFacultyName(FacultyName);
	Me3.PrintTeacher();

	//faculty struct
	printf("\n--------faculty struct------------\n");
	Faculty Fac;
	Fac.SetFacultyName(FacultyName);
	Fac.SetQuantityOfStudents(300);
	Fac.SetQuantityOfTeachers(25);
	Fac.SetQuantityOfDisciplines(40);
	Fac.PrintFaculty();
}

