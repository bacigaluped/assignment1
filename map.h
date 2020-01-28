#include "object.h"
#include "string.h"

class Map : public Object {
public:

  // Constructor
  Map();

  // Constructor that copies existing Map
  Map(Map* const m);

  // Destructor
  ~Map();

  // Add an Object to the map with a String key
  void put(Object* const key, Object* const val);

  // Remove remove the value tied to the key from the map. Removes the key as well.
  Object* remove(String* const key);

  // Gets the value associated with the key
  Object* get(String* const key);

  // Clears all the keys and values from the map
  void clear();

  // Is the key in the map?
  bool containsKey(String* const key);

  // Get the number of keys in the map
  size_t size();

  // Is this map eual to the Object?
  bool equals(Object* const o);

  // Get the hash of the map object
  size_t hash();
