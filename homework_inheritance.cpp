#include <iostream>
#include <string>
#include <vector>

class Animal
{
    protected:
     std::string name;
     int weight;
    public:
     Animal(std::string name = "", int weight = 0):name(name),weight(weight){}
    virtual void print_func() {}
    virtual ~Animal(){};
};

class Cat : public Animal
{
    protected:
     std::string breed;
    public:
     Cat(std::string name, int weight, std::string breed) : Animal(name, weight), breed(breed){}
    virtual void print_func()
    {
        std::cout << "Cat: " << name << ", Weight: " << weight  << std::endl;
    }

    virtual ~Cat(){};
};

class Dog : public Animal
{
    protected:
     std::string breed;
    public:
     Dog(std::string name, int weight, std::string breed) : Animal(name, weight), breed(breed){}
    virtual void print_func()
    {
        std::cout << "Dog: " << name << ", Weight: "  << weight << std::endl;
    }
    virtual ~Dog(){};
};


int main()
{
    std::vector<Animal*> V;
    Cat ct("Rafael", 7, "Cheshir");
    Dog dg("Roger", 15, "Husky");
    Cat ct2("Nowak", 14, "Manul");
    Dog dg2("Andy", 9, "Shibainu");

    V.push_back(&ct);
    V.push_back(&dg);
    V.push_back(&ct2);
    V.push_back(&dg2);

    for (int i = 0; i < V.size(); i++)
    {
        V[i]->print_func();
    }
    
    return 0;
}