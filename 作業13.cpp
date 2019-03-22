#include <iostream>
int main(int argc, const char * argv[])
{
	float weight,height,BMI,a;
	printf("請輸入體重 (公斤):");
	scanf("%f",&weight);
	printf("請輸入體重 (公尺):");
	scanf("%f",&height);
	a=height*height;
	BMI=weight/a;
	printf("你的BMI值為:%f\n",BMI);
	return 0;
}
