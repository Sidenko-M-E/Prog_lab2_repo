struct human {
	int id;
	int age;
	float weight;
	float height;
	char gender;

	void SetId(int buf);
	void SetAge(int buf);
	void SetWeight(float buf);
	void SetHeight(float buf);
	void SetGender(char buf);

	int GetId(void);
	int GetAge(void);
	float GetWeight(void);
	float GetHeight(void);
	char GetGender(void);
};
