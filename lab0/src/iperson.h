#pragma once

class iaudience;
class iperson
{
public:
	virtual void hear(char *sound) = 0;
	virtual void say(char *sound, iaudience *audience) = 0;
	virtual ~iperson(void) {}
};

