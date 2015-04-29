1. What is the difference between C and C++?

- C++ is multiparadigm (not pure OOP, supports both procedural and object oriented), while C follows more procedural style
programming.
- In C, data security is less, but in C++, you can use modifiers for your class members to make it inaccessible from outside.
C follows top-down approach (solution is created in a step-by-step manner, like each step is processed into details as 
we proceed), but C++ follows a more bottoms-up approach (where base elements are established first and are linked to make complex
solutions).
- C++ supports function overloading while C does not support it.
- C++ allows use of functions in structures, but C does not permit that.
- C++ supports reference variables (two variables can point to the same memory location). C does not support this.
- C does not have a built in exception handling framework, though we can emulate it with other mechanism. C++ directly supports
exception handling, which makes the life of the developer easy.

2. What is a class?
 
Class defines a datatype, its type definition of a category of things. But a class actually does not define the data, it just 
specifies the structure of the data. To use them, you need to create objects outside the class. Class can be considered the 
blueprint of a building, you cannot stay inside the blueprint of a building, you need to construct buildings out of that plan.
You can create any number of buildings from a blueprint, similarly you can create any number of objects from a class.

3. What is an object/instance?

Object is the instance of a class, which is concrete. From the above example, we can create instance of class vehicle as
given below <br>
`Vehicle vehicleObject;` <br>
We can have different objects of the class vehicle, for example we can have vehicle types with two tires, four tires, etc.
Similarly different engine capacities as well.

4. What do you mean by C++ access specifiers?

Access specifiers are used to define how the members (functions and variables) can be accessed outside the class. There are
three access specifiers defined which are public, private, and protected.
- private: Members declared as private are accessible only within the same class and they cannot be accessed outside the 
class they are declared.
- public: Members declared as public are accessible from anywhere.
- protected: Members declared as protected cannot be accessed from outside the class except a child class. This access
specifier has significance in the context of inheritance.

5. What are the basic concepts of OOP?
- Encapsulation: Encapsulation is the mechanism by which data associated operations/methods are bound together and thus hide
the data from the outside world. It's also called data hiding. 
