#pragma once

class iaudience
{
public:
	virtual void echo(char *sound) = 0;
	virtual void add_person(iperson *person) = 0;
	virtual void remove_person(iperson *person) = 0;
	virtual ~iaudience() {}
};