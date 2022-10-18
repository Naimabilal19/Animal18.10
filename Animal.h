#pragma once
#include<iostream>
#include"Interface.h"
using namespace std;

class Animal : public IAnimal // реализаци€ интерфеса
{
protected:
	string name;
	double kg;
	string continent;
public:
	Animal() = default;
	Animal(string n, double k, string cont)
	{
		name = n;
		kg = k;
		continent = cont;
	}
	virtual void Print()
	{
		cout << "Название: " << name << endl;
		cout << "Вес: " << kg << endl;
		cout << "Континент: " << continent << endl;
	}
	//virtual void Eat() = 0;
	//virtual void Move() = 0;	
};

class Parrot : public Animal, public IFly // наследование 
{
public:
	Parrot() = default;
	Parrot(string n, double k, string cont) :Animal(n, k, cont) {}

	// ----- реализаци€ »Ќ“≈–‘≈…—ј IANIMAL !!!

	virtual void Eat()
	{
		cout << "Попугаи едят некоторые овощи, фрукты, зелень или зерно\n";
	}
	virtual void Move()
	{
		cout << "Попугаи чаще всего передвигаются с помощью крыльев, так же с помощью лап и когтей\n";
	}
	// ----- реализаци€ »Ќ“≈–‘≈…—ј IFLY !!!
	virtual void Fly()
	{
		cout << "Средняя скорость полета попугая составляет: 63 км/ч\n";
	}

};

class Cat : public Animal
{
public:
	Cat() = default;
	Cat(string n, double k, string cont): Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Кот ест: корм, мясо, рыбу и т.п\n";
	}
	virtual void Move()
	{
		cout << "В среднем кот бегает со скоростью 14/км в час\n";
	}
};

class Dog :public Animal
{
public:
	Dog() = default;
	Dog(string n, double k, string cont): Animal(n,k,cont){}
	virtual void Eat()
	{
		cout << "Собака ест корм, мясо, каши\n";
	}
	virtual void Move()
	{
		cout << "В среднем собака бегает со скоростью от 10-15 км/ч\n";
	}
};

class Pinguin : public Animal, public ISwim
{
public:
	Pinguin() = default;
	Pinguin(string n, double k, string cont): Animal(n,k, cont){}
	virtual void Eat()
	{
		cout << "Пингвины едят рыбку, малюсками и кальмарами\n";
	}
	virtual void Move()
	{
		cout << "Пингвины передвигаются на суше вертикально, при наличии снежного покрова - на животе по снегу или плавают\n";
	}
	virtual void Swim() //реализация интерфейса Iswim
	{
		cout << "Cредняя скорость плавания пингвина: 6-9 км/ч\n";
	}
};

class Dolphin :public Animal, public ISwim
{
public:
	Dolphin() = default;
	Dolphin(string n, double k, string cont) : Animal(n, k, cont) {}

	virtual void Eat()  
	{
		cout << "В основном дельфины питаются рыбой\n";
	}
	virtual void Move()
	{
		cout << "Дельфины передвигаются с помощью своего хвоста\n";
	}
	virtual void Swim() //реализация интерфейса Iswim
	{
		cout << "Средняя скорость передвижения дельфина около 55 км/ч\n";
	}
};
