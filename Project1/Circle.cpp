#include<iostream>
#include"Circle.h"
using namespace std;

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::Circle() {
	radius = 1;
	cout << "������" << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;

	cout << "������" << radius << " �� ����" << endl;

}
//Circle::Circle(): Circle(1){}  //���� ������  �ڵ尡 �ߺ��� ��� ��� 
//						       //�Ű����� ���� �����ڸ� ȣ�� �Ѱ� �Ǵ°��̴�.
//Circle::Circle(int r) {//��ü �ʱ�ȭ�� �����ϴ� Ÿ�ٻ�����
//	radius = r;
//	cout << "������" << radius << " �� ����" << endl;
//}





