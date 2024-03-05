#include <iostream>
using namespace std;
int main()
{
	int nbilanganA;
	int nbilanganB;
	string status;

	srand(time(0));

	nbilanganA = rand() % 10;
	nbilanganB = rand() % 4;

	if (nbilanganA == nbilanganB) {
		status = "sama besar";
	}
	else if (nbilanganA > nbilanganB) {
		status = "bilangan A lebih besar dari bilangan B ";
	}
	cout << "bilangan pertama adalah " << nbilanganA << endl;
	cout << "bilangan kedua adalah " << nbilanganB << endl;
	cout << " status = " << status << endl;
	return 0;
}
	
