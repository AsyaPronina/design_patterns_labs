#include "iperson.h"
#include "iaudience.h"

#include "speaking_person.h"

void speaking_person::say(char *sound, iaudience *audience)
{
	if (audience != nullptr)
	{
		audience->echo(sound);
	}
}
