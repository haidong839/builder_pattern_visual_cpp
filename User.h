#pragma once
ref class UserBuilder;

#include "stdafx.h"
#include "UserBuilder.h"
using namespace std;
using namespace System;

public ref class User  
{
private:
	String^ first_name;
	String^ last_name;
	String^ address;
	int^ age;
public:
	User(UserBuilder^ builder);
    String^ getFirstName();
	String^ getLastName();
	int^ getAge();
	String^ getAddress();
};
