
#include <iostream>

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

int main()
{
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
}