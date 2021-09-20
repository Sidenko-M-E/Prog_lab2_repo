#include "human.h"

void human::SetId(int buf){id = buf}
void human::SetAge(int buf){age = buf}
void human::SetWeight(float buf){weight = buf}
void human::SetHeight(float buf){height = buf}
void human::SetGender(char buf){gender = buf}

int human::GetId(void){return id;}
int human::GetAge(void){return age;}
float human::GetWeight(void){return weight;}
float human::GetHeight(void){return height;}
char human::GetGender(void){return gender;}
