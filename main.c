#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
	int ID; //학번 
	char name[100]; //이름 
	float score; //학점 
	
};

int main(int argc, char *argv[]) {
	struct student a = {123, "임빈", 4.3};
	
	a.ID = 123456;
	a.name[0] = 'b';
	a.score = 0.7;
	
	printf("ID : %i\n", a.ID);
	
	printf("name : %s\n", a.name);
	printf("grade : %f\n", a.score);
	
	strcpy (a.name, "s");
	printf("name2 : %s\n", a.name);
	return 0;
}
