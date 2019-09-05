#include "Header.h"
#include <iostream>
fun_ptr menu;
void dude();

void init_callback()
{
	menu = &dude; // call inside init to save callback address once
}
int main()
{
	init_callback();
	printer();
	dude_test();
	return 0;
}

void dude()
{
	std::cout << "dude " << std::endl;

}

