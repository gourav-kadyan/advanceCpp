# Modern C++ Essentials

This document outlines essential topics in modern C++, emphasizing contemporary coding practices and features. These topics are crucial for mastering modern C++ development.

## Memory Management

### `malloc`

- `malloc` is a C function used for dynamic memory allocation.
- Internally, `malloc` typically utilizes a linked list for memory management.
- Alternatively, `malloc` can use `sbreak` to adjust the program's break address, or `mmap` for paging-type allocations.
- It's thread-safe, often maintaining memory arenas for performance.
- `malloc` offers high performance and doesn't corrupt memory.
- It crashes when memory is unavailable or overflows.

### `new`

- `new` is a C++ operator for dynamic memory allocation.
- `new` has variations like `new[]` for array allocation or specifying a specific memory address.
- It performs housekeeping tasks like invoking constructors.
- `new` internally uses `malloc`, and `delete` for cleanup.
- `new[]` invokes constructors multiple times for arrays and uses `delete[]` for cleanup.
- `new()` behaves similarly to `new` but allocates memory at a specific location.

## Modern C++ Topics

1. Default Constructors
2. Destructor Deletion
3. `override` Keyword
4. Member Initializer List
5. In-class Initialization (`{}`)
6. Range-based For Loop
7. `enum class`
8. Constructor Delegation
9. `using` Keyword (Alternative to `typedef`)
10. Uniform Initialization
11. `std::vector`
12. `std::array`
13. `auto` Keyword
14. `decltype`
15. Move Semantics
16. `std::move`
17. Rvalue Reference (`&&`)
18. `noexcept` Specifier
19. `nullptr`
20. `std::shared_ptr`
21. `std::make_shared`
22. `static_cast<target_type>(expression)`
23. `dynamic_cast<target_type>(expression)`

## Learning Structure

### Syllabus

This learning path is divided into four parts:

1. **Essentials of Modern C++**: Core topics covering modern C++ style and practices.
2. **Functional Programming in Modern C++**: Introduction to functional programming concepts in C++ such as lambda expressions.
3. **Concurrency in C++ and C++17**: Exploration of concurrency features including threading and multithreading in modern C++.
4. **STL Mastery**: Effective usage of the C++ Standard Library (STL).

### Recommended Resources

#### Not Recommended:
- ChatGPT
- CodeWithHarry
- CodeWithGennie
- Apna College
- GeeksforGeeks
- Love Babber
- Striver

#### Recommended:
- [Mike Shah's C++ Playlist](https://www.youtube.com/user/xxsharkboy11xx) - Topic-wise tutorials covering essential modern C++ concepts.
- [e(Technically Heavy)](https://etechnicallyheavy.com/) - Annual conference presentations, particularly "Back to Basics" sessions.
- [nullptr.com](https://nullptr.com/) - Website dedicated to modern C++ topics.
- [cppreference.com](https://en.cppreference.com/w/) - Comprehensive C++ reference website.
- [cplusplus.com](http://www.cplusplus.com/) - Another useful C++ reference site.

### Books:
- Basic: *C++: The Complete Reference* (Minimum 5th Edition)
- Medium: *Effective Modern C++* by Scott Meyers (Top 3 C++ programmer recommended)
- Threading: *Concurrency in Action*, 2017 Edition
- Templates: *C++ Templates: The Complete Guide*, 2nd Edition (Focus on modern aspects)

This structured approach and recommended resources will help you effectively learn modern C++ programming and become proficient in its usage.

## Creating Project Files

Create the following files using the `touch` command:

* `Car.{h,cpp}`: Header and implementation files for the `Car` class.
* `ElectricCar.{h,cpp}`: Header and implementation files for the `ElectricCar` class (inheriting from `Car`).
* `DieselCar.{h,cpp}`: Header and implementation files for the `DieselCar` class (inheriting from `Car`).
* `Main.cpp`: Entry point for your program.
* `Functionalities.{h,cpp}`: Optional header and implementation files for shared functionalities.

**Memory Leak Detection:**


## Checking for Memory Leaks

1. **Compile with Address Sanitizer:**

   ```bash
   g++ Main.cpp -fsanitize=address -o app


# Run Valgrind

valgrind --leak-check=full ./app


## Data Binding and Member Functions

Ensure that member functions use data members of the class whenever possible. If a member function doesn't use any data members, consider eliminating it for efficiency and maintainability.

**Constructors and Assignment Operators:**

## Constructors and Assignment Operators

When specifying constructors and assignment operators, consider the following:

* **Default Constructor:** Provides a way to create an object without initializing data members.
* **Parameterized Constructor:** Allows you to initialize specific data members during object creation.
* **Copy Constructor:** Determines how to copy an object (deep or shallow).
* **Move Constructor:** Handles efficient object move operations.
* **Copy Assignment Operator:** Controls how one object's data is copied to another.
* **Move Assignment Operator:** Handles efficient object move assignment.

Default member functions can be used to initialize data members directly, e.g., `std::string m_name { "" };`.

**Object-Oriented Programming (OOP) Principles:**

## OOP Principles

While not enforcing strict OOP structures, here are relevant principles to consider:

* **Abstraction:** Hide implementation details to provide a clear interface for interacting with objects.
* **Polymorphism:** Enable objects of different types to respond to the same message in different ways.
* **Encapsulation:** Bundle data and related methods within a class for controlled access and data integrity.
* **Inheritance:** Create relationships between classes, leveraging code reuse and specialization.
* **Classes and Objects:** Use classes as blueprints for defining object attributes and behavior.

**Go Language and OOP:**


## OOP in Go

Go doesn't directly support traditional OOP structures like classes and inheritance. However, you can still apply OOP principles:

* **Data Models:** Use structs to group data and related functions.
* **State Representation:** Store object state in struct fields.
* **Function Based on Data Type:** Use interfaces and method receivers to achieve polymorphism-like behavior.

**Coding Practices and Recommendations:**


## Coding Practices and Recommendations

* Follow good coding conventions (e.g., camelCase for variables, PascalCase for methods).
* Use clear and concise comments for better code understanding.
* Organize your code into readable and well-structured files.
* Adapt OOP principles to fit Go's strengths and avoid forcing strict OOP patterns.


# Developer's Zone

When developers are in their zone, they have the power to accomplish anything.

## Object-Oriented Programming (OOP) Principles:

- **Model Creation:** Provide a way to create models for data.
- **State Representation:** Represent the state of specific data.
- **Function Execution:** Execute functions based on the type of data.

## Coding Practices:

- Use `{}` for in-class initialization when the default constructor is enabled.
- Use camel case for variables and Pascal case for files to enhance code readability and maintainability.

## Default Constructor and `delete`:

- In modern C++, you can explicitly enable the default constructor using `Car() = default`. 
- Similarly, you can disable functionality using `Car() = delete`.

## `override` Keyword:

- Use `override` to ensure that the function signature matches the base class.
- Example: `float drive() override;`

## Memory Management:

- **Stack:** Static memory allocation, non-scalable.
- **Heap:** Dynamic memory allocation, scalable.

## Pointer Size:

- Pointer size is 8 bytes in 64-bit systems and 4 bytes in 32-bit systems, regardless of the data type.

## Copy Avoidance:

- Minimize unnecessary copying to conserve memory resources.

## Visualization and Debugging:

- Visualize the memory workflow and code structure.
- Utilize tools like debuggers and Valgrind for efficient debugging.

## Const Keyword:

- `const` is applied to the token on its immediate left.
- If nothing to the left, apply `const` to the token on its immediate right.
- When applied to member functions, `const` ensures safety for const objects, indicating that the function won't modify data members.

Incorporating these practices and principles into your development workflow can enhance code quality and efficiency.

# DAY 2: Modern C++ Essentials - Harshit

## Enum Class vs. Enum

### Why Use Enum Class Instead of Enum?

- **Purpose of Enums:**
  - Enums are used for representing categorical data, providing a fixed set of options like gender, week, months, etc.
  - They prevent abuse by restricting values to predefined options.

- **Issues with Plain Enums:**
  1. **Namespace Pollution:**
     - Multiple enums in the same scope can lead to name clashes.
  2. **Unintended Comparisons:**
     - Plain enums allow comparison between different enum types, leading to potentially incorrect logic.
  3. **Implicit Conversion:**
     - Plain enums allow implicit conversion to integer types, which may lead to unexpected behavior.

- **Benefits of Enum Class:**
  1. **Forced Prefixing:**
     - Enum class forces users to prefix enum values with the enum name, reducing namespace pollution.
  2. **Type Safety:**
     - Enum class prevents unintended comparisons between different enum types, enhancing code correctness.
  3. **No Implicit Conversion:**
     - Enum class avoids implicit conversion to integer types, promoting clearer and safer code.

### Vector Architecture

- **Memory Allocation:**
  - Vector data is stored in the heap, utilizing dynamic memory allocation.
- **Pointer Usage:**
  - Vectors primarily use three pointers:
    1. Start address pointer
    2. End address pointer (indicating size)
    3. Max capacity pointer (doubling as needed)
- **Overloaded Constructors:**
  - Vectors provide 15/16 overloaded constructors to accommodate different initialization scenarios.

## Using Keyword

- **Purpose:**
  - `using` keyword serves as an alternative to `typedef` in modern C++.


# Modern C++ Syntax and Debugging Techniques

## String vs. Const Char[]

- When enclosed in double quotes (`""`), text is interpreted as `const char[]`, not a string. It gets converted to a string during compilation.

## Modern C++ Syntax


// Old Syntax
int arr[] = {1, 2, 3};
Engine e1(1, 2, 3);
Engine *e2 = new Engine(500, 600);

// Modern Syntax (Uniform Initialization)
int arr[] {1, 2, 3};
Engine e1{1, 2, 3};
Engine *e2 {new Engine{500, 600}};

# Debugging Techniques and Parameter Passing in C++

## Debugger Setup

Debuggers are essential tools for diagnosing runtime behavior discrepancies in compiled code. Here's a brief guide on how to set up and use a debugger:

1. **Patience:** Debugging requires patience and persistence. It's a meticulous process that involves identifying and fixing issues step by step.

2. **Configuration File:** Most debuggers require a configuration file where you can specify instructions and settings for debugging. This file helps customize the debugger according to your requirements.

3. **Breakpoints:** Set breakpoints at specific lines or functions in your code where you want the debugger to pause execution. This allows you to inspect the program's state at that particular point.

4. **Executing Actions:** Once breakpoints are set, run the program in debugging mode. The debugger will halt execution at the specified breakpoints, allowing you to analyze variables, memory, and the program flow.

## Composition and Aggregation

In object-oriented programming, understanding the difference between composition and aggregation is crucial:

- **Composition:** In a composition relationship, one object (A) "owns" another object (B). When object A is destroyed, object B is also destroyed. For example, if an employee "has a" project, and the employee is deleted, the project should also be deleted.

- **Aggregation:** Aggregation represents a weaker relationship where one object (A) is associated with another object (B), but object B can exist independently of object A. For example, an employee "works on" a project, but if the employee is deleted, the project can still exist.

## Parameter Passing Methods

Understanding different parameter passing methods in C++ is essential for efficient function calls:

### Call by Value

- Parameters are passed by value, creating a copy of the argument.
- Changes made to the parameter within the function do not affect the original argument.
- Ideal for simple data types and situations where the function does not need to modify the original value.

### Call by Reference

- Parameters are passed by reference, allowing functions to directly access and modify the original argument's memory address.
- Changes made within the function using references affect the original argument's value.
- More efficient than call by value as it avoids unnecessary copying, especially for large data structures.

### Call by Pointer

- Parameters are passed by pointer, where the memory address of the argument is passed to the function.
- Changes made within the function using pointers affect the original argument's value.
- Requires explicit dereferencing and incurs additional memory overhead for storing the pointer.

By understanding these debugging techniques and parameter passing methods, you can effectively diagnose and address issues in your C++ programs.

# C++ Evolution and Language Features

## Evolution Inspired by Smalltalk and C

C++ is not merely an extension of the C language; it draws inspiration from both C and Smalltalk, resulting in a unique hybrid language called C++. While C and C++ share some syntax similarities, there are significant differences:

- **Mix Language Concept:** C++ combines the syntax of C with the object-oriented features inspired by Smalltalk. However, unlike C, C++ has its own distinct characteristics, and C code may not necessarily work seamlessly in C++.
  
- **Struct and Class:** In C++, the `struct` keyword serves a similar purpose to the `class` keyword, but with additional features like member functions and access specifiers. Additionally, C++ supports uniform initialization for both structs and classes.
  
- **Convenience Matters:** The convenience and expressiveness of C++ are emphasized, providing developers with powerful abstractions and high-level constructs for efficient coding.
  
## Avoiding "using namespace std;"

Using the `using namespace std;` directive in C++ is generally discouraged due to potential namespace conflicts and ambiguity. By importing the entire `std` namespace into the current scope, you risk shadowing or overriding existing identifiers, leading to unexpected behavior or compilation errors:


int cout = 10;
int endl = 10; // Valid without "using namespace std;"


## Efficient Header File Inclusion

In modern C++, it's recommended to use partial header files instead of including the entire standard library. This practice reduces compilation times and avoids unnecessary dependencies. For instance, instead of including the extensive `bits/stdc++.h`, selectively include only the necessary headers to streamline compilation:


#include <iostream>
#include <vector>
#include <algorithm>


# Incubation Period in Project Development

During the incubation period of a project, various activities are undertaken to ensure project readiness:

- **Skill Training:** Participants undergo training to acquire the necessary skills for the project.
- **Learning Materials:** Materials are prepared to aid in project understanding and implementation.
- **Project Presentations:** Presentations are conducted to showcase project progress and discuss strategies for improvement.

# Evaluation Criteria for Harshit

Evaluation criteria for Harshit are as follows:

- **Minimum Marathon Completion:** Completion of at least 2 out of 3 marathons.
- **Minimum Mega Marathon Completion:** Completion of at least 3 out of 5 mega marathons and scoring at least 50% in the MCQ section.
- **PSD Evaluation:** Evaluation by Swapnilla, Head of PSD, and Mansi, the CEO's daughter, who plays a significant role in the evaluation process due to the company's foreign clientele.

# Unit Testing with cxxtestgen

`cxxtestgen` is a tool used for generating unit tests in C++. It facilitates the automated creation and execution of test cases, ensuring code correctness and reliability.

# Multiple Choice Questions (MCQs) in C++

MCQs in C++ often include code snippets to assess understanding and proficiency in the language. These questions cover a wide range of topics, including syntax, language features, and best practices.

# Auto Keyword in C++

The `auto` keyword in C++ allows you to declare a variable without specifying its data type explicitly, provided that the variable is initialized at the same time. Here are some use cases:

- For each loop
- Iterative for loop (with begin and end iterators)
- Return type of a function
- Lambda variable type
- Function parameter with auto
- Template parameters for lambda (C++14)
- auto&& syntax in for loop


## C++ Best Practices: Optimizing Your Code with auto, decltype, and More

This document explores key best practices for using `auto`, `decltype`, and other powerful features in C++ to write clear, concise, and efficient code.

**Using `auto` Effectively:**

* **Clarity over Convenience:** While `auto` simplifies syntax, prioritize clear code over excessive use. Consider:
    * **When you understand the deduced type:**
        ```c++
        auto itr = v.begin(); // reasonable if you know the return type of v.begin()
        ```
    * **When clarity is paramount:**
        ```c++
        std::vector<int>::iterator itr = v.begin(); // explicitly specifying the type for better readability
        ```
* **Context Awareness:**
    * Ensure `auto` accurately deduces the type based on the context.
    * Avoid `auto` in complex scenarios like function arguments or templates where the type might not be clear.
* **Cpp20 Magic:**
    * Take advantage of Cpp20's `auto` improvements for more flexibility (e.g., `auto(x) = y;`).
* **Rule of Thumb:** Use `auto` judiciously, prioritizing readability and maintainability.

**Leveraging `decltype`:**

* **Type Deduction Control:**
    * Use `decltype` when you need precise type information beyond what `auto` provides:
        ```c++
        decltype(v1) v2 {1,2,3}; // creates a v2 vector with the same type as v1
        ```
* **Templated Functions and Variables:**
    * Employ `decltype` within templates to ensure consistent type behavior across different instantiations.
* **Advanced Use Cases:**
    * For complex scenarios involving expression types or references, `decltype` offers deeper type control.

**Additional Best Practices:**

* **Meaningful Variable Names:** Choose descriptive names that convey the purpose of variables.
* **Consistent Formatting:** Adhere to established formatting conventions for improved readability.
* **Clear and Concise Comments:** Use comments to explain complex logic or non-obvious code sections.
* **Modern C++ Features:** Explore features like `constexpr`, range-based for loops, and move semantics for efficient code.
* **Testing and Profiling:** Write comprehensive tests and use profiling tools to identify and fix performance bottlenecks.
* **Practice and Continuous Learning:** Continuously practice your skills and stay updated with the evolving C++ language.

**Remember:** These are guidelines, not absolute rules. Adapt them to your specific project needs and coding style.

# Day 3 - UML Diagrams and Modern C++ Concepts

## UML Diagrams

### Association
- **Bi-directional Association**: Objects of one class are used as functionalities for another class.
  - Example: Flight and Plane relationship.
  - Notation: `0..* ------------------------- 0..1` (zero or more flights associated with zero or one plane)
- **Uni-directional Association**: 

Example: OverdrawnAccountReport --------------->0..* BankAccount

### Notation
- **0..1**: Zero or one
- **0..***: Zero or more
- **0**: Only zero
- **1**: Only one
- **3**: Only three
- **1..***: One or more
- **0..5**: Zero or five

### Packages
- Multiple classes wrapped in a box.
- Can also be shown with classes inside the box connected by lines.
- Example: 

        +--------------------------------------+
        | Package Box |
        | +----------------------------------+ |
        | | Class A | |
        | +----------------------------------+ |
        | +----------------------------------+ |
        | | Class B | |
        | +----------------------------------+ |
        +--------------------------------------+


## Back to Modern C++

### Move Semantics
- **Definition**: Move semantics allow transferring data from one object to another without duplicating data.
- **Example**: Transfer data from one vector to another efficiently by transferring pointers instead of copying.
- Old Way: Copy data to a new vector and nullify the original vector.
- Better Solution: Transfer ownership of data by transferring pointers and nullifying the original ones.
- **Efficiency**: Significant memory optimization, especially for large data sets.
- **Implementation**: Achieved through call by pointer.
- **Benefits**: Optimize memory usage without copying data, leading to improved performance.

# C++ Tokens and Important Subjects

## C++ Tokens Overview

In C++, every statement is made up of tokens, which are the smallest units of a program. Let's break down an example statement `int n = 4`:

1. **int**: Data type token.
2. **n**: Variable name token (lvalue), representing both memory and name.
3. **=**: Assignment operator token.
4. **4**: Right-hand side (RHS) token, an integer literal (rvalue).

Any data that is not preserved in a fixed location in memory will disappear at the end of the expression, known as a full expression, where it originated. For instance:
- `10;`: This `10` is a temporary (rvalue) token, and after the semicolon `;`, its existence is removed.

In essence:
- Until memory is assigned, it's temporary.
- Once memory is assigned, it persists (remains).

## Must-Have Subjects

Ensure to cover the following subjects:
- **Operating Systems (OS)**
- **Databases**
- **Computer Networks (CN)**
- **Computer Architecture**
- **Distributed Computing** (optional)

These subjects are fundamental and provide a comprehensive understanding of computer science concepts and principles.


## Call by Lvalue and Rvalue in C++: A Deep Dive

This document explores the concepts of call by lvalue and rvalue in C++, their key differences, and how they impact code performance and memory usage.

### Lvalues vs. Rvalues

* **Lvalues:** Represent memory locations (e.g., variables, array elements), having both names and addresses.
* **Rvalues:** Represent values themselves (e.g., literals, function return values), without names but only values.

### Call by Lvalue Reference

* When passing an lvalue to a function by reference (`Magic(std::list<int>& data)`), you provide the memory address.
* Changes within the function affect the original object directly.
* Best suited for modifying the original object.

### Call by Rvalue Reference (Move Semantics)

* When passing an rvalue to a function by rvalue reference (`WeirdMagic(std::list<int>&& data)`), you transfer ownership of the data.
* The function can efficiently "steal" resources from the rvalue without copying.
* Ideal for moving large objects to avoid expensive copying.

### Key Points and Code Analysis

* **Lifetime and Ownership:** In `WeirdMagic`, the rvalue reference `data` owns the list, destroying the original list after the function returns.
* **Efficiency:** Move semantics offers efficiency by avoiding unnecessary copying.
* **Constraints:** `WeirdMagic` can only be called with rvalues (e.g., temporary objects, expressions).
* **Semantics:** Move semantics changes the lifetime and ownership of data.

### Additional Considerations

* **Use Cases:** Move semantics shines for large objects (containers, custom types with expensive copying).
* **Best Practices:** Use `std::move` explicitly to create rvalues from lvalues for moving.
* **Alternatives:** Consider pass-by-value for small objects or when copying is necessary.

### Beyond the Prompt

* Explore "perfect forwarding" (C++11+) to handle lvalues and rvalues seamlessly.
* Learn about "universal references" (C++14+) that accept both lvalues and rvalues.
* Continuously practice using move semantics judiciously for efficient, memory-optimized C++ code.

##Example



    #include<iostream>
    #include<list>

    // Call by lvalue reference
    void Magic(std::list<int>& data) {
        // Function implementation here
    }

    // Call by rvalue reference
    void WeirdMagic(std::list<int>&& data) {
        // Function implementation here
    }

    int main(int argc, char const *argv[]) {   
        std::list<int> l1 {1,2,3,4,5};
        
        // Call by lvalue reference
        Magic(l1);

        // Call by rvalue reference
        // If you want to preserve the data, you have to bind it to a memory address; otherwise, at the ";", it's destroyed.
        // That's why we move to the function using move semantics WeirdMagic(std::list<int> &&data).
        // Now, WeirdMagic controls the life of data.
        // Semantics: We see lifetime, ownership, etc.
        // 1 - WeirdMagic can only be called by an rvalue.
        //     It means the user will never be able to copy one in the caller (Main) function and one in the callee (WeirdMagic) function.
        // 2 - That's a great way to optimize memory.
        WeirdMagic(std::list<int> {1,2,3,4,5});
        
        return 0;
    }

## std::move Function and Lvalue/Rvalue Conversions

This document explains the `std::move` function in C++ and its role in converting lvalues (objects with names and addresses) to rvalues (objects with only values). It also explores different scenarios where you might want to use `std::move` to optimize code and manage ownership of data.

### Lvalues vs. Rvalues: Understanding the Basics

* **Lvalues:** Represent memory locations with names and addresses (e.g., variables, array elements).
* **Rvalues:** Represent values themselves without names (e.g., literals, function return values).

### `std::move`: Converting Lvalues to Rvalues

The `std::move` function takes an lvalue as input and returns an rvalue. This implies transferring ownership of the data from the lvalue to the object receiving the rvalue.

# again move semantics --> scenario --> 
				
				
				scenario 1: Design the function to accept lvalue and rvalue both
					    Allow copy of lvalue and assignment of rvalue
				
				void Magic(std::vector<int> val)
				Main(){
					Magic(........)
				}
				
				        example: 
					     
					     Magic(std::vector<int> {1,2,3});
					     assignment to val
					     
					example:
					 
					     std::vector<int> v {1,2,3};
					     Magic(v) 
					     V 24bytes (pointer) copy to val 
					     copy construction We are contructing val by using 
					     v 
					     
					     
				scenario 2: lvalue to be accepted by reference
					     No rvalues (temporaries, no ownership transfer)
					     No copy of data. Data should become accessible
					     
				
						void Magic(std::vector<int>& val)
						Main(){
							Magic(........)
						}
					
					      example: 
					            
					            std::vector<int> v {1,2,3}
					            Magic(v) --- by reference
					            Magic(std::vector<int> {1,2,3}); -- give compile time
					                 error -- coz reference dissallow the temporary data
					                 means rvalue
					                 
					                 
				scenario 3: I only want a single copy of data
					    I only want rvalues so that user cannot create or 
					    duplicate copy of data in the caller function(main)
					    Data should no longer be owned by Main
					    
					    void Magic(std::vector<int> &&data){}
					                 		
				            example:
				            
				            std::vector<int> v {1,2,3}
				            Magic(v) // by ref --> give compile time error
				            
				            Magic(std::vector<int> {1,2,3}) --> okay
				            
				            Magic(std::move(v)) --> okay --> move convert to rvalue
				            
				            
				            
				scenario 4: I want to design a function where, lvalues are accepted by reference.
					    I also want rvalues to be accepted by assignment.
					    
					    [destination function will only see data as read-only]
					    
					    void Magic(const std::vector<int>& val){}
					    
					    example:
					    
					    Magic(v) // by reference --> okay
					    
					    Magic(std::vector<int> {1,2,3}) // by reference --> okay
					    
					    Magic(std::move(v)) // by rvalue reference --> okay
					    
					
					
# `noexcept` Keyword

## Purpose
Declares a function as non-throwing, indicating it won't throw exceptions.

## Syntax

void show() noexcept {}

# Benefits

- **Prevents unnecessary runtime checks for exceptions:** This can potentially improve performance by avoiding unnecessary overhead.
- **Helps the compiler optimize code generation:** `noexcept` enables the compiler to apply certain optimizations, leading to more efficient code.
- **Enhances code clarity:** By explicitly stating that a function is exception-free, `noexcept` improves code readability and understanding.

# Use Cases

- **When you're confident a function won't throw exceptions:** Use `noexcept` to ensure compiler checks and potential optimizations, providing clarity about the function's behavior.
- **When dealing with code sensitive to exceptions or requiring stability guarantees:** `noexcept` helps in scenarios where stability and predictability are crucial, especially in critical systems.

# Behavior

- **If the function doesn't throw exceptions:**
  - Compiler proceeds normally.
- **If the function throws exceptions:**
  - Compiler issues a warning (default behavior).
  - With `-Werror -Wextra` flags, the compiler generates a compile-time error.

# Why Add Features to Languages?

## Enhancing with New Features

- **Example:** `nullptr` keyword.

## Improving Existing Features

- **Smart Pointers:** Offer more robust and safer memory management compared to raw pointers.
- **Enum Classes:** Addressed drawbacks of traditional C-style enums, providing stronger type safety and scoping.

# nullptr vs. NULL

- **nullptr:** Introduced in C++11 as a pointer-specific null value.
- **NULL:** Macro representing 0, usable with non-pointer types, potentially leading to ambiguity.

### Advantages of nullptr

- **Clearer pointer-specific intent:** nullptr indicates a null pointer, improving code clarity.
- **Improved code readability and type safety:** Using nullptr reduces ambiguity and enhances type safety.

## Day 4: Pointers, Smart Pointers, Casting, and Resource Management

### Pointers and Resource Management

- Pointers in C++ provide a way to manage memory dynamically, but manual memory management can lead to errors like memory leaks and dangling pointers.
- Smart pointers, such as `std::unique_ptr`, `std::shared_ptr`, and `std::weak_ptr`, are C++ features that manage memory automatically, improving memory safety and reducing bugs.
- Resource management using classes and destructors ensures that resources are properly acquired and released, even in the presence of exceptions or early returns.

		ptr  [0x100H]
		     [0x11H]
		name = ptr 
		content = 0x100H
		size = 8 bytes
		address = 0x11H
		
		
		-- Dummy() 
			ex1 ----------------------> Heap [10 | Gourav]
			[0x100H] to [0x107H]
			<-- 8bytes -->
			
			n1
			[0]
			4 bytes
			
			0x45H to  0x48H		  
			
			
		data : pointer ex
		function which is guranteed to execute each time an object is destroyed: destructor
		action before data (ex1) is destroyed : heap allocation using delete ex1     
			


### Smart Pointers and Ownership
- `std::unique_ptr` signifies exclusive ownership and automatically deallocates memory when it goes out of scope, ensuring no memory leaks.

- `std::shared_ptr` allows multiple pointers to share ownership of the same object, automatically deallocating memory when all shared pointers are out of scope.

    a basic layout of shared pointer
                    
                                            HEAP
                                            0X100H	
                                        [ 101 | Gourav | 8000.00f]
                        STACK MEMORY
                    [ 
                        mptr
                    [    0x100H   ]
                    ....
                    ....
                    ....
                    
                    ]
                    <-- shared pointer--->

- `std::weak_ptr` is used to observe and access shared resources without affecting their lifetime, preventing strong reference cycles that can lead to memory leaks.



### Casting and Type Conversion
- Static casting (`static_cast`) is used for safe and explicit type conversions at compile time, ensuring type safety and reducing the risk of errors.
- Dynamic casting (`dynamic_cast`) is used primarily for runtime type checking and conversion, particularly in polymorphic hierarchies, where it performs checks at runtime to ensure safe conversions.
- `const_cast` is used to add or remove `const` qualifiers, providing flexibility in working with `const` objects.
- `reinterpret_cast` is used for low-level reinterpretation of bits, such as converting a pointer to an integer or vice versa, and should be used with caution due to its potential for undefined behavior.

### Stack Implementation and Data Structures
- Implementing data structures like a stack using standard library containers (`std::list`, `std::vector`, etc.) provides efficient and easy-to-use solutions for managing collections of data.
- Understanding and implementing data structures is essential for efficient algorithm design and problem-solving in software development.

### Late Binding and Method Dispatch
- Late binding, or dynamic binding, allows the selection of the appropriate function implementation at runtime, enabling polymorphic behavior in object-oriented programming.
- Dynamic method dispatch is a mechanism in which the method to be executed is determined at runtime based on the actual type of the object, enabling runtime polymorphism in C++.
- Late binding is crucial for enabling runtime polymorphism and supporting object-oriented programming principles like encapsulation, inheritance, and polymorphism.

These concepts form the foundation of effective memory management, type safety, and polymorphic behavior in modern C++ programming.
