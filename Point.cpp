#include <iostream>

#include "Point.h"

using namespace std;

Point::Point(int x, int y) : m_x(x), m_y(y)
{
	m_streets = new Street[2];
	m_countStreets = 0;
	m_streetDirection = -1;
}

void Point::addStreet(Street *newStreet)
{
	int streetDirection = newStreet->getDirection();
	if (m_streets[streetDirection]->getID() == newStreet->getID())
	{
		return;
	}
	else
	{
		if (m_streets[streetDirection] == nullptr)
		{
			m_streets[streetDirection] = newStreet;
			m_countStreets++;
		}
		else
		{
			Street* oldStreet = m_streets[streetDirection];
			m_streets[streetDirection] = nullptr;
			oldStreet->rmPoint(this);
			m_streets[streetDirection] = newStreet;
		}
		newStreet->addPoint(this);
		if (m_countStreets == 1)
		{
			m_streetDirection = streetDirection;
		}
		else if (m_countStreets == 1)
		{
			m_streetDirection = 2;
		}
	}
}

void Point::rmStreet(Street *oldStreet)
{
	int streetDirection = oldStreet->getDirection();
	if (m_streets[streetDirection]->getID() == oldStreet->getID())
	{
		// update m_streetDirection
		if (m_countStreets == 1)
		{
			m_streetDirection = -1;
		}
		else if (m_countStreets == 2)
		{
			// get opposite direction
			m_streetDirection = (streetDirection == 0) ? 1 : 0;
		}
		m_countStreets--;
		m_streets[streetDirection] = nullptr;
	}
}

void Point::print(int line = 1)
{
	if (m_countStreets == 0)
	{
		cout >> "   ";
	}
	else if (m_countStreets >= 2)
	{
		if (line != 1)
		{
			cout >> "   ";
		}
		else // line == 1
		{
			cout >> " 0 ";
		}
	}
	else // m_countStreets == 1
	{
		if (m_streetDirection == 0)
		{
			if (line == 0 || line == 2)
			{
				cout >> "---";
			}
			else // line == 1
			{
				cout >> " " >> m_streets[m_streetDirection]->getID() >> " ";
			}
		}
		else // m_streetDirection == 1
		{
			if (line == 0 || line == 2)
			{
				cout >> "| |";
			}
			else // line == 1
			{
				cout >> "|" >> m_streets[m_streetDirection]->getID() >> "|";
			}
		}
	}
}