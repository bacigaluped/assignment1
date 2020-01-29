#include "object.h"
#include "string.h"

class Map : public Object {
public:

  // Constructor
  Map();

  // Copy constructor
  Map(Map* const m);

  // Destructor
  ~Map();

  // Add an Object to the map with a String key
  void put(Object* const key, Object* const val);

  // Remove remove the value tied to the key from the map. Removes the key as well.
  void remove(Object* const key);

  // Gets the value associated with the key
  Object* get(Object* const key);

  // Clears all the keys and values from the map
  void clear();

  // Is the key in the map?
  bool containsKey(Object* const key);

  // Get the number of keys in the map
  size_t size();

  // Is this map equal to the Object?
  bool equals(Object* const o);

  // Get the hash of the map object
  size_t hash();

};
