#include "Sequence.h"


int main()
{
	Sequence A({ 5 });
	A.push_back(1);              //only for demonstration
	A.push_back(6);              //only for demonstration
	A.push_back(1);              //only for demonstration
	A.add(0, 6);                 //only for demonstration
	cout << "Sequence A:\n";
	A.show();
	cout << "\n\n";
	
	Sequence B({ 6,7,9,1 });
	B.remove(0);
	cout << "Sequence B:\n";
	B.show();
	cout << "\n\n";

	Sequence C({ 6,1 });
	cout << "Sequence C:\n";
	C.show();
	cout << "\n\n";

	cout << "--------------------\n\n";

	cout << "CONCATENATION(A,B):\n";
	Sequence tempA1(A);
	tempA1.CONCAT(B);
	tempA1.show();
	cout << "\n\n";

	cout << "MERGE(A,B):\n";
	Sequence tempA2(A);
	tempA2.MERGE(B);
	tempA2.show();
	cout << "\n\n";

	cout << "EXCL(A,C):\n";
	Sequence tempA3(A);
	tempA3.EXCL(C);
	tempA3.show();
	cout << "\n\n";

	cout << "CHANGE(C,B):\n";
	Sequence tempC1(C);
	tempC1.CHANGE(B, 1);
	tempC1.show();
	cout << "\n\n";

	system("pause");
    return 0;
}

