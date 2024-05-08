#include "bits/stdc++.h"
using namespace std;

int punto_ideal;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int amigos, punto_inicial, num, aux, aux2, tiempo, tiempo_cero;
	vector<int> tiempos;
	map<int, int> mp, puntos, posibles_puntos;
	queue<int> puntos_incial;

	cin >> amigos >> punto_inicial;
	puntos[punto_inicial];

	for (int i = 0; i < amigos; i++)
	{
		cin >> num;
		puntos[num];
	}

	for (auto it = puntos.begin(); it != puntos.end(); it++)
	{
		aux = it->first;
		aux2 = 0;
		while (aux != -1)
		{
			aux2 = aux;
			mp[aux2]++;
			if (aux == 1)
			{
				aux = -1;
				break;
			}
			else if (aux % 2 == 0)
			{
				aux = aux / 2;
			}
			else
			{
				aux = (aux * 3) + 1;
			}
		}
	}

	aux = punto_inicial;
	while (aux != -1)
	{
		puntos_incial.push(aux);
		if (aux == 1)
		{
			aux = -1;
			break;
		}
		else if (aux % 2 == 0)
		{
			aux = aux / 2;
		}
		else
		{
			aux = (aux * 3) + 1;
		}
	}

	aux = 0;
	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		if (it->second > aux)
		{
			aux = it->second;
		}
	}

	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		if (it->second == aux)
		{
			posibles_puntos[it->first];
		}
	}	

	bool fin = false;

	while (!puntos_incial.empty())
	{
		if (!fin)
		{
			for (auto it = posibles_puntos.begin(); it != posibles_puntos.end(); it++)
			{
				if (puntos_incial.front() == it->first)
				{
					punto_ideal = puntos_incial.front();
					fin=true;
					break;
				}
			}
			puntos_incial.pop();
		}
		else{
			break;
		}
	}

	tiempo = 0;

	for (auto it = puntos.begin(); it != puntos.end(); it++)
	{
		if (it->first != punto_inicial)
		{
			int cont = 0;
			aux = it->first;
			while (aux != punto_ideal)
			{
				cont++;
				if (aux == 1)
				{
					aux = -1;
				}
				else if (aux % 2 == 0)
				{
					aux = aux / 2;
				}
				else
				{
					aux = (aux * 3) + 1;
				}
			}
			tiempos.push_back(cont);
		}
		else
		{
			int cont = 0;
			aux = it->first;
			while (aux != punto_ideal)
			{
				cont++;
				if (aux == 1)
				{
					aux = -1;
				}
				else if (aux % 2 == 0)
				{
					aux = aux / 2;
				}
				else
				{
					aux = (aux * 3) + 1;
				}
			}
			tiempo_cero = cont;
		}
	}

	for (int i = 0; i < tiempos.size(); i++)
	{
		if (tiempos[i] > tiempo_cero && (tiempos[i] - tiempo_cero) > tiempo)
		{
			tiempo = tiempos[i] - tiempo_cero;
		}
	}
	cout << "Harold must reach node " << punto_ideal << " and wait " << tiempo << " second(s) for his friend(s) to arrive" << endl;
	
}