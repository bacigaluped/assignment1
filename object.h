#include "stdlib.h"
#pragma once

/* Descriptions and Object API adapted from helper file provided on piazza */
class Object {

public:
  /** Default constructor ensure that hash is initialized */
  Object() {}

  /** Default constructor is virtual to support subclasses */
  ~Object() {}

  /** Returns the object's hash value. Two objects that are equal should
   * have the same hash; object's that are not, may have the same hash.
   * Subclasses should implement hash_me_(). */
  size_t hash();

  /** Use the address of the other object to determine equality. */
  virtual bool equals(Object* other);

  /** Return a newly allocated string describin the object */
  virtual char* to_string();

  /** Print to stdout. */
  virtual void print();
};
