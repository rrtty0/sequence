// Lab_5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	
	setlocale(LC_ALL, "rus");
	Sequence A(5, -1);
	Sequence B(6, 7, 9, -1);
	cout << "Исходные последовательности:\n";
	A.show();
	cout << "\n\n";
	B.show();
	cout << "\n\n";
	//A.MERGE(B);
	//A.EXCL(B);
	A.CHANGE(B, 0);
	cout << "Результат:\n";
	A.show();

	cout << "\n";
	system("pause");
    return 0;
}

