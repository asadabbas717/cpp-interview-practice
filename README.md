# C++ Tricky Problems

A C++ interview-practice collection organized into a fundamentals track and an
advanced data-structures-and-algorithms track. Every file is a standalone
program with a small example in `main`.

## Basic interview problems

[`basic_interview_problems`](basic_interview_problems) contains 25 common
starting-point interview questions:

| Topics | Problems |
|---|---|
| Strings | palindrome, anagram, reverse string, duplicate characters, vowels, words, compression, character frequency |
| Arrays | even/odd count, linear search, duplicate removal, second largest, two sum, missing number, reverse, merge, rotate |
| Logic and math | prime check, factorial, FizzBuzz, Fibonacci, Armstrong number, leap year |
| Searching | binary search |

The files are numbered in a recommended practice order. Start with
[`01_palindrome_check.cpp`](basic_interview_problems/01_palindrome_check.cpp).

## Advanced interview problems

[`technical_interview_problems`](technical_interview_problems) contains 25
more challenging C++17 problems for hash maps, sliding windows, stacks, linked
lists, trees, graphs, dynamic programming, and bit manipulation. Its
[problem index](technical_interview_problems/README.md) includes complexity
notes for each solution.

## Build and run

Use a C++17 compiler. For example, with g++ on Windows:

```powershell
g++ -std=c++17 basic_interview_problems\01_palindrome_check.cpp -o problem.exe
.\problem.exe
```

You can compile an advanced example in the same way:

```powershell
g++ -std=c++17 technical_interview_problems\11_minimum_window_substring.cpp -o problem.exe
.\problem.exe
```

## How to practice

Before checking a solution, describe a brute-force approach, then improve it.
In an interview, be ready to explain complexity, memory use, edge cases, and
why the selected data structure fits the problem.
