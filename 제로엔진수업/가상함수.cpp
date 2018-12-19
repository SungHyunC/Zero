#include <iostream>
using namespace std;
class Shape {
protected:
	int x, y;
public:
	void setOrigin(int x, int y){
		this->x = x;
		this->y = y;
	}
	virtual void draw(){
		cout << "Shape Draw" << endl;
	}

};
class Rectangle : public Shape {
	int width, height;
public:
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
	void draw(){
		cout << "Rectangle Draw" << endl;
	}
};
class Circle : public Shape {
	int radius;
public:
	void setRadius(int r) { radius = r; }
	void draw(){
		cout << "Circle Draw" << endl;
	}
};

void main(){
	Shape *ps = new Rectangle;
	ps->draw();
	delete ps;

	Shape *ps1 = new Circle;
	ps1->draw();
	delete ps1;
}