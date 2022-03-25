#include<iostream>//ios < ostream < istream
using namespace std; //std::를 따로 
#include"Circle.h"
#include"Rectangle.h"
#include"Point.h"

int main() {
	Circle donut;//객체 생성
	//donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(13);//객체 생성
	//pizza.radius = 23;
	area = pizza.getArea();//double를 한번 더쓰면 안된 쓰게 되면 재정의. 여러번 초기화 하는 것이기 때문에 오류가 남
	cout << "pizza 면적은 " << area << endl;


	cout << endl;


	Rectangle rect;//매개 변수 없는 생성자 
	//rect.width = 3;
	//rect.height = 5;
	int area1 = rect.getArea();
	cout << "사각형의 면적은 " << area1 << endl;
	
	Rectangle rectn(19,19);//매개 변수 있는 생성자
	area1 = rectn.getArea();
	cout << "사각형의 면적은 " << area1 << endl;


	Point poin;//매개변수 없는 생성자

}