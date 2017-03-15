#include <iostream>

#include "iperson.h"
#include "iaudience.h"

#include "speaking_person.h"
#include "student.h"

void student::hear(char *sound) 
{
	std::cout << "Entry in the notebook: \"" << sound << ".\"" << std::endl;
}