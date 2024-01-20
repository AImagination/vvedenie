#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int RowCount = 3;
	const int ColumnCount = 4;

	int ourMatrix[RowCount][ColumnCount] = {};

	for (int rowNum = 0; rowNum < RowCount; rowNum++)
	{
		for (int columnNum = 0; columnNum < ColumnCount; columnNum++)
		{
			ourMatrix[rowNum][columnNum] = rowNum + columnNum;
			cout << ourMatrix[rowNum][columnNum] << "  ";
		}
		cout << endl;
	}
	return 0;
}