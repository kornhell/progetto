#include <iostream>
using namespace std;
#include "contatore.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	contatore c1;
	for (int i=0;i=10;i++)
	{
	c1.incremanta();
	cout <<"valore contatore="<<c1.visualizza();
	
	}
	
		for (int i=0;i=10;i++)
	{
	
	cout <<"valore contatore="<<c1.visualizza();
	c1.decrementare();
}
	return 0;
}
