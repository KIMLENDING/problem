#include<iostream>
#include"Rectangle.h"
using namespace std;

int Rectangle::getArea() {
	return width * height;

}
Rectangle::Rectangle() {
	width = 1;
	height = 1;
	cout << "�ʺ� " << width << "���� " << height << "�簢�� ����" << endl;
	return;
}
Rectangle::Rectangle(int w,int h) {
	width = w;
	height = h;
	cout << "�ʺ� " << width << "���� " << height << "�簢�� ����" << endl;
	return;
}
