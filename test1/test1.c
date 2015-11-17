#include <stdio.h>
#include <fstream>
using namespace std;
struct student{
////char studentId[10];
////char name[10];
////short int math;
////short int chinese;
////short int english;
////short int object;
////short int biology;
	int num;
	char name[20];
	float score;
};
void write_to_binary_file()
{
	struct student stdu;
	stdu.num = 111;
	snprintf(stdu.name,20,"%s","shine");
	stdu.score = 80.0f;
	fstream binary_file("test1.dat",ios::out|ios::binary|ios::app); 
	binary_file.write((char *)&stdu,sizeof(struct student));
	binary_file.close();
} 
//文本格式写入
void write_to_text_file()
{
	struct student stdu;
	stdu.num = 111;
	snprintf(stdu.name,20,"%s","shine");
	stdu.score = 80.0f;
	FILE *fp = fopen("test2.dat","a+");   
	fprintf(fp,"%d%s%f",stdu.num,stdu.name,stdu.score); 
	fclose(fp);
} 
int main()
{
//	struct student stu = {"2132889833","张三",89,21,99,84,89};
	write_to_binary_file();
	write_to_text_file();
	printf("this is test1\n");
	return 1;
}
