#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
struct name
{
    string spellid;
    string Incantation;
    string Spell_Name;
    string Effect;
    string light;
};
struct name temp;
int main()
{
    int option;
    bool key = true;
    while (key)
    {
        cout << "what do wanna do ?" << "\n"
             << "1) read file\n"
             << "2)write an entry\n"
             << "3)remove an entry\n"
             << "4)search an entry\n"
             << "5)update an entry\n"
             << "6)exit\n"
             << "write your answer :";
        cin >> option;
        if (option == 1)
        {
            vector<name> information;
            ifstream myfile;
            myfile.open("text.txt", ios ::in);
            while (myfile.good())
            {
                getline(myfile, temp.spellid, ',');
                getline(myfile, temp.Incantation, ',');
                getline(myfile, temp.Spell_Name, ',');
                getline(myfile, temp.Effect, ',');
                getline(myfile, temp.light, '\n');
                information.push_back(temp);
            }
            for (int i = 1; i < information.size(); i++)
            {
                cout << information[i].spellid << " " << information[i].Incantation << " " << information[i].Spell_Name << " " << information[i].Effect << " " << information[i].light << endl;
            }
            myfile.close();
            information.clear();
        }
        else if (option == 2)
        {
            cin >> temp.spellid >> temp.Incantation >> temp.Spell_Name >> temp.Effect >> temp.light;
            fstream myfile;
            myfile.open("text.txt", ios ::app);
            myfile << temp.spellid << "," << temp.Incantation << "," << temp.Spell_Name << "," << temp.Effect << "," << temp.light << "\n";
            myfile.close();
        }
        else if (option == 3)
        {
            string delete_entry;
            cout << " which line you want to delete:";
            cin >> delete_entry;
            vector<name> information;
            fstream myfile;
            myfile.open("text.txt", ios ::in);
            while (myfile.good())
            {
                getline(myfile, temp.spellid, ',');
                getline(myfile, temp.Incantation, ',');
                getline(myfile, temp.Spell_Name, ',');
                getline(myfile, temp.Effect, ',');
                getline(myfile, temp.light, '\n');
                information.push_back(temp);
            }
            myfile.close();
            myfile.open("text.txt", ios ::out);
            for (int i = 0; i < information.size(); i++)
            {
                if (information[i].spellid != delete_entry)
                {
                    myfile << information[i].spellid << "," << information[i].Incantation << "," << information[i].Spell_Name << "," << information[i].Effect << "," << information[i].light << "\n";
                }
            }
            myfile.close();
            information.clear();
        }
        else if (option == 4)
        {
            vector<name> information;
            fstream myfile;
            myfile.open("text.txt", ios ::in);
            while (myfile.good())
            {
                getline(myfile, temp.spellid, ',');
                getline(myfile, temp.Incantation, ',');
                getline(myfile, temp.Spell_Name, ',');
                getline(myfile, temp.Effect, ',');
                getline(myfile, temp.light, '\n');
                information.push_back(temp);
            }
            myfile.close();
            int search;
            cout << "which entry you wanna search:";
            cin >> search;
            cout << "Incantation:" << information[search].Incantation << "\nSpell Name:" << information[search].Spell_Name << "\nEffect:" << information[search].Effect << "\nLight:" << information[search].light << endl;
            information.clear();
        }
        else if (option == 5)
        {
            vector<name> information;
            fstream myfile;
            myfile.open("text.txt", ios ::in);
            while (myfile.good())
            {
                getline(myfile, temp.spellid, ',');
                getline(myfile, temp.Incantation, ',');
                getline(myfile, temp.Spell_Name, ',');
                getline(myfile, temp.Effect, ',');
                getline(myfile, temp.light, '\n');
                information.push_back(temp);
            }
            myfile.close();
            int entry;
            cout << "what entry you wanna update?\n";
            cin >> entry;
            int part;
            cout << "what part of the entry you want to update?\n"
                 << "1)Incantation\n"
                 << "2)Spell Name\n"
                 << "3)Effect\n"
                 << "4)Light\n";
            cout << "enter your answer:";
            cin >> part;
            if (part == 1)
            {
                cin >> information[entry].Incantation;
            }
            else if (part == 2)
            {
                cin >> information[entry].Spell_Name;
            }
            else if (part == 3)
            {
                cin >> information[entry].Effect;
            }
            else
            {
                cin >> information[entry].light;
            }
            myfile.open("text.txt", ios ::out);
            for (int i = 0; i < information.size(); i++)
            {

                myfile << information[i].spellid << "," << information[i].Incantation << "," << information[i].Spell_Name << "," << information[i].Effect << "," << information[i].light << "\n";
            }
            myfile.close();
            information.clear();
        }

        else if (option == 6)
        {
            key = false;
        }
    }
}