//lang::CwC
#pragma once

#include "object.h"
#include <cstdlib>
#include <cstring>
#include <cstdio> 

/**
 * String: a wrapper for char* and constant char* in order to
 *         allow for easy creating and computation of strings
 * 
 * immutable
 * 
 * author: dermer.s@husky.neu.edu / dermer.s@northeastern.edu
 **/
class String : public Object {
public:
    char* val; // owned

    String(char* c) {
    }

    String(const char* c) {
    }

    ~String() { //destructor
    }

    // hash function based on the equivalence specified by <equals>
    size_t hash() {
    }

    // compares strings based on direct character equivalence
    bool equals(Object *other) {
    }

    // compares the strings based on alphabetical order
    virtual int cmp(String *that) {
    }

    // returns a string made up of the concatination of this string and s
    String* concat(String *s) {
    }

    // getter for the size of this string
    size_t size() {}
};
