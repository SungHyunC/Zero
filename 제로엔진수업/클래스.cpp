#include <iostream>
#include <stdlib.h>
using namespace std;

class A{
public:
	A(){

	}
	~A(){

	}
	void Show(int a, int b){
		cout << a << b << endl;
	}
};

class B : A{
public:
	B(){

	}
	~B(){

	}
	void Show(int a){
		cout << a << endl;
	}
};

class C : A, B{
public:
	C(){

	}
	~C(){

	}
	void Show(int a){
		cout << a << endl;
	}
};

int main(){
	for (int i = 0; i < 10; i++){
		cout << i << endl;
	}
	A *a = new A();
	delete a;

	return 0;
}