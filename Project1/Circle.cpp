#include<iostream>
#include"Circle.h"
using namespace std;

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::Circle() {
	radius = 1;
	cout << "반지름" << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;

	cout << "반지름" << radius << " 원 생성" << endl;

}
//Circle::Circle(): Circle(1){}  //위임 생성자  코드가 중복일 경우 사용 
//						       //매개변수 없는 생서자를 호출 한게 되는것이다.
//Circle::Circle(int r) {//객체 초기화를 전담하는 타겟생성자
//	radius = r;
//	cout << "반지름" << radius << " 원 생성" << endl;
//}





