#  Encapsulation

class and structure
every individual class requires a module of it own AND a module is built of .cpp and .h
.h >> the reference of the stuff
.cpp >> the finished of the stuff

every variable in the class called "member" or "attribute"
when you put a function inside the class, all the member variable become global to it >> you don't need to pass anything

class is private by default, whereas struct is public by default

**procedure**
1 - A constructor
A constructor (like a function but not a function) is a procedure that is automatically called when an object is born.
2 - A destructor
A destructor is a procedure that is automatically called right at the last moment before the obj. is getting KILL. 

cin
- white space is a deliminator for cin

cin.getline(location, size); >> included null terminate
- new line is a deliminator for cin.getline
**if user's input beyond size >> cin will fail
 >> if cin.fail
 >> cin.clear
 >> cin.ignore(1000, '\n');
 

