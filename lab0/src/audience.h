#pragma once

#include <vector>

class audience : public iaudience
{
public:
	void add_person(iperson *person) override;
	void remove_person(iperson *person) override;
	void echo(char *sound) override;
	~audience() {}

private:
	std::vector<iperson *> m_people;
};

