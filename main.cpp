#include "MatrixPoint.h"

int main(int argc, char *argv[])
{
	MatrixPoint mp = MatrixPoint(15, 8, 4);
	mp.addStreet(1, 4, 0, 1200, "Dizengoff");
	mp.addStreet(3, 2, 0, 750, "Bugrachov");
	mp.addStreet(6, 1, 1, 500, "Bar-Kochva");
	mp.addStreet(12, 0, 1, 800, "Hayarkon");
	mp.print();
}