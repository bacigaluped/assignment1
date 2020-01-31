#include "map.h"
#include "string.h"
#include "object.h"
#include <cstdlib>
#include <cassert>

void testPutGet() {
  String* key = new String("key");
  String* val = new String("value");
  Map* m = new Map();

  assert(!m->containsKey(key));
  assert(m->size() == 0);


  m->put(key, val);
  assert(m->containsKey(key));
  assert(val->equals(m->get(key)));
  assert(m->size() == 1);

  m->put(new String("key2"), val);

  assert(m->containsKey(new String("key2")));
  assert(m->size() == 2);
  assert(val->equals(m->get(new String("key2"))));

  m->put(new String("key"), new String("new val"));
  assert(m->size() == 2);
  String* new_string = new String("new val");
  assert(new_string->equals(m->get(key)));
}

void testRemove() {
  String* key = new String("key");
  String* val = new String("value");
  Map* m = new Map();

  m->put(key, val);
  m->put(new String("key2"), val);

  assert(m->size() == 2);
  assert(m->containsKey(key));

  m->remove(key);

  assert(m->size() == 1);
  assert(!m->containsKey(key));
}

void testClear() {
  String* key = new String("key");
  String* val = new String("value");
  Map* m = new Map();

  m->put(key, val);
  m->put(new String("key2"), val);

  assert(m->size() == 2);
  assert(m->containsKey(key));
  assert(m->containsKey(new String("key2")));

  m->clear();

  assert(m->size() == 0);
  assert(!m->containsKey(key));
  assert(!m->containsKey(new String("key2")));
}

void testHashandEquals() {
  Map* m1 = new Map();
  Map* m2 = new Map();

  assert(m1->equals(m2));
  String* key = new String("key");
  String* val = new String("val");
  m1->put(key, val);

  assert(!m1->equals(m2));
  assert(m1->hash() != m2->hash());

  m2->put(key, val);

  assert(m1->equals(m2));
  assert(m1->hash() == m2->hash());

  m1->put(key, new String("new val"));

  assert(!m1->equals(m2));
  assert(m1->hash() != m2->hash());

  m2->remove(key);
  m2->put(new String("new key"), new String("new val"));

  assert(!m1->equals(m2));
  assert(m1->hash() != m2->hash());
}

int main(int argc, char** argv) {
  testPutGet();
  testRemove();
  testClear();
  testHashandEquals();

  return 0;
}
