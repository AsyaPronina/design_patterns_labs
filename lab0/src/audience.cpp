#include <algorithm>

#include "iperson.h"
#include "iaudience.h"

#include "audience.h"

void audience::add_person(iperson *person)
{
	m_people.push_back(person);
}

void audience::remove_person(iperson *person)
{
	m_people.erase(std::remove(m_people.begin(), m_people.end(), person), m_people.end());
}

void audience::echo(char *sound)
{
	for (auto person : m_people)
	{
		person->hear(sound);
	}
}