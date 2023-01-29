//СБД 211 Токарев
#include<iostream>
using namespace std;

//#define GEOMETRIA1_0
//#define GEOMETRIA1_1
//#define GEOMETRIA1_2 
//#define GEOMETRIA1_3
//#define GEOMETRIA1_4
//#define GEOMETRIA1_5
//#define GEOMETRIA1_6

#define CHESS_DESK_1
	#define UPPER_LEFT_ANGLE	(char)218
	#define UPPER_RIGHT_ANGLE	(char)191
	#define LOWER_LEFT_ANGLE	(char)192
	#define LOWER_RIGHT_ANGLE	(char)217
	#define VERT_LINE			(char)179
	#define HOR_LINE			"\xC4\xC4"					//(char)196<<(char)196 Для вывода горизонтальной линии 2 раза
	#define WHITE_BOX			"\xDB\xDB"					//(char)219<<(char)219
	#define BLACK_BOX			"\x20\x20"					//(char)32 <<(char)32
//#define CHESS_DESK_2

void main()
{
	setlocale(LC_ALL, "Russian");
	int n; 
	cout << "Введите число: "; cin >> n;

#ifdef GEOMETRIA1_0

	for (int i = 0; i < n; i++) 
	{
		for (int i = 0; i < n; i++)		cout << "*";
		cout << endl;
	}
#endif

#ifdef GEOMETRIA1_1

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j <= i; j++)	cout << "*";
		cout << endl;
	}
#endif

#ifdef GEOMETRIA1_2

	for (int i = 0; i < n; i++) 
	{
		for (int j = i; j <n; j++)		cout << "*";
		cout << endl;
	}
#endif

#ifdef GEOMETRIA1_3

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j <i; j++)		cout << " ";
		for (int j = i; j < n; j++)		cout << "*";
		cout << endl;
	}
#endif

#ifdef GEOMETRIA1_4

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j <n-1; j++)		cout << " ";
		for (int j = 0; j <i+1; j++)		cout << "*";
		cout << endl;
	}
#endif

#ifdef GEOMETRIA1_5

	for (int i = 0; i < n; i++) 
	{
		for (int j = i; j < n; j++)	cout << " "; cout << "/";
		for (int j = 0; j < i; j++)	cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i+1; j++)	cout << " "; cout << "\\";
		for (int j = i; j < n-1; j++)	cout << "  "; cout << "/";
		cout << endl;
	}
#endif

#ifdef GEOMETRIA1_6

	int counter = 0;

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			if ((i+j) % 2 == 0)		cout << " + ";
			else					cout << " - ";
		}
		cout << endl;
	}
#endif

#ifdef CHESS_DESK_1

	
	//for (int i = 176; i < 224; i++)
	//{
	//	if (i % 16 == 0) cout << endl;
	//	cout << i<<"\t"<<(char)i << "\n";
	//}
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++) 
	{
		for (int j = 0; j <= n; j++) 
		{
			if (i == 0 && j == 0)		cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)	cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)	cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)	cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)	cout << HOR_LINE;
			else if (j == 0 || j == n)	cout << VERT_LINE;
			else if (i % 2 == j % 2)	cout << WHITE_BOX;
			else cout << BLACK_BOX;
		}
		cout << endl;
	}
#endif

#ifdef CHESS_DESK_2

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i / 5 + j / 5) & 1)	cout << " *";
			else						cout << "  ";
		}
		cout << endl;
	}
#endif
}