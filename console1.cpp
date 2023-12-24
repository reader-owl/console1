#include<iostream>

using namespace std;

int main()
{
	/*
	//	5555555555
	//	5444444445
	//	5433333345
	//	5432222345
	//	5432112345
	//	5432112345
	//	5432222345
	//	5433333345
	//	5444444445
	//	5555555555
	
	int n;
	cout << "Enter row or column number: ";
	cin >> n;
	cout << "\n";

	for (int i = 1; i <= 2 * n; i++)
	{
		for (int j = 1; j <= 2 * n; j++)
		{
			int top = i - 1;
			int left = j - 1;
			int right = (2 * n) - j;
			int bottom = (2 * n) - i;
			cout << (n - min(min(top, bottom), min(left, right)));
		}
		cout << "\n";
	}
	*/

	
	/*
	//	****
	//	**
	//	**
	//	****

	int n;
	cout << "Enter row or column number: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || j == 1 || i == n || j == n)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
	*/


	/*
	//	**
	//	****
	//	******
	//	********
	//	**********
	//	********
	//	******
	//	****
	//	**

	int n;
	cout << "Enter row or column number: ";
	cin >> n;

	int spaces = 2 * (n - 1);
	for (int i = 1; i <= (2 * n) - 1; i++)
	{
		int stars = i;
		if (i > n)
			stars = (2 * n) - i;

		// for stars
		for (int j = 1; j <= stars; j++)
		{
			cout << "*";
		}

		// for spaces
		for (int j = 1; j <= spaces; j++)
		{
			cout << " ";
		}

		// for stars
		for (int j = 1; j <= stars; j++)
		{
			cout << "*";
		}
		cout << "\n";
		if (i < n)
			spaces -= 2;
		else
			spaces += 2;
	}
	

	/*
	for (int i = 1; i <= n; i++)
	{
		// for stars
		for (int j = 0; j < n - i + 1; j++)
		{
			cout << "*";
		}

		// for spaces
		for (int j = 0; j < 2 * (i - 1); j++)
		{
			cout << " ";
		}

		// for stars
		for (int j = 0; j < n - i + 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	// after halfpoint
	for (int i = 1; i <= n; i++)
	{
		// for stars
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}

		// for spaces
		for (int j = 0; j < 2 * (n - i); j++)
		{
			cout << " ";
		}

		// for stars
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 0; i < n; i++)
	{
		for (char ch = 'E' - i; ch <= 'E'; ch++)
		{
			cout << char(ch) << " ";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 0; i < n; i++)
	{
		// for space
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}

		// for alphabet
		char ch = 'A';
		int breakPoint = (2 * i + 1) / 2;
		for (int j = 1; j <= (2 * i) + 1; j++)
		{
			cout << char(ch);

			if (j <= breakPoint)
				ch++;
			else
				ch--;
		}

		// for space
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 1; i <= n; i++)
	{
		char ch = 'A' + i - 1;
		for (int j = 1; j <= i; j++)
		{
			cout << char(ch) << " ";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 1; i <= n; i++)
	{
		for (char ch = 'A'; ch <= 'A' + n - i; ch++)
		{
			cout << char(ch) << " ";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 1; i <= n; i++)
	{
		for (char ch = 'A'; ch <= 'A' + i - 1; ch++)
		{
			cout << char(ch) << " ";
		}
		cout << "\n";
	}
	*/

	/*
	int num = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << num << " ";
			num += 1;
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 1; i <= n; i++)
	{
		// for number
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}

		// for space
		for (int j = 1; j <= (2 * n) - (2 * i); j++)
		{
			cout << " ";
		}

		// for number
		for (int j = i; j >= 1; j--)
		{
			cout << j;
		}
		cout << "\n";
	}
	*/

	/*
	int start = 1;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
			start = 1;
		else
			start = 0;

		for (int j = 0; j < i; j++)
		{
			cout << start;
			start = 1 - start;
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 1; i <= (2 * n) - 1; i++)
	{
		int stars = i;
		if (i > n)
			stars = (2 * n) - i;

		for (int j = 0; j < stars; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 0; i < n; i++)
	{
		// for space
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}

		// for star
		for (int j = 0; j < (2 * n) - (2 * i) - 1; j++)
		{
			cout << "*";
		}

		// for space
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < n; i++)
	{
		// for space
		for (int j = 1; j <= n - i - 1; j++)
		{
			cout << " ";
		}

		// for star
		for (int j = 1; j <= (2 * i) + 1; j++)
		{
			cout << j;
		}

		// for space
		for (int j = 1; j <= n - i - 1; j++)
		{
			cout << " ";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 0; i < n; i++)
	{
		// for space
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}

		// for star
		for (int j = 0; j < (2 * n) - (2 * i) - 1; j++)
		{
			cout << "*";
		}

		// for space
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 0; i < n; i++)
	{
		// for space
		for (int j = 1; j <= n - i - 1; j++)
		{
			cout << " ";
		}
		
		// for star
		for (int j = 1; j <= (2 * i) + 1; j++)
		{
			cout << j;
		}

		// for space
		for (int j = 1; j <= n - i - 1; j++)
		{
			cout << " ";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i + 1; j++)
		{
			cout << j << "  ";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= n - i; j++)
		{
			cout << "*  ";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << "  ";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i + 1; j++)
		{
			cout << j << "  ";
		}
		cout << "\n";
	}
	*/

	/*
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*  ";
		}
		cout << "\n";
	}
	*/

	system("pause>0");
}

/*
int sum(int n1, int n2) {
	int s = n1 + n2;
	return s;
}

int main()
{
	int n1, n2;
	cout << "n1: ";
	cin >> n1;
	cout << "n2: ";
	cin >> n2;
	int r = sum(n1, n2);
	cout << r;

	system("pause>0");
}
*/

/*
int main()
{
	// for (int i = 0; i <= 25; i += 5) {
	//	   cout << "Vasu " << i << endl;
	// }

	// int i = 1;
	// while (i <= 5) {
	// 	   cout << "vasu" << i << endl;
	//	   i++;
	// }

	int i = 2;
	do {
		cout << "vasu " << i << endl;
		i++;
	} while (i <= 1);
	cout << i << endl;

	system("pause>0");
}
*/