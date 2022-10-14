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

## Constructors and destructors  
Constructors cannot be called explicitly as if they were regular member functions. They are only executed when a new object of that class is created. 

In order to avoid unexpected values due to  uninitialized variables , a class can include a special function called constructor, which is automatically called whenever a new object of this class is created. This constructor function must have the same name as the class, and cannot have any return type; not even void. 



Constructors are special methods with special declarations. Constructor declarations don’t state a return type, and their name matches the class’s name. 

The destructor must have the same name as the class, but preceded with a tilde sign (~) and it must also return no value. 
## Member functions 
 are operators and functions that are declared as members of a class.
## instantiation 
The act of creating a new definition of a function, class, or member of a class from a template declaration and one or more template arguments is called template instantiation.
## this Pointer
Remember that methods are associated with classes and that instances of classes are objects. When you program a method, sometimes you need to access the current object, which is the object that is executing the method.
## Friend class 
Friend Class A friend class can access private and protected members of other class in which it is declared as friend.

## Memory allocation :
- Operators new and new[] 
In order to request dynamic memory we use the operator new. new is followed by a data type specifier and -if a sequence of more than one element is required- the number of these within brackets []. It returns a pointer to the beginning of the new block of memory allocated.
 Its form is:
 - pointer = new type
 - pointer = new type [number_of_elements] 

## Memory Deallocation :


- Operators delete and delete[] 
Since the necessity of dynamic memory is usually limited to specific moments within a program, once it is no longer needed it should be freed so that the memory becomes available again for other requests of dynamic memory. This is the purpose of the operator delete, whose format is: 
-  delete pointer;
-  delete [] pointer;
## Sed :

- sed is a stream editor. A stream editor is used to perform basic text transformations on an input stream (a file or input from a pipeline).

- For example, to replace all occurrences of ‘anas’ to ‘what’ in the file b.txt:
sed 's/anas/what/' b.txt
## References
- A reference is an alias for an already existing variable. Once a reference is initialized to a variable, it cannot be changed to refer to another variable. Hence, a reference is similar to a const pointer. 
- References are most common as function parameters, where they are used to avoid copying. 
- References are safer, more convenient versions of pointers. You declare references with the & declarator appended to the type name. References cannot be assigned to null (easily), and they cannot be reseated (or reassigned). 
- When to Use References : 
- 1 Whenever you want to actually modify an input parameter/argument (i.e. a local variable from another function) 
- 2  To avoid making a copy when passing big struct or class objects – Because no copy will be made, (pass-by-value would have wasted time copying contents to new memory)


- Initialization of references :  
Once a reference has been initialized, it cannot be modified to refer to another object.

## Module 02

- New rules :  I should use Orthodox Canonical Form 
four required member functions below:
 • Default constructor
 • Copy constructor 
• Copy assignment operator
 • Destructor


- The Orthodox Canonical Class Form : 
• A default constructor: used internally to initialize objects and data members when no other value is available.
• A copy constructor: used in the implementation of call-by-value parameters.
• An assignment operator: used to assign one value to another.
• A destructor: Invoked when an object is deleted.


- Fundamental Types 


Fundamental types are the most basic types of object and include integer, floating-point, character, Boolean, byte, size_t, and void. Some refer to fundamental types as primitive or built-in types because they’re part of the core language and almost always available to you. These types will work on any platform, but their features, such as size and memory layout, depend on implementation.


- Floating-Point Types : 
Floating-point types store approximations of real numbers (which in our case can be defined as any number that has a decimal point and a fractional part, such as 0.33333 or 98.6).
Although it’s not possible to represent an arbitrary real number exactly in computer memory, it’s possible to store an approximation.
If this seems hard to believe, just think of a number like π, which has infinitely many digits. With finite computer memory, how could you possibly represent infinitely many digits? 



• As with all types, floating-point types take up a finite amount of memory, which is called the type’s precision. The more precision a floating-point type has, the more accurate it will be at approximating a real number.
-  C++ offers three levels of precision for approximations: 
• float single precision
• double double precision
• long double extended precision
•All floating-point numbers are signed.  
![image](https://user-images.githubusercontent.com/79755743/195878960-e56acb1a-04c7-4c59-b0b8-4e24c676328c.png)

## Accuracy vs. Precision


Accuracy and precision are two concepts in measurement that nicely capture the different properties of ints and floats (on any system, independent of the particular floating point representation used). "Accuracy" refers to how close a measurement is to the true value, whereas "precision" has to do with how much information you have about a quantity, how uniquely you have it pinned down.

##  fixed-point numbers :
A fixed point number just means that there are a fixed number of digits after the decimal point. A floating point number allows for a varying number of digits after the decimal point.  
- C++ supports integer arithmetic and floating-point arithmetic, but it does not support fixed-point arithmetic.

## ADHOC POLYMORPHISM 
- Ad Hoc Polymorphism: Function Overloading :
 Ad hoc polymorphism is function overloading. When you declare and define several versions of a function the function name remains the same but the function signature changes, meaning the number of function parameters and the types of those parameters varies from one version of the overloaded function to another. The decision regarding which version of the function to call is made by the compiler at compile time using the number and types of arguments passed in the function call. If the compiler finds a function matching the signature of the function call then it uses that version of the function. Failure to find a match results in a compiler error.  
 

## Stream extraction and insertion
The overloads of operator>> and operator<< that take a std::istream& or std::ostream& as the left hand argument are known as insertion and extraction operators. Since they take the user-defined type as the right argument , they must be implemented as non-members.

## Module 03

### Inheritance
The capability of a class to inherit the properties of some other class is known as Inheritance. The class whose properties are inherited is called the base class while the class which inherits the properties is known as the derived class.
- Briefly, inheritance lets us say that a particular class inherits from another class. Ordinarily, we can use an object of an inherited class as if it were an object of the same type as the class from which it inherits
• Benefits of inheritance :
- code reuse
-  adopt or extend the behavior of an existing class or set of classes
• NOTE : All members of a class except Private, are inherited 


### Syntax of Inheritance :
class Subclass_name : access_mode Superclass_name


### public, protected and private inheritance in C++ :



- public, protected, and private inheritance have the following features:
 - •  public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
 - •  protected inheritance makes the public and protected members of the base class protected in the derived class.
 - •  private inheritance makes the public and protected members of the base class private in the derived class.


### Order of Constructor/ Destructor Call in C++
- In reverse order of construction: First constructed, last destructed.
- Why ?
The destructors are called in exactly the reverse order of the constructors – this is important because of potential dependencies.
## Module 04

### Subtype polymorphism 

- Many programming languages provide a variety of implicit conversions (some- times called "coercions") that serve to make programs more succinct; the most widespread example is the conversion of integers to real (floating-point) num-bers. In modern type systems, such conversions are captured by the concept of subtyping. Subtype polymorphism is also known as runtime polymorphism
When θ < θ, we say that θ is a subtype of θ or, occasionally, that θ' is a supertype of 0.
 
- In programming language theory, subtyping (also subtype polymorphism or inclusion polymorphism) is a form of type polymorphism in which a subtype is a datatype that is related to another datatype (the supertype) by some notion of substitutability, meaning that program elements, typically subroutines or functions, written to operate on elements of the supertype can also operate on elements of the subtype. 

- Key Concept: Polymorphism in C++
- . The key idea behind OOP is polymorphism. Polymorphism is derived from a Greek word meaning “many forms.”  We speak of types related by inheritance as polymorphic types, because we can use the “many forms” of these types while ignoring the differences among them. 
- . The fact that the static and dynamic types of references and pointers can differ is the cornerstone of how C++ supports polymorphism. 
When we call a function defined in a base class through a reference or pointer to the base class, we do not know the type of the object on which that member is executed. The object can be a base-class object or an object of a derived class. If the function is virtual, then the decision as to which function to run is delayed until run time. The version of the virtual function that is run is the one defined by the type of the object to which the reference is bound or to which the pointer points.

## Abstract classes
Abstract classes are used to represent general concepts (for example, Shape, Animal), which can be used as base classes for concrete classes (for example, Circle, Dog). 
- Pointers and references to an abstract class can be declared.
- No objects of an abstract class can be created and no non-static data members whose type is an abstract class can be declared.
- Abstract types cannot be used as parameter types, as function return types, or as the type of an explicit conversion 
-  By definition, an abstract class in C++ is a class that has at least one pure virtual function.
-  An abstract class cannot be instantiated, which means that we cannot create an instance or object for an abstract class. The object cannot be created because the class is not implemented fully.

### What is a “virtual member function”? 
A virtual function allows derived classes to replace the implementation provided by the base class. 

### pure virtual method 
The =0 suffix specifies a pure virtual method , meaning you can’t instantiate a BaseClass—only derive from it. 

### Access Control
A member of a class can be private, protected, or public:
- • If it is private, its name can be used only by member functions and friends of the class in which it is declared. 
- • If it is protected, its name can be used only by member functions and friends of the class in which it is declared and by member functions and friends of classes derived from this class.
- • If it is public, its name can be used by any function.


### Shallow Copy and Deep Copy in C++
#### When to use deep copy ?
- the variables of an object have been dynamically allocated, then it is required to do a Deep Copy in order to create a copy of the object.
 #### Shallow Copy  (Memberwise copy)
The implicit methods copy the content of the attributes of the class, i.e. they perform a bit-by-bit copy of their content (shallow copy)
#### Deep Copy  
If an attribute of the class is a pointer, e.g. to an array the bit-by-bit copy is not enough, since it results in copying the address and not the objects that are pointed.
- We need a deep copy that copies all the  objects pointed, or we risk that the  destruction of a copied object destroys the  original.
- A deep copied object causes no issue to the source:  it has its own copy of the resources.

## Module 05

### Exceptions :
- An exception is an occurrence of an undesirable situation that can be detected during
program execution. For example, division by zero is an exception. Similarly, trying to open an input file that does not exist is an exception, as is an array index that goes out of bounds.
- exceptions provide a way to react to exceptional circumstances (like runtime errors) in programs by transferring control to special functions called handlers.
- The notion of an exception is provided to help get information from the point where an error is detected to a point where it can be handled. A function that cannot cope with a problem throws an exception, hoping that its (direct or indirect) caller can handle the problem. A function that wants to handle a kind of problem indicates that by catching the corresponding exception.


### Why?
There are situations when an exception occurs, but you don’t want the program to simply ignore the exception and terminate. For example, a program that monitors stock performance should not automatically sell if the account balance goes below a certain level. It should inform the stockholder and request an appropriate action. Similarly, a program that monitors a patient’s heartbeat cannot be terminated if the blood pressure goes very high. A program that monitors a satellite in space cannot be terminated if there is a temporary power failure in some section of the satellite.

#### THROWING AN EXCEPTION throw()
In order for an exception to occur in a try block and be caught by a catch block, the
exception must be thrown in the try block. 
- The general syntax to throw an exception is : 
throw expression; 
-  in which expression is a constant value, variable, or object. The object being thrown can be either a specific object or an anonymous object. It follows that in C++, an exception is a value.


#### ORDER OF catch BLOCKS       catch() 
A catch block can catch either all exceptions of a specific type or all types of excep-
tions. The heading of a catch block specifies the type of exception it handles. As
noted previously, the catch block that has an ellipsis (three dots) is designed to catch
any type of exception. Therefore, if we put this catch block first, then this catch
block can catch all types of exceptions.
Suppose that an exception occurs in a try block and is caught by a catch block. The
remaining catch blocks associated with that try block are then ignored. 
- Therefore, you should be careful about the order in which you list catch blocks following a try block. 



### Creating Your Own Exception Classes
Whenever you create your own classes or write programs, exceptions are likely to
occur. As you have seen, C++ provides numerous exception classes to deal with
these situations. However, it does not provide all of the exception classes you will ever need.  <br />
Therefore, C++ enables programmers to create their own exception classes to
handle both the exceptions not covered by C++’s exception classes and their own
exceptions. 

- C++ uses the same mechanism to process the exceptions that you define as it uses
for built-in exceptions. However, you must throw your own exceptions using the
throw statement.
- In C++, any class can be considered an exception class.  <br />
- Therefore, an exception class is simply a class. It need not be inherited from the class exception. What makes a class an exception is how you use it.  <br />
The exception class that you define can be very simple in the sense that it does not
contain any members. For example, the following code can be considered an exception class: <br />
class dummyExceptionClass
{
};


### Nested class
A nested class is declared within the scope of another class. The name of a nested class is local to its enclosing class. Unless you use explicit pointers, references, or object names, declarations in a nested class can only use visible constructs, including type names, static members, and enumerators from the enclosing class and global variables.
