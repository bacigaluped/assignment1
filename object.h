//lang::CwC
#pragma once

#include <cstdlib>

/**
 * Object: a template for any object implemented in the future.
 *         All classes should be some level of subclasses of <Object>.
 * 
 * author: dermer.s@husky.neu.edu / dermer.s@northeastern.edu
 **/
class Object {
public:
    Object() {}

    // Method empty: definition up to the subclasses
    virtual ~Object() {} //destructor

    // Calculates the hash of this object, based on the helper <hash_me_>
    virtual size_t hash() {
    }

    // default equality calculation of an object, should be overrided
    // by any subclasses that care (or overload hash_me_)
    virtual bool equals(Object *other) {
    }
};
