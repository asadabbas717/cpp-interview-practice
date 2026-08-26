# 🧠 C++ Tricky Problems

<div align="center">

### A collection of classic C++ coding problems commonly asked in technical interviews.

Practice **problem-solving**, strengthen your **C++ fundamentals**, and prepare for **coding interviews** through small, focused challenges.

![C++](https://img.shields.io/badge/C++-Solutions-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Interview Prep](https://img.shields.io/badge/Interview-Preparation-success?style=for-the-badge)
![Problems](https://img.shields.io/badge/Problems-15-orange?style=for-the-badge)
![GitHub](https://img.shields.io/github/stars/asadabbas717/CPP_tricky_problems?style=for-the-badge)

</div>

---

## 📌 About This Repository

**CPP_tricky_problems** is a collection of small but important programming problems solved using **C++**.

These problems focus on concepts that frequently appear in:

- 💼 Technical interviews
- 🧑‍💻 Junior developer interviews
- 🧠 Programming assessments
- 🏆 Competitive programming practice
- 📚 C++ learning and revision
- ⚙️ Data Structures & Algorithms preparation

The goal is simple:

> **Learn to solve common programming problems using clear and straightforward C++ implementations.**

Each problem is stored in its own `.cpp` file, making it easy to study, compile, modify, and experiment with independently.

---

## 🔥 Advanced Interview Set

The [`technical_interview_problems`](technical_interview_problems) directory
adds **25 standalone C++17 problems** spanning hash maps, sliding windows,
stacks, linked lists, trees, graphs, dynamic programming, and bit operations.
Its [problem index](technical_interview_problems/README.md) lists each solution
and its target time complexity.

Compile one example on Windows:

```powershell
g++ -std=c++17 technical_interview_problems\01_two_sum_hash_map.cpp -o problem.exe
.\problem.exe
```

---

## 🚀 Problems Included

| # | Problem | Concept | Solution |
|---:|---|---|---|
| 01 | Palindrome Check | Strings, Two Pointers | [`Palindrom.cpp`](./Palindrom.cpp) |
| 02 | Anagram Check | Strings, Sorting | [`anagram.cpp`](./anagram.cpp) |
| 03 | Prime Number Check | Mathematics, Loops | [`checkprime.cpp`](./checkprime.cpp) |
| 04 | Count Duplicate Characters | Strings, Map/Frequency Counting | [`countDuplicateChars.cpp`](./countDuplicateChars.cpp) |
| 05 | Count Even & Odd Numbers | Arrays, Modulo | [`evenoddCount.cpp`](./evenoddCount.cpp) |
| 06 | Factorial | Mathematics, Loops | [`factorial.cpp`](./factorial.cpp) |
| 07 | FizzBuzz | Conditional Logic | [`fizzbuzz.cpp`](./fizzbuzz.cpp) |
| 08 | Find Number in Array | Arrays, Linear Search | [`numberFindinArr.cpp`](./numberFindinArr.cpp) |
| 09 | Remove Duplicate Characters | Strings, Set | [`removeDupChars.cpp`](./removeDupChars.cpp) |
| 10 | Remove Duplicate Numbers | Arrays, Set | [`removeDuplicateNum.cpp`](./removeDuplicateNum.cpp) |
| 11 | Reverse a String | Strings, Iteration | [`reverseString.cpp`](./reverseString.cpp) |
| 12 | Find Second Largest Number | Arrays, Searching | [`secondlargest.cpp`](./secondlargest.cpp) |
| 13 | Two Sum | Arrays, Nested Loops | [`twosum.cpp`](./twosum.cpp) |
| 14 | Count Vowels | Strings, Character Checking | [`vowel.cpp`](./vowel.cpp) |
| 15 | Count Words | Strings, Iteration | [`wordscount.cpp`](./wordscount.cpp) |

---

## 🧩 Topics Covered

The problems in this repository currently cover several important programming fundamentals:

### 🔤 Strings

- Palindrome checking
- Anagram detection
- String reversal
- Duplicate character detection
- Removing duplicate characters
- Counting vowels
- Counting words

### 📦 Arrays

- Linear search
- Even/odd counting
- Duplicate removal
- Finding the second-largest element
- Two Sum

### 🔢 Mathematics

- Prime number checking
- Factorial
- Divisibility

### 🧰 STL & C++ Concepts

- `std::string`
- `std::set`
- `std::map`
- `std::sort`
- Range-based loops
- Arrays
- Conditional statements
- Nested loops

---

## 🎯 Who Is This Repository For?

This repository can be useful if you are:

- Learning C++ fundamentals
- Starting Data Structures & Algorithms
- Preparing for coding interviews
- Practicing common programming questions
- Revising C++ before a technical assessment
- Looking for small problems to improve problem-solving skills

---

## 💡 Recommended Way to Practice

Don't immediately look at the solution.

For each problem:

1. Read the problem name.
2. Try to understand the expected behavior.
3. Write your own solution.
4. Think about the time and space complexity.
5. Compare your implementation with the solution in this repository.
6. Try to improve it using a more efficient algorithm or STL container.

For example, after solving **Two Sum** using nested loops, try solving it again using an `unordered_map` to reduce the average time complexity from **O(n²)** to **O(n)**.

The goal is not just to memorize code — it is to understand the **reasoning behind the solution**.

---

## ⚙️ Getting Started

### 1. Clone the repository

```bash
git clone https://github.com/asadabbas717/CPP_tricky_problems.git
```

### 2. Enter the project directory

```bash
cd CPP_tricky_problems
```

### 3. Compile any problem

Using `g++`:

```bash
g++ Palindrom.cpp -o palindrome
```

### 4. Run it

#### Linux / macOS

```bash
./palindrome
```

#### Windows

```bash
palindrome.exe
```

You can replace `Palindrom.cpp` with any other `.cpp` file in the repository.

---

## 🛠 Requirements

You only need a C++ compiler.

Recommended options:

- GCC / G++
- Clang
- Microsoft Visual C++
- MinGW
- Any IDE with C++ support

Examples of IDEs/editors you can use:

- Visual Studio Code
- Visual Studio
- CLion
- Code::Blocks
- Dev-C++

The programs rely mainly on the **C++ Standard Library**, so no external libraries are required.

---

## 📂 Repository Structure

```text
CPP_tricky_problems/
│
├── Palindrom.cpp
├── anagram.cpp
├── checkprime.cpp
├── countDuplicateChars.cpp
├── evenoddCount.cpp
├── factorial.cpp
├── fizzbuzz.cpp
├── numberFindinArr.cpp
├── removeDupChars.cpp
├── removeDuplicateNum.cpp
├── reverseString.cpp
├── secondlargest.cpp
├── twosum.cpp
├── vowel.cpp
├── wordscount.cpp
├── .gitignore
└── README.md
```

Each source file contains an independent solution that can be compiled and executed separately.

---

## 🧠 Interview Tip

When solving these problems during an interview, don't focus only on getting the correct output.

Be prepared to explain:

- Why you chose a particular approach
- The time complexity
- The space complexity
- Possible edge cases
- Alternative solutions
- How your solution could be optimized

A simple problem can often be used by an interviewer to evaluate how clearly you **think, communicate, and improve a solution**.

---

## 🗺️ Future Roadmap

This repository can continue growing with more interview-focused problems, including:

- [ ] Binary Search
- [ ] Fibonacci Series
- [ ] Armstrong Number
- [ ] Missing Number in Array
- [ ] Maximum Subarray
- [ ] Valid Parentheses
- [ ] Character Frequency
- [ ] String Compression
- [ ] Array Rotation
- [ ] Merge Sorted Arrays
- [ ] Binary Search Variations
- [ ] Linked List Problems
- [ ] Stack & Queue Problems
- [ ] Hashing Problems
- [ ] Recursion Problems
- [ ] Sorting Algorithms
- [ ] Dynamic Programming Basics

---

## 🤝 Contributing

Contributions are welcome!

If you would like to add another tricky C++ interview problem:

1. Fork this repository.
2. Create a new branch.

```bash
git checkout -b add-new-problem
```

3. Add your `.cpp` solution.
4. Use a clear and descriptive filename.
5. Commit your changes.

```bash
git commit -m "Add solution for <problem-name>"
```

6. Push your branch.

```bash
git push origin add-new-problem
```

7. Open a Pull Request.

When contributing, try to keep solutions:

- ✅ Simple
- ✅ Readable
- ✅ Correct
- ✅ Well formatted
- ✅ Easy to understand
- ✅ Relevant to interview preparation

---

## ⭐ Support

If this repository helps you with your **C++ learning or interview preparation**, consider giving it a **⭐ star**.

It helps others discover the repository and motivates continued improvement.

---

## 👨‍💻 Author

**Asad Abbas**

GitHub: [@asadabbas717](https://github.com/asadabbas717)

Repository: [CPP_tricky_problems](https://github.com/asadabbas717/CPP_tricky_problems)

---

<div align="center">

### 💻 Keep Coding. Keep Solving. Keep Improving.

**C++ • Problem Solving • Technical Interviews • DSA**

⭐ **Star the repository if you find it useful!** ⭐

</div>
