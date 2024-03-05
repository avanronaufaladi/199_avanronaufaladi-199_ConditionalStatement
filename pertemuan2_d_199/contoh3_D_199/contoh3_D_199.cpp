#include <iostream>
using namespace std;
int main()
{
	int nilaimatematika, nilaifisika, nrerata;
	string status;

	cout << "masukkan nilai matematika = ";
	cin >> nilaimatematika;

	cout << "masukkan nilai fisika = ";
	cin >> nilaifisika;

	nrerata = (nilaimatematika + nilaifisika) / 2;

	if (nrerata > 60) {
		status = "lulus";
	}
	else if (nilaimatematika > 70) {
		status = "lulus";
	}
	else {
		status = "tidak lulus";
	}
	cout << "nilai mtk = " << nilaimatematika << endl;
	cout << "nilai fisika = " << nilaifisika << endl;
	cout << "rata - rata nilai = " << nrerata << endl;
	cout << "statusnya adalah " << status << endl;

	return 0;
}