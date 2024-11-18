#include <bits/stdc++.h>
using namespace std;
enum CoverType
{
    Hardcover,
    Paperback
};
class LibraryResource
{
protected:
    string name;
    string author_name;
    int price;

public:
    LibraryResource(string name, string author_name, int price)
    {
        this->name = name;
        this->author_name = author_name;
        this->price = price;
    }
};
class Book : virtual public LibraryResource
{
protected:
    CoverType cover_type;

public:
    Book(string name, string author_name, int price, CoverType a) : LibraryResource(name, author_name, price)
    {
        cover_type = a;
    }
};
class EBook : virtual public LibraryResource
{
protected:
    double size;

public:
    EBook(string name, string author_name, int price, double size) : LibraryResource(name, author_name, price)
    {
        this->size = size;
    }
};
class Audiobook : virtual public LibraryResource
{
protected:
    int duration;

public:
    Audiobook(string name, string author_name, int price, int duration) : LibraryResource(name, author_name, price)
    {
        this->duration = duration;
    }
};
int main()
{
    /** TASK 1:
        So that the following lines execute without errors
    */
    LibraryResource *resource_list[100];
    resource_list[0] = new Book("The Alchemist", "Paulo Coelho", 500, CoverType::Hardcover);
    resource_list[1] = new EBook("1984", "George Orwell", 300, 2.5);
    resource_list[2] = new Audiobook("Becoming", "Michelle Obama", 700, 120);
}