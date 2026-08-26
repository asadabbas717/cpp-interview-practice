# C++ Basics and OOP Learning Track

Run each lesson independently with a C++17 compiler:

```powershell
g++ -std=c++17 01_hello_and_io.cpp -o lesson.exe
.\lesson.exe
```

| # | Lesson | Core idea |
|---:|---|---|
| 01 | Hello and I/O | console input and output |
| 02 | Variables and types | values, constants, type inference |
| 03 | Conditions | `if`, `else`, `switch` |
| 04 | Loops | `for`, `while`, range-based loops |
| 05 | Functions and references | parameters, return values, mutation |
| 06 | Arrays and vectors | fixed and dynamic sequences |
| 07 | Strings | useful `std::string` operations |
| 08 | STL map and algorithms | associative containers and algorithms |
| 09 | Pointers and smart pointers | ownership basics |
| 10 | Exceptions | reporting recoverable errors |
| 11 | Classes and encapsulation | private state and public behavior |
| 12 | Constructors and static members | object initialization and shared state |
| 13 | Inheritance | an “is-a” relationship |
| 14 | Runtime polymorphism | virtual functions and overriding |
| 15 | Abstract classes | interfaces and pure virtual functions |
| 16 | Composition | a “has-a” relationship |
| 17 | Operator overloading | readable value types |
| 18 | Templates | reusable generic functions |
| 19 | RAII | automatic resource cleanup |
| 20 | Rule of zero | safe classes using standard members |

Work through these in order. Prefer composition to inheritance when an object
does not truly *is-a* specialized version of another object.
