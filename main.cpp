#include <iostream>
using namespace std;

/*�������� ����� continue*/

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		if (i==5)
		{
			continue;// 5 ����������
		}
		cout << i << endl;
	}
}