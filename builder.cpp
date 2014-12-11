// builder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "User.h"
#include "UserBuilder.h"
using namespace std;
using namespace System;


int _tmain(int argc, _TCHAR* argv[])
{
	User^ newUser =(gcnew UserBuilder("Jhon", "Doe"))->age(30)
    ->address("Fake address 1234")
    ->build();
	Console::WriteLine(newUser->getAddress());
	Console::ReadLine();
	return 0;
}

