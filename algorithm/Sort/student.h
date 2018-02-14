#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

struct Student{

    string name;
    double score;

    bool operator<(const Student &student){
        return score!=student.score ? score<student.score : name<student.name;
    }    

    friend ostream& operator<<(ostream &os, const Student &student){
        os<<"Student: "<<student.name<<" "<<student.score<<endl;
    }
};
#endif

