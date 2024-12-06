## Basic OOP Terminology
### Eduardo Robles
### 12/06/24
### 2143 OOP
### Description: 
#### Provides definitions and examples of all of the OOP concepts you see below.

#### Abstract Classes and Interfaces
Abstract Classes: Classes that cannot be instantiated and may have abstract methods (without implementation) and concrete methods (with implementation). They are designed to be extended.
java
Copy code
abstract class Animal {
    abstract void sound(); // Abstract method
    void sleep() { // Concrete method
        System.out.println("Sleeping...");
    }
}
![image](https://github.com/user-attachments/assets/7e5b9a32-c219-4aba-b1aa-9a7fd4cd48fd)

Interfaces: Define a contract that implementing classes must follow. Methods in an interface are abstract by default (Java 8+ allows default methods).
java
Copy code
interface Animal {
    void sound();
}
#### Abstraction
Hiding implementation details while showing essential features. Achieved using abstract classes, interfaces, or encapsulation.
python
Copy code
class Car:
    def start_engine(self):
        pass  # Abstract method
#### Access Modifiers
Public: Accessible anywhere.
Private: Accessible only within the class.
Protected: Accessible within the class and subclasses.
cpp
Copy code
class Example {
public:
    int x;
private:
    int y;
protected:
    int z;
};
#### Attributes/Properties
Variables that hold data about an object.
python
Copy code
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
#### Class Variables 
Variables shared across all instances of a class.
python
Copy code
class Person:
    population = 0  # Class variable
#### Classes and Objects
Class: Blueprint for creating objects.
Object: Instance of a class.
python
Copy code
class Dog:
    pass

my_dog = Dog()
#### Collections and Iterators
Collections like lists or maps and iterators to traverse them.
java
Copy code
List<Integer> numbers = new ArrayList<>();
for (int num : numbers) {
    System.out.println(num);
}
#### Composition
A "has-a" relationship where an object contains other objects.
python
Copy code
class Engine:
    pass

class Car:
    def __init__(self):
        self.engine = Engine()  # Composition
#### Constructors and Desctructors 
Constructor: Initializes an object.
Destructor: Cleans up an object (optional in some languages like Python).
cpp
Copy code
class Example {
public:
    Example() { cout << "Constructor"; }
    ~Example() { cout << "Destructor"; }
};
####  Design Patterns (e.g., Singleton, Factory, Observer)
Common solutions to recurring problems, e.g., Singleton, Factory, Observer.
java
Copy code
class Singleton {
    private static Singleton instance;
    private Singleton() {}
    public static Singleton getInstance() {
        if (instance == null) instance = new Singleton();
        return instance;
    }
}
#### Encapsulation
Hiding internal details and exposing only necessary parts.
python
Copy code
class BankAccount:
    def __init__(self):
        self.__balance = 0  # Private attribute

    def deposit(self, amount):
        self.__balance += amount
#### Exception Handling
Handling runtime errors gracefully.
python
Copy code
try:
    x = 1 / 0
except ZeroDivisionError as e:
    print(e)
#### File I/O in OOP
Reading and writing files using objects.
python
Copy code
class FileManager:
    def read_file(self, path):
        with open(path, 'r') as file:
            return file.read()
#### Friends 
In C++, a friend function or class can access private members.
cpp
Copy code
class Example {
    friend void show(Example e);
private:
    int x;
};
#### Generics and Templates
Enable type safety and reusability.
java
Copy code
class Box<T> {
    private T item;
}
#### Inheritance 
Deriving new classes from existing ones.
python
Copy code
class Animal:
    pass

class Dog(Animal):
    pass
#### Instance Variable
Specific to each instance of a class.
python
Copy code
class Car:
    def __init__(self, color):
        self.color = color  # Instance variable
#### Member Variable 
Another term for attributes or instance variables.
#### Memory Management (Garbage Collection, Pointers)
Garbage collection in Java/Python; manual in C++ with pointers.
#### Method Overloading
Multiple methods with the same name but different parameters.
java
Copy code
class Calculator {
    int add(int a, int b);
    double add(double a, double b);
}
#### Method
A function that is defined inside a class and operates on instances of that class. Methods are used to define the behaviors or actions of objects created from the class.
#### Multiple Inheritance
A class inheriting from more than one class (supported in C++, not Java).
python
Copy code
class A:
    pass

class B:
    pass

class C(A, B):
    pass
#### Multithreading in OOP (Time Permitting)
Parallel execution of tasks.
java
Copy code
class MyThread extends Thread {
    public void run() {
        System.out.println("Thread is running.");
    }
}
#### Object Relationships (Association, Aggregation, Composition)
Association: Loose connection.
Aggregation: "Has-a" but independent lifetime.
Composition: "Has-a" and dependent lifetime.
#### Object-Oriented Design Principles

#### Operator Overloading
Definition: The process of defining or modifying the behavior of operators (like +, -, *, etc.) for user-defined types (e.g., classes, structs).
#### Overloading
Having multiple functions or methods with the same name but different parameter lists (number, type, or order of parameters).
#### Polymorphism
Objects can take many forms, typically via inheritance.
java
Copy code
Animal a = new Dog();  // Dog is treated as an Animal
#### Public/Private/Protected
Public: Members are accessible from anywhere.
Private: Members are accessible only within the class where they are defined.
Protected: Members are accessible within the class and its subclasses.
#### SOLID Principles
Best practices for OOP design: Single Responsibility, Open/Closed, Liskov Substitution, Interface Segregation, Dependency Inversion.
#### Static (Methods and Variables)
Shared across all instances of a class (class-level variable).
They retain their value between calls.
#### Testing in OOP (Unit Testing, Test-Driven Development)
Testing individual units or components of a program (e.g., methods, classes) to ensure they work as expected.
A development process where tests are written before the code to ensure functionality is implemented correctly.
#### UML Diagrams and Modeling 
Unified Modeling Language (UML) diagrams are a standard way to visualize and document the design of a system.
#### Virtual
A keyword used in C++ to allow polymorphism by enabling method overriding in derived classes.
