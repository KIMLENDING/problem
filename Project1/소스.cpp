#include<iostream>//ios < ostream < istream
using namespace std; //std::�� ���� 
#include"Circle.h"
#include"Rectangle.h"
#include"Point.h"

int main() {
	Circle donut;//��ü ����
	//donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(13);//��ü ����
	//pizza.radius = 23;
	area = pizza.getArea();//double�� �ѹ� ������ �ȵ� ���� �Ǹ� ������. ������ �ʱ�ȭ �ϴ� ���̱� ������ ������ ��
	cout << "pizza ������ " << area << endl;


	cout << endl;


	Rectangle rect;//�Ű� ���� ���� ������ 
	//rect.width = 3;
	//rect.height = 5;
	int area1 = rect.getArea();
	cout << "�簢���� ������ " << area1 << endl;
	
	Rectangle rectn(19,19);//�Ű� ���� �ִ� ������
	area1 = rectn.getArea();
	cout << "�簢���� ������ " << area1 << endl;


	Point poin;//�Ű����� ���� ������

}