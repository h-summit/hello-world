#include<iostream>
#include <fstream>
#include"Naive_Bayes.h"
using namespace std;

int main()
{ 
	Naive_Bayes a(58);//�������Ͻ����58��
	a.train("train.data");//ѵ����
	a.test("test.data");//���Լ�
}