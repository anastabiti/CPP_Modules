# CPP_Modules
## Module 01 :
### New Updates (from coding in C to C++) : 
 Goodbye Norminette! . 
I am allowed to use almost everything from the standard library. Thus, instead of sticking to what I already know, it would be smart to use as much as possible the C++-ish versions of the C functions I am used to. 
• However, I can’t use any other external library. It means C++11 (and derived forms) and Boost libraries are forbidden. The following functions are forbidden too: *printf(), *alloc() and free().


## Scope resolution operator ::
The :: (scope resolution) operator is used to qualify hidden names so that you can still use them. You can use the unary scope operator if a namespace scope or global scope name is hidden by an explicit declaration of the same name in a block or class. 

### Namespaces : Namespaces prevent naming conflicts
What does it solve : if you have for example a global variable  A you can create another one with the same name thanks to namespace . The functionality of namespaces is especially useful in the case that there is a possibility that a global object or function uses the same identifier as another one, causing redefinition errors.

- Namespaces allow to group entities like classes, objects and functions under a name. This way the global scope can be divided in "sub-scopes", each one with its own name. 
- A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. 

### using namespace std; (you should use std:: )
 All the elements of the standard C++ library are declared within what is called a namespace, the namespace with the name std. So in order to access its functionality we declare with this expression that we will be using these entities. This line is very frequent in C++ programs that use the standard library, and in fact it will be included in most of the source codes included in these tutorials. 
## example : std::cout 
cout represents the standard output stream in C++, and the meaning of the entire statement is to insert a sequence of characters into the standard output stream (which usually is the screen). 
### example :  std::cin
For example, to read from the standard input, we write std::cin. These names use the scope operator (::)  which says that the compiler should look in the scope of the left-hand operand for the name of the right-hand operand. Thus, std::cin says that we want to use the name cin from the namespace std.
## Class vs Struct
The only difference between a struct and class in C++ is the default accessibility of member variables and methods. In a struct they are public; in a class they are private.
To write object-oriented programs, we need to create a class, as a type, and then instantiate objects as instances of that type.
Using the class keyword rather than struct to open the class definition. This change is strictly stylistic; we can define a class type using either keyword. The only difference between struct and class is the default access level.
  If we use the struct keyword, the members defined before the first access specifier are public; if we use class, then the members are private.
As a matter of programming style, when we define a class intending for all of its members to be public, we use struct. If we intend to have private members, then we use class.
### access specifiers
-In C++, there are three access specifiers: public - members are accessible from outside the class. private - members cannot be accessed (or viewed) from outside the class. protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

