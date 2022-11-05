//
//  Employee.h
//  Assignment 4
//
//  Created by Mark Emad  on 30/10/2022.
//

#ifndef Employee_h
#define Employee_h
#include <iostream>
using namespace std;
class employee{
private:
    string Name;
    int age;
    int salary;
    int experience;
public:
    employee(){
        Name=" ";
        age=0;
        salary=0;
        experience=0;
    }
    employee(string n, int a, int s, int e){
        Name=n;
        age=a;
        salary=s;
        experience=e;
    }
    void set_name(string n){
        Name=n;
    }
    string get_name(){
        return Name;
    }
    void set_age(int a){
        age=a;
    }
    int get_age(){
        return age;
    }
    void set_experience(int e){
        experience=e;
    }
    int get_experience(){
        return experience;
    }
    void set_salary(int s){
        salary=s;
    }
    int get_salary(){
        return salary;
    }
};

#endif /* Employee_h */
