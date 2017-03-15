#pragma once

class iaudience;
class speaking_person : public iperson
{
public:
	void say(char *sound, iaudience *audience) override;
};