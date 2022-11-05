//
//  Linear Probing.h
//  Assignment 4
//
//  Created by Mark Emad  on 30/10/2022.
//

#ifndef Linear_Probing_h
#define Linear_Probing_h
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "Employee.h"
#include <string>
using namespace std;

class linear_probing {
    int capacity;
    string* a=new string[capacity];
    string key;
    int size;
    int collision;
    int rate;
public:
    linear_probing()
    {
        // Initial capacity of hash array
        capacity = 9;
        size = 0;
        a = new string[capacity];
        
        /* for (int i = 0; i < capacity; i++)
         a[i] = NULL;
         
         // basic node with value and key -1
         basic = new HashNode(1, 1);*/
    }
    linear_probing(int x){
        capacity=x;
    }
    int hash_func(string x) {
        unsigned hash = 0;
        for (const char c : x) hash = hash * 101 + c;
            return hash % capacity;
    }
    
    void Probing_insertion(string key){
        int i=hash_func(key);
         if (a[i]!=" "){
             i++;
             collision++;
         }
         a[i]=key;

    }
    
    // Function to delete a key value pair
    string delete_value(string key){
        int hashIndex = hash_func(key);
        while (a[hashIndex] != " ") {
            // if node found
            if (a[hashIndex] == key) {
                a[hashIndex]=" ";
                // Reduce size
                size--;
            }
            hashIndex++;
            hashIndex %= capacity;
        }
        return NULL;    // If not found return null
    }
    // Function to display the stored key value pairs
    void display_linear()
    {
        for (int i = 0; i < capacity; i++) {
            if (a[i] != " ")
                cout << a[i]<<endl;
        }
        //cout<<((collision/capacity)*100)<<endl;
    }
    
};

#endif /* Linear_Probing_h */
