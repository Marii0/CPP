#include "bits/stdc++.h"
// assert(x>0) si falla da RTE
using namespace std;
#define endl '\n'
#define DBG(x) cerr << #x << "=" << (x) << endl;
#define RAYA cerr << "======================" << endl;
#define RAYAS cerr << "......................" << endl;
// #define DBG(x) ;
// #define RAYA ;
// #define RAYAS ;
const int MAX = 1e3;
int arr[MAX][MAX];

void ffilluno(int r, int c, int rmax, int cmax)
{
	if (r + 1 < rmax)
	{
		if (arr[r + 1][c] == 4)
		{
			arr[r + 1][c] = 1;
		}
	}
	if (r - 1 >= 0)
	{
		if (arr[r - 1][c] == 4)
		{
			arr[r - 1][c] = 1;
		}
	}
	if (c + 1 < cmax)
	{
		if (arr[r][c + 1] == 4)
		{
			arr[r][c + 1] = 1;
		}
	}
	if (c - 1 >= 0)
	{
		if (arr[r][c - 1] == 4)
		{
			arr[r][c - 1] = 1;
		}
	}
}

void ffilldos(int r, int c, int rmax, int cmax)
{
	if (r + 1 < rmax)
	{
		if (arr[r + 1][c] == 4)
		{
			arr[r + 1][c] = 2;
		}
	}
	if (r - 1 >= 0)
	{
		if (arr[r - 1][c] == 4)
		{
			arr[r - 1][c] = 2;
		}
	}
	if (c + 1 < cmax)
	{
		if (arr[r][c + 1] == 4)
		{
			arr[r][c + 1] = 2;
		}
	}
	if (c - 1 >= 0)
	{
		if (arr[r][c - 1] == 4)
		{
			arr[r][c - 1] = 2;
		}
	}
}

void ffilltres(int r, int c, int rmax, int cmax)
{
	if (r + 1 < rmax)
	{
		if (arr[r + 1][c] == 4)
		{
			arr[r + 1][c] = 3;
		}
	}
	if (r - 1 >= 0)
	{
		if (arr[r - 1][c] == 4)
		{
			arr[r - 1][c] = 3;
		}
	}
	if (c + 1 < cmax)
	{
		if (arr[r][c + 1] == 4)
		{
			arr[r][c + 1] = 3;
		}
	}
	if (c - 1 >= 0)
	{
		if (arr[r][c - 1] == 4)
		{
			arr[r][c - 1] = 3;
		}
	}
}

int revisarr(int r, int c, int numalto)
{
	for (int i = r - 1; i >= 0; i--)
	{
		for (int j = 0; j < c; j++)
		{
			if (arr[i][j] == numalto)
			{
				return i;
			}
		}
	}
	return 0;
}

int revisarc(int r, int c, int numalto)
{

	for (int j = 0; j < c; j++)
	{
		if (arr[r][j] == numalto)
		{
			return j;
		}
	}
	return 0;
}

//--------------------SOLBEGIN---------------------------------
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int r, c;
	cin >> r >> c;

	int blocks;
	cin >> blocks;

	if (r * c == blocks)
	{
		for (int i = 0; i < blocks; i++)
		{
			int posr, posc;
			cin >> posr >> posc;
		}
		cout << -1;
	}
	else
	{
		for (int i = 0; i < MAX; i++)
		{
			for (int j = 0; j < MAX; j++)
			{
				arr[i][j] = 4;
			}
		}

		for (int i = 0; i < blocks; i++)
		{
			int posr, posc;
			cin >> posr >> posc;
			arr[posr][posc] = 0;
		}

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (arr[i][j] == 0)
				{
					ffilluno(i, j, r, c);
				}
			}
		}

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (arr[i][j] == 1)
				{
					ffilldos(i, j, r, c);
				}
			}
		}

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (arr[i][j] == 2)
				{
					ffilltres(i, j, r, c);
				}
			}
		}

		int numalto = 0;

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (arr[i][j] > numalto)
				{
					numalto = arr[i][j];
				}
			}
		}

		int resr = 0;
		int resc = 0;

		resr = revisarr(r, c, numalto);
		resc = revisarc(resr, c, numalto);

		cout << resr << ' ' << resc << endl;
	}
}
//--------------------EOSOLUTION---------------------------------