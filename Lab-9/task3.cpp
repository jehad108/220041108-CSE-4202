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
    int no_of_copies;

public:
    LibraryResource(string name, string author_name, int price)
    {
        this->name = name;
        this->author_name = author_name;
        this->price = price;
        this->no_of_copies = 1;
    }
    virtual void resourceDetails()
    {
    }
    void set_no_of_copies(int x)
    {
        this->no_of_copies = x;
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
    void resourceDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Author: " << author_name << endl;
        cout << "price: " << price << endl;
        switch (cover_type)
        {
        case Hardcover:
            cout << "Cover Type: Hardcover" << endl;
            break;

        case Paperback:
            cout << "Cover Type: PaperBack" << endl;
        }
        cout << "number of copies : " << no_of_copies << endl;
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
    void resourceDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Author: " << author_name << endl;
        cout << "price: " << price << endl;
        cout << "Size : " << size << endl;
        cout << "number of copies : " << no_of_copies << endl;
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
    void resourceDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Author: " << author_name << endl;
        cout << "price: " << price << endl;
        cout << "duration : " << duration << endl;
        cout << "number of copies : " << no_of_copies << endl;
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
    /** TASK 2: Display details */
    for (int i = 0; i < 3; i++)
    {
        resource_list[i]->resourceDetails();
    }
    // /** TASK 3: Setting number of copies for Book */
    resource_list[0]->set_no_of_copies(50);
    resource_list[1]->set_no_of_copies(5);
    resource_list[2]->set_no_of_copies(1);
    for (int i = 0; i < 3; i++)
    {
        resource_list[i]->resourceDetails();
    }
}