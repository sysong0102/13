#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//���� ���� 
struct student
{
	int ID;
	char name[100]; //100���� ������ 
	float grade;
};

int main(int argc, char *argv[]) 
{
	//instance ����
	 
	struct student s1 = {123, "JUYEOP", 4.3}; //������ �� ����� 
	
	s1.ID = 123456;
	s1.name[0] = 'c';
	s1.grade = 0.7;
	
	printf("ID : %i\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);
	
	
	strcpy(s1.name, "Bongjun");
	printf("name2 : %s\n",s1.name);
	
	
	return 0;
}
