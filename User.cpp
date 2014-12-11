#pragma once
#include "stdafx.h"
#include "User.h"
#include "UserBuilder.h"

using namespace std;
using namespace System;

User::User( UserBuilder^ builder)
{
	this->first_name = builder->first_name;
	this->last_name = builder->last_name;
	this->age = builder->m_age;		
	this->address = builder->m_address;
}

String^ User::getFirstName() {
	return this->first_name;
}

String^ User::getLastName() {
	return this->last_name;
}

int^ User::getAge() {
	return this->age;
}

String^ User::getAddress() {
	return this->address;
}
