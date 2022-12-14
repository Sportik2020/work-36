#include <iostream>
#include <ctime>
using namespace std;
int Sign(double x) {
	if (x < 0) return -1;
	if (x == 0) return 0;
	if (x > 0) return 1;
}
double  CircleS(double r) {
	double pi = 3.14;
	double S = pi * (r * r);
	return S;
}
double RingS(double r1, double r2) {
	double pi = 3.14;
	double S, S1;
	S = pi * (r1 * r1);
	S1 = pi * (r2 * r2);
	return S - S1;
}
double  TriangleP(double a,double h) {
	double b;
	b = sqrt((a / 2) * (a / 2) + h * h);
	return b;
}
int SumRange(int a, int b, int c) {
	int sum = 0;
	if (a > b) return 0;
	for (int i = a; i <= b; i++) {
		sum = sum + i;
	}
	cout << sum << endl;
	for (int i = b; i <= c; i++) {
		sum = sum + i;
	}
	return sum;
}
double Calc(double a, double b, int Op) {
	switch (Op) {
	case 1: Op = a - b; cout << "Вычитание" << endl; break;
	case 2: Op = a * b; cout << "Умножение" << endl; break;
	case 3: Op = a / b; cout << "Деление" << endl; break;
	default: Op = a + b; cout << "Сложение" << endl; break;
	}
	return Op;
}
int main()
{
	setlocale(LC_ALL, "Russian");
/*Proc16. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:
−1, если X < 0; 0, если X = 0; 1, если X > 0.
С помощью этой функции найти значение выражения Sign(A) + Sign(B)
для данных вещественных чисел A и B.*/
/*	double a, b;
	cin >> a >> b;
	cout << Sign(a) + Sign(b);*/
/*Proc18. Описать функцию CircleS(R) вещественного типа, находящую площадь круга радиуса R (R — вещественное). С помощью этой функциинайти площади трех кругов с данными радиусами.
Площадь круга радиуса R вычисляется по формуле S = π·R2.В качестве значения π использовать 3.14.*/
/*	for (int i = 1; i <= 3; i++) {
		double R;
		cin >> R;
		cout << CircleS(R) << endl;
	}*/
/*Proc19. Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром
и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). С ее помощью
найти площади трех колец, для которых даны внешние и внутренние радиусы. Воспользоваться формулой площади круга радиуса R: S = π·R2.
В качестве значения π использовать 3.14.*/
/*	for (int i = 1; i <= 3; i++) {
		double R1, R2;
		cin >> R1;
		cin >> R2;
		cout << RingS(R1, R2) << endl;
	}*/
/*Proc20. Описать функцию TriangleP(a, h), находящую периметр равнобедренного треугольника по его основанию a и высоте h, проведенной к
основанию (a и h — вещественные). С помощью этой функции найти
периметры трех треугольников, для которых даны основания и высоты.
Для нахождения боковой стороны b треугольника использовать теорему
Пифагора:b2 = (a/2)2 + h2.*/
/*	for (int i = 1; i <= 3; i++) {
		double a, h;
		cin >> a >> h;
		cout << TriangleP(a, h);
	}*/
/*Proc21◦
. Описать функцию SumRange(A, B) целого типа, находящую сумму
всех целых чисел от A до B включительно (A и B — целые). Если A > B,Процедуры и функции 35
то функция возвращает 0. С помощью этой функции найти суммы чисел
от A до B и от B до C, если даны числа A, B, C*/
/*	int a, b, c;
	cin >> a >> b >> c;
	cout << SumRange(a, b, c) << endl;*/
/*Proc22. Описать функцию Calc(A, B, Op) вещественного типа, выполняющую
над ненулевыми вещественными числами A и B одну из арифметических
операций и возвращающую ее результат. Вид операции определяется целым параметром Op: 1 — вычитание, 2 — умножение, 3 — деление, остальные значения — сложение.
С помощью Calc выполнить для данных A и B операции, определяемые данными целыми N1, N2, N3.*/
/*	double a, b; 
	cin >> a >> b;
	int Op;
	cin >> Op;
	cout << Calc(a, b, Op) << endl;*/
	return 0;
}