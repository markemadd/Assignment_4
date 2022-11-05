//
//  main.cpp
//  Assignment 4
//
//  Created by Mark Emad  on 29/10/2022.
//

#include <iostream>
#include "Chaining.h"
#include "Linear Probing.h"
using namespace std;
int main() {
      
    string name_1,name_2,name_3,name_4,name_5,name_6,name_7,name_8,name_9;
    employee e1("Mina", 30, 10000, 4);
    employee e2("Fawzy", 45, 5000, 8);
    employee e3("Yara",19,2000,0);
    employee e4("Mariam",32,8000,2);
    employee e5("Ayman",33,4000,8);
    employee e6("Roshdy",28,9000,3);
    employee e7("Aya", 26,6000,3);
    employee e8("Abdallah",29,7000,4);
    employee e9("Fatma", 21,3000,1);
    name_1=e1.get_name();
    name_2=e2.get_name();
    name_3=e3.get_name();
    name_4=e4.get_name();
    name_5=e5.get_name();
    name_6=e6.get_name();
    name_7=e7.get_name();
    name_8=e8.get_name();
    name_9=e9.get_name();

    chaining h(13);      // insert the keys into the hash table
    cout<<"employee's names(using seperate chaining): "<<endl;
    h.insert(name_1);
    h.insert(name_2);
    h.insert(name_3);
    h.insert(name_4);
    h.insert(name_5);
    h.insert(name_6);
    h.insert(name_7);
    h.insert(name_8);
    h.insert(name_9);
    h.display();
   
    
    
    linear_probing l(15);
    cout<<"employee's names(using linear probing): "<<endl;
    l.Probing_insertion(name_1);
    l.Probing_insertion(name_2);
    l.Probing_insertion(name_3);
    l.Probing_insertion(name_4);
    l.Probing_insertion(name_5);
    l.Probing_insertion(name_6);
    l.Probing_insertion(name_7);
    l.Probing_insertion(name_8);
    l.Probing_insertion(name_9);
    l.display_linear();
    cout<<endl;
        
    return 0;
}
