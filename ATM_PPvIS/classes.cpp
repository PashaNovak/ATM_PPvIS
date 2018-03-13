#pragma once
#include "stdafx.h"
#include "classes.h"

Bank::Bank() {
	FIO = "Пупкин Василий Петрович";
	password = 1234;
	many = 5000000;
}

char *Bank::get_FIO() {
	return FIO;
}

int Bank::get_password() {
	return password;
}

int Bank::get_many() {
	return many;
}

void Bank::operation_many(int i) {
    many -= i;
} 
int Bank::many;

int ATM::i = 1;

key::key() {
	error = "Не верный pin-код!";
}

bool key::check_password(int n) {
	if(n != get_password()) 
		return false;
	return true;
}

_myGet_m::_myGet_m() {
	error = "Не верный ввод суммы!";
	error2 = "Недостаточно денег!";
}

bool _myGet_m::operation(int i) {
	if(i<0 || i>get_many())
		return false;
	operation_many(i);
	return true;
}