// main.cpp
//
// ICS 45C Fall 2016
// Code Example
//
// This is a brief example that demonstrates how to read input from std::cin
// that is in this format:
//
// * On the first line is an integer specifying n, a number of people
// * On each of the next n lines is a description of one person; each person
//   is described by an integer age (in years), followed by a space, followed
//   by his or her full name
//
// Example input:
//
// 3
// 41 Alex Thornton
// 10 Boo Thornton
// 49 Some Other Guy

#include <iostream>
#include <string>


int main()
{
    // First, we'll find out how many people there are.  A good way to
    // represent that would be as an unsigned integer.
    unsigned int numberOfPeople;
    std::cin >> numberOfPeople;

    // I find that it's wise to move to the next line when you know you
    // should.  We know that the first person is on the next line of input,
    // so we'll have a better change of avoiding a mistake if we move
    // ourselves to the next line.
    std::string temp;
    std::getline(std::cin, temp);

    for (unsigned int i = 0; i < numberOfPeople; i++)
    {
        unsigned int age;
        std::string name;

        // First, we read the age.  Then, knowing that the age will be
        // followed by a space, we can use std::cin.ignore() to skip it.
        // Finally, whatever else is on the line is the person's name.
        std::cin >> age;
        std::cin.ignore(1);
        std::getline(std::cin, name);

        // Each time we read someone's information, we format it differently
        // and print it to the standard output.
        std::cout << "Person: " << name;
        std::cout << " (" << age << " years old)" << std::endl;
    }

    return 0;
}

