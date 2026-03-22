#include <cmath>
#include <iostream>
using namespace std;
int main(){

       	double side1, side2; 
	double square, perimeter, diagonal; 
	
	cin >> side1 >> side2;// введем стороны прямоуголька 
	
	if (side1 <= 0 || side2 <= 0){ //защита от отрицательных чисел
	cout << "Ошибка!" <<endl; 
	return 0; 
	} 
	
	perimeter = (side1 + side2)*2; 
	square = side1 * side2; 
	diagonal = sqrt( pow(side1, 2) + pow(side2, 2) ); 
	
	cout << "Периметр = " << perimeter << endl; 
	cout << "Площадь = " << square << endl; 
	cout << "Диагональ = " << diagonal<< endl; 
	return 0; 
}
