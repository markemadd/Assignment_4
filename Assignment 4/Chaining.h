//
//  Chaining.h
//  Assignment 4
//
//  Created by Mark Emad  on 29/10/2022.
//

#ifndef Chaining_h
#define Chaining_h
#include <iostream>
#include<list>
#include <string>
using namespace std;

class chaining
{
    int storage;    // No. of buckets
 
    // Pointer to an array containing buckets
    list<string> *table;
public:
    chaining(int x){  // Constructor
        this->storage = x;
        table = new list<string>[storage];}
    
    int hashFunction(string x) {
        int sum = 0;
        for(int i=0; i<x.length();i++){
            sum+=x[i];
        }
        return sum%storage;
    }
    
    // inserts a key into hash table
    void insert(string value){
        int i;
        i = hashFunction(value);
        table[i].push_back(value);
}
    
    // deletes a key from hash table
    void delete_value(string value){
        int i = hashFunction(value);// get the hash index of key
        list <string> :: iterator j; // find the key in (index)th list
        for (j = table[i].begin();j != table[i].end(); j++) {
            if (*j == value)
                break;
        }
 
  // if key is found in hash table, remove it
        if (j != table[i].end())
            table[i].erase(j);
}
 
    // hash function to map values to key
    
 
    void display(){
        for (int j=0; j < storage ; j++){
            cout<< j;
        
            for (string x : table[j])
                cout << " --> " << x;
                cout << endl;
         }
    }
    /*void calc(string x){
      int  i=hashFunction(x);
        if
    }*/
};

#endif /* Chaining_h */
