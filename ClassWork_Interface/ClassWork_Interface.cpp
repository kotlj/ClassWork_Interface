
#include <iostream>

/*
class Bird
{
private:
    bool iAm;
public:
    Bird()
    {
        iAm = true;
    }
    Bird(bool something)
    {
        iAm = true;
    }
    virtual void eat() = 0;
    virtual void voice() = 0;
    virtual void run() = 0;

    virtual ~Bird() {}
};
class IFly
{
public:
    virtual void fly() = 0;
    virtual ~IFly() {}
};
class ISwim
{
public:
    virtual void swim() = 0;
    virtual ~ISwim() {}
};

class Parrot : Bird, IFly
{
private:
public:
    Parrot() : Bird()
    {}
    Parrot(bool something) : Bird(something)
    {

    }
    void eat() override
    {
        std::cout << "Yum\n";
    }
    void voice() override
    {
        std::cout << "Bark!\n";
    }
    void run() override
    {
        std::cout << "*noise*\n";
    }
    void fly() override
    {
        std::cout << "*more noise*\n";
    }
};
class Penguin : Bird, ISwim
{
private:
public:
    Penguin() : Bird()
    {

    }
    Penguin(bool something) : Bird(something)
    {

    }
    void eat() override
    {
        std::cout << "*another noise*\n";
    }
    void voice() override
    {
        std::cout << "*anoying noise*\n";
    }
    void run() override
    {
        std::cout << "*esion*\n";
    }
    void swim() override
    {
        std::cout << "water\n";
    }
};
class Duck : Bird, ISwim
{
private:
public:
    Duck() : Bird()
    {

    }
    Duck(bool something) : Bird(something)
    {

    }

    void eat() override
    {
        std::cout << "*more noice*\n";
    }
    void voice() override
    {
        std::cout << "*even more noice*\n";
    }
    void run() override
    {
        std::cout << "*EVEN MORE NOICE*\n";
    }
    void swim() override
    {
        std::cout << "...\n";
    }
};
*/

class Employer
{
private:
    bool isAlive;
public:
    Employer()
    {
        isAlive = false;
    }
    Employer(bool alive)
    {
        isAlive = alive;
    }
    virtual void print() = 0;
    virtual ~Employer() {}
};
class President : Employer
{
private:
    bool smart;
public:
    President() : Employer()
    {
        smart = true;
    }
    President(bool _alive, bool _smart) : Employer(_alive)
    {
        smart = _smart;
    }
    void print() override
    {
        std::cout << "Is smart: " << smart << '\n';
    }
};
class Manager : Employer
{
private:
    bool Good;
public:
    Manager() : Employer()
    {
        Good = true;
    }
    Manager(bool _alive, bool _Good) : Employer(_alive)
    {
        Good = _Good;
    }

    void print() override
    {
        std::cout << "Is good: " << Good << '\n';
    }
};
class Worker : Employer
{
private:
    int pay;
public:
    Worker() : Employer()
    {
        pay = 100000;
    }
    Worker(bool _alive, int _pay) : Employer(_alive)
    {
        pay = _pay;
    }

    void print()
    {
        std::cout << "Pay: " << pay << '\n';
    }
};

int main()
{
    /*
    Parrot tester(true);
    tester.eat();
    tester.fly();
    tester.run();
    tester.voice();
    Penguin who(true);
    who.eat();
    who.run();
    who.swim();
    who.voice();
    */
    President Who(true, true);
    Manager is(true, true);
    Worker who(true, 1234567);
    Who.print();
    is.print();
    who.print();
}