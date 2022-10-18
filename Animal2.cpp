#include"Animal.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	IAnimal* ptr = nullptr;

	ptr = new Parrot("Попугай", 2, "Африка");
	ptr->Eat();
	ptr->Move();
	Parrot* p = static_cast<Parrot*>(ptr);
	p->Print();
	IFly* ifly = p;
	ifly->Fly();
	delete ptr;
	cout << "\n--------------------------------------\n";
	ptr = new Cat("Мурка", 6, "Украина");
	ptr->Eat();
	ptr->Move();
	Cat* q = static_cast<Cat*>(ptr);
	q->Print();
	delete ptr;
	cout << "\n--------------------------------------\n";
	ptr = new Dog("Герда", 10, "Украина");
	ptr->Eat();
	ptr->Move();
	Dog* w = static_cast<Dog*>(ptr);
	w->Print();
	delete ptr;
	cout << "\n--------------------------------------\n";
	ptr = new Pinguin("Шкипер", 25.4, "Антарктика");
	ptr->Eat();
	ptr->Move();
	Pinguin* e = static_cast<Pinguin*>(ptr);
	e->Print();
	ISwim* iswim = e;
	iswim->Swim();
	delete ptr;
	cout << "\n--------------------------------------\n";
	ptr = new Dolphin("Саймон", 950, "Во всех открытых морях");
	ptr->Eat();
	ptr->Move();
	Dolphin* t = static_cast<Dolphin*>(ptr);
	t->Print();
	ISwim* swim = t;
	swim -> Swim();
	delete ptr;
}