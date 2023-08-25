A **class** is a blueprint or a template that defines the properties and methods of a particular type of object. 

An **object**, on the other hand, is an instance of a class, created by using the class definition to allocate memory and initialize its attributes.

A class is a collection of properties(Attributes or data members) or methods(functions) that define the behavior of objects that are created from it.

Class : Person
Data members: name age gender
Function: eat(),sleep()
Object Person P

The four pillars of OOP are:

Encapsulation: Encapsulation is the practice of hiding the internal details of an object from the outside world, and providing access only through a well-defined interface. This ensures that the object's internal state is protected and can only be modified in a controlled manner.

Inheritance: Inheritance is the process by which one class inherits the properties and methods of another class. This allows new classes to be created that are similar to existing ones, but with some additional or modified functionality.

Polymorphism: Polymorphism refers to the ability of an object to take on multiple forms. In OOP, this is achieved through method overriding and method overloading, which allow different objects to respond to the same method in different ways. 

Abstraction: Abstraction is the practice of reducing complexity by hiding unnecessary details and exposing only the essential features of an object. This makes it easier to understand and work with objects, and allows for greater flexibility in the design of the program.


Bank: 
Encapsulation: protecting the personal details of the customer in bank by giving them methods to modify them in a controlled manner

Inheritence: Bank ke subclasses: Checking acc, Saving Account-->inherit properties of Bank and have additional properties.

Polymorphormism:
a single method in both the classes with different implementation like withdraw in both account types; implementatio of withdraw function may be different depending on withdraw limits etc.

Abstraction:
getBalance() method
Now whats the implementation of getBalance no body cares..only we wish that it should return Balance amt .
This reduces code complexity and hides unnecessary details and exposing the essential parts.


Access modifiers are keywords in object-oriented programming languages that specify the level of access that a member of a class has to the outside world. In C++, there are three access modifiers: public, protected, and private.

public: Public members can be accessed from anywhere, both inside and outside of the class. This means that any part of the program can access public members of a class, including other classes.

protected: Protected members are only accessible from within the class and its subclasses. This means that other parts of the program cannot access protected members, but subclasses can access them.

private: Private members can only be accessed from within the class itself. This means that neither other parts of the program nor subclasses can access private members.

Yes, if the data members of a class are marked as private, member functions of that class can still access those data members. In fact, this is a common practice in object-oriented programming, as it allows for greater control over how the data members are accessed and manipulated.


Sure, here are the types of polymorphism, inheritance, abstraction, and encapsulation:

Polymorphism:
a. Compile-time polymorphism: This type of polymorphism is achieved through function overloading and operator overloading. It allows functions with the same name to have different implementations based on the type and number of arguments passed to them.
b. Run-time polymorphism: This type of polymorphism is achieved through virtual functions and is used when a function needs to be called based on the actual object that is executing the function, rather than the type of the pointer or reference to the object.

Inheritance:
a. Single inheritance: This is when a class inherits from only one base class.
b. Multiple inheritance: This is when a class inherits from two or more base classes.
c. Hierarchical inheritance: This is when multiple derived classes inherit from the same base class.
d. Multilevel inheritance: This is when a derived class inherits from a base class, and then that derived class is used as the base class for another derived class.
e. Hybrid:

Abstraction:
a. Data abstraction: This refers to the concept of exposing only the relevant data and hiding the implementation details from the user.
b. Procedural abstraction: This refers to the concept of hiding the implementation details of a function or method from the user by exposing only the input and output parameters.

Encapsulation:
a. Private: Members declared as private can only be accessed within the class.
b. Protected: Members declared as protected can be accessed within the class and its derived classes.
c. Public: Members declared as public can be accessed from anywhere, including outside the class.

Pure virtual functions are used in abstract classes to specify a set of functions that must be implemented by any class derived from the abstract class. When a class derives from an abstract class and does not implement all the pure virtual functions, it remains an abstract class and cannot be instantiated. When all the pure virtual functions have been implemented in the derived class, it can be instantiated.

Abstract classes are used to create a base class that provides an interface for a set of related classes, but does not provide a complete implementation for all the functions.

The reason we use abstract classes is that they allow us to define a common interface for a set of related classes, without having to provide a complete implementation for each class. By defining the common interface in the abstract class, we can ensure that each derived class provides the necessary implementation for the functions.

You are correct that abstract classes cannot be instantiated directly. They are designed to be used as a base class for other classes. When a derived class is created from an abstract class, it must implement all the pure virtual functions defined in the abstract class.

compile-time polymorphism(static polymorphism):
Function overloading is creating multiple functions with the same name but different parameter lists

runtime polymorphism(dynamic polymorphism)
Function overriding is creating a function with the same name and parameter list as an inherited function, but with a different implementation.

- Operator overloading is defining the behavior of an operator (such as +, -, *, /, etc.) when applied to objects of a class 
- Operator overriding is redefining the behavior of an operator inherited from a base class in the derived class.
- Operator overloading involves creating a new function with the operator keyword and the operator symbol as its name
- Operator overriding involves creating a function with the same operator keyword and symbol as the base class, but with a different implementation.

### Use of volatile keyword in C++: 
- The `volatile` keyword ensures that the compiler fetches the actual value from memory every time it's accessed, rather than relying on cached values.