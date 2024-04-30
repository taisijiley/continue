#include <iostream>
using namespace std;

/*ключевое слово continue*/

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		if (i==5)
		{
			continue;// 5 пропускает
		}
		cout << i << endl;
	}
}