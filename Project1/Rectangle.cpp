#include<iostream>
#include"Rectangle.h"
using namespace std;

int Rectangle::getArea() {
	return width * height;

}
Rectangle::Rectangle() {
	width = 1;
	height = 1;
	cout << "너비 " << width << "높이 " << height << "사각형 생성" << endl;
	return;
}
Rectangle::Rectangle(int w,int h) {
	width = w;
	height = h;
	cout << "너비 " << width << "높이 " << height << "사각형 생성" << endl;
	return;
}
