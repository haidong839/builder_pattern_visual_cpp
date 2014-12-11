#pragma once
ref class User;
#include "stdafx.h"
#include "User.h"

using namespace std;
using namespace System;


public ref class UserBuilder 
{
public:
	String^ first_name;
	String^ last_name;
	String^ m_address;
	int^ m_age;
	UserBuilder(String^ firstName, String^ lastName);
    UserBuilder^ age(int^ age);
	UserBuilder^ address(String^ address);
	User^ build(void);
};
