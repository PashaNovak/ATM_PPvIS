#pragma once
using namespace std;

class Bank {
	char *FIO;
	int password;
public:
	Bank();
	static int many;
	char *get_FIO();
	int get_password();
	int get_many();
	void operation_many(int );
};

class ATM : public Bank {
public:
	static int i;                // индекс окна
};

class key : public ATM {
public:
	key();
	char *error;
	bool check_password(int );
};

class _myGet_m : public ATM {
public:
	char *error;
	char *error2;
	_myGet_m();
	bool operation(int );   // оперции со счётом
};

class balance : private ATM { 
public:
	using Bank::get_FIO;
	using Bank::get_many;
	using ATM::i;
};

/*
class pay_mobile : ATM {
    char *number;
public:
    char *error;
	char *error2;
	pay_mobile();
	bool operation(int );   // оперции со счётом
	char *get_number();
};*/