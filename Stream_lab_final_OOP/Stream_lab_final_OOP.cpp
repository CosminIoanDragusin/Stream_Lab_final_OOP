// Stream_lab_final_OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
using namespace std;

class Student {

private:
    string nume;
    string prenume;
    int grupa;
public:
    Student() {
        nume = "Stag Town";
        prenume = "Punko";
        grupa = 244;
       // cout << "Constructor fara parametri "<< " Nume " << nume << " Prenume " << prenume << " Grupa " << grupa;
    }
    Student(string s_nume, string s_prenume, int s_grupa) {
        nume = s_nume;
        prenume = s_prenume;
        grupa = s_grupa;
       // cout << "Constructor cu parametri " << " Nume " << nume << " Prenume " << prenume << " Grupa" << grupa;
    }

    friend ostream& operator<<(ostream& o, Student& student)
    {
        o << student.nume << " "<< student.prenume << " "<< student.grupa ;
        return o;
    }
    
    friend istream& operator>>(istream& input, Student& student)
    {
        cout << "Nume student: ";
        input >> student.nume;

        cout << "Prenume student: ";
        input >> student.prenume;

        cout << "Grupa student ";
        input >> student.grupa;

        return input;
    }

    void afisare_student() {
        cout << " Nume " << nume << " Prenume " << prenume << " Grupa " << grupa;
    }

};

int main()
{
    Student un_punct;
    cout << un_punct;
    std::cout << "Hello World!\n";
    Student* student1 = new Student();
    
    ofstream ofs("fisier.txt");
    ofs << un_punct;
    ofs.close();

    Student student3;
    std::cin >> student3;
    std::cout << "\nStudent information entered:\n";
    student3.afisare_student();
}

