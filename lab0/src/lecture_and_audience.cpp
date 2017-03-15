// lecture_and_audience.cpp : Defines the entry point for the console application.
//
#include "iperson.h"
#include "iaudience.h"

#include "speaking_person.h"
#include "audience.h"
#include "lector.h"
#include "student.h"

int main(int argc, char** argv)
{
	iaudience *room_119 = new audience();

	iperson *lector_Popov = new lector();
	iperson *student_Vasilev = new student();

	room_119->add_person(lector_Popov);
	room_119->add_person(student_Vasilev);

	lector_Popov->say("Topic of this lesson is Design Patterns.", room_119);

	room_119->remove_person(lector_Popov);
	room_119->remove_person(student_Vasilev);

	delete lector_Popov;
	lector_Popov = nullptr;
	delete student_Vasilev;
	student_Vasilev = nullptr;

	delete room_119;
	room_119 = nullptr;

	return 0;
}