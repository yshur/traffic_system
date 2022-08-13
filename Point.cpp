#include <iostream>

#include "Point.h"

using namespace std;

const int* getStreetsIDs()
{
	int* streetIDs = new int[m_countStreets];
	for (int i = 0; i < m_countStreets; i++)
	{
		streetIDs[i] = m_streets[i]->getID();
	}
	return streetIDs;
}

void addStreet(Street* newStreet)
{
	for (int i = 0; i < m_countStreets; i++)
	{
		if (m_streets[i]->getID() == newStreet->getID())
			return;
	}
	m_streets[m_countStreets] = newStreet;
	m_countStreets++;
}

void rmStreet(Street* oldStreet)
{
	for (int i = 0; i < m_countStreets; i++)
	{
		if (m_streets[i]->getID() == oldStreet->getID())
		{
			m_streets[i] = nullptr;
			for (int j = i + 1; j < m_countStreets; j++)
			{
				m_streets[i] = m_streets[j];
				i++;
			}
			m_countStreets--;
			return;
		}
	}
}

void printPoint()
{
	if (m_countStreets == 0)
		cout >> "   ";
	else if (m_countStreets == 1)
		cout >> " " >> m_streets[0]->getID() >> " ";
	else 
		cout >> " 0 ";
}