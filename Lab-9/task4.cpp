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
        no_of_copies = 1;
    }
    virtual void resourceDetails()
    {
    }
    void set_no_of_copies(int x)
    {
        this->no_of_copies = x;
    }
    int get_price()
    {
        return price;
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
void sort_resources_price(LibraryResource *resource_list[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (resource_list[j]->get_price() > resource_list[j + 1]->get_price())
            {
                swap(resource_list[j], resource_list[j + 1]);
            }
        }
    }
}
int main()
{
    LibraryResource *resource_list[100];

    /** TASK 1:
        So that the following lines execute without errors
    */
    resource_list[0] = new Book("The Alchemist", "Paulo Coelho", 500, CoverType::Hardcover);
    resource_list[0]->resourceDetails();
    resource_list[1] = new EBook("1984", "George Orwell", 300, 2.5);
    resource_list[2] = new Audiobook("Becoming", "Michelle Obama", 700, 120);

    /** TASK 2: Display details */
    // for (int i = 0; i < 3; i++)
    // {
    //     resource_list[i]->resourceDetails();
    // }

    // /** TASK 3: Setting number of copies for Book */
    resource_list[0]->set_no_of_copies(50);
    resource_list[1]->set_no_of_copies(5);
    resource_list[2]->set_no_of_copies(1);

    // for (int i = 0; i < 3; i++)
    // {
    //     resource_list[i]->resourceDetails();
    // }

    // /** TASK 4: Sorting resources by price
    /*Created 7 more objects.*/

    resource_list[3] = new Book("Sapiens", "Yuval Noah Harari", 1000, CoverType::Paperback);
    resource_list[4] = new EBook("Digital Minimalism", "Cal Newport", 400, 3.2);
    resource_list[5] = new Audiobook("Atomic Habits", "James Clear", 1200, 180);
    resource_list[6] = new Book("Dune", "Frank Herbert", 800, CoverType::Hardcover);
    resource_list[7] = new EBook("The Subtle Art of Not Giving a F*ck", "Mark Manson", 350, 1.8);
    resource_list[8] = new Audiobook("Educated", "Tara Westover", 600, 150);
    resource_list[9] = new Book("Harry Potter and the Philosopher's Stone", "J.K. Rowling", 450, CoverType::Paperback);
    sort_resources_price(resource_list, 10);

    /** Display sorted resources */
    for (int i = 0; i < 10; i++)
    {
        resource_list[i]->resourceDetails();
    }

    // return 0;
}
