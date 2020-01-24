Data Structure: Map

Decision:
We chose to specify a map API for several reasons. We felt that a map would
likely be the most useful data structure to implement given the direction of the
assignments. Maps match the structure of JSON objects which are often the form in
which data is sent through APIs, which is probably what we'll be doing based on
what was said in the lecture and written in the schedule/syllabus. By later \
implementing a map, we'll also be able to easily implement a lot of functionality
of the other two  two data structures.

Map functionality:
The two primary methods of interacting with a Map are "put" and "get". A map
allows us to store key value pairs. Getting a value with a key, like a string is
especially useful because an index is not needed by the user. Additional
functionality of a map includes clearing the data from the map, getting the size
of the map, finding is a key is already in the key set of the map, and removing
a value and key from the map. This current map API supports String -> String and
String -> Object mappings.
