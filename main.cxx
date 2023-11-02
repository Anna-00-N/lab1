#include <iostream> //ввод-вывод
#include "lines.h" //функции линия, круг

using namespace std; //стандартная среда имён


double way(double X){
	double Y;
	if(X<=-3){
		Y = line(1, 3, X);
	}
	else if(X<=0){
		Y = circle(0, 3, X);
	}
	else if(X<=6){
		Y = line(-0.5, 0, X, 0, 3);
	}
	else{
		Y = line(1, 0, X, 6, 0);
	}
	return Y;
}




int main(int argc, char *argv[])
{
	setlocale(LC_CTYPE, ".866"); //С MinGW ПО-ДРУГОМУ НИКАК

	double X, Y;

	for(X=-10; X<=10; X++){
		wcout << L" X = "<<X; //С MinGW ПО-ДРУГОМУ НИКАК, ТОЛЬКО ЧЕРЕЗ L-СТРОКИ
		wcout << L"  Y = " << way(X) << "\n";
	}

	cin.get();
	return 0;
}