#include <iostream>
int main(int argc, const char * argv[])
{
	float weight,height,BMI,a;
	printf("�п�J�魫 (����):");
	scanf("%f",&weight);
	printf("�п�J�魫 (����):");
	scanf("%f",&height);
	a=height*height;
	BMI=weight/a;
	printf("�A��BMI�Ȭ�:%f\n",BMI);
	return 0;
}
