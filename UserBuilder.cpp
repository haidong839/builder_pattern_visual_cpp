#pragma once
#include "stdafx.h"
#include "User.h"
#include "UserBuilder.h"
using namespace std;
using namespace System;

UserBuilder::UserBuilder(String^ firstName, String^ lastName){
	this->first_name = firstName;
	this->last_name  = lastName;
}

UserBuilder^ UserBuilder::age(int^ age) {
	this->m_age = age;
	return this;
}

UserBuilder^ UserBuilder::address(String^ address) {
	this->m_address = address;
	return this;
}

User^ UserBuilder::build() {
	return gcnew User(this);
}
