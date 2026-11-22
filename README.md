# Modern C++ Mastery: From Fundamentals to STL & OOP (100% Hand-Typed | No AI Used)

> **Note:** No AI was used in writing any of these code files — every single line of code, comment, and program in this repository was 100% manually typed and written by hand.

A comprehensive, hands-on repository tracking progressive learning and practical exercises in Modern C++ (C++17/C++20). This collection contains 100+ example programs, coding exercises, algorithmic problems, and mini-projects spanning the entire spectrum of C++ development—from basic syntax and memory fundamentals to Object-Oriented Programming, Generic Templates, and the Standard Template Library (STL).

---

## Table of Contents

- [Repository Architecture](#repository-architecture)
- [Curriculum & Module Breakdown](#curriculum--module-breakdown)
  - [1. Basics & I/O (`0_sample_pgms`)](#1-basics--io-0_sample_pgms)
  - [2. Variables & Data Types (`a_variables`)](#2-variables--data-types-a_variables)
  - [3. Primitive Types & Limits (`b_primitive_types`)](#3-primitive-types--limits-b_primitive_types)
  - [4. The `sizeof` Operator & Machine Bounds (`c_size_of_operators`)](#4-the-sizeof-operator--machine-bounds-c_size_of_operators)
  - [5. Constants & Calculations (`d_constants`)](#5-constants--calculations-d_constants)
  - [6. Fixed-Size Arrays (`e_arrays`)](#6-fixed-size-arrays-e_arrays)
  - [7. Dynamic Arrays / Vectors (`f_vectors`)](#7-dynamic-arrays--vectors-f_vectors)
  - [8. Operators & Expressions (`g_Operators`)](#8-operators--expressions-g_operators)
  - [9. Program Flow Control (`h_control_pgm_flow`)](#9-program-flow-control-h_control_pgm_flow)
  - [10. Loops & Iteration (`i_loop`)](#10-loops--iteration-i_loop)
  - [11. Characters, C-Strings & Modern Strings (`j_characters_&_strings`)](#11-characters-c-strings--modern-strings-j_characters__strings)
  - [12. Modular Functions & Call Stack (`k_functions`)](#12-modular-functions--call-stack-k_functions)
  - [13. Pointers & Memory Management (`l_pointers_&_refrences`)](#13-pointers--memory-management-l_pointers__refrences)
  - [14. Object-Oriented Programming (`m_OOPS`)](#14-object-oriented-programming-m_oops)
  - [15. Standard Template Library (`n_(STL)`)](#15-standard-template-library-n_stl)
  - [16. Templates, Inheritance & Advanced OOP (`o_extras`)](#16-templates-inheritance--advanced-oop-o_extras)
  - [17. Capstone Project: Library Management System (`library_mgmt.md`)](#17-capstone-project-library-management-system-library_mgmtmd)
- [Comprehensive Program Index](#comprehensive-program-index)
- [Compilation & Execution Guide](#compilation--execution-guide)

---

## Repository Architecture

```text
.
├── README.md                                  # Repository documentation & guide
└── basics/
    ├── 0_sample_pgms/                         # Entry-level I/O, cin/cout, basic arithmetic
    ├── a_variables/                           # Variable initialization, basic data types
    ├── b_primitive_types/                     # Primitive types (int, float, double, char, unsigned)
    ├── c_size_of_operators/                   # Memory footprint, sizeof, climits, cfloat
    ├── d_constants/                           # const keyword, literal constants, business challenges
    ├── e_arrays/                              # Fixed-size arrays, indexing, multidimensional arrays
    ├── f_vectors/                             # std::vector, dynamic arrays, bounds checking, 2D vectors
    ├── g_Operators/                           # Arithmetic, assignment, increment, casting, logic
    │   ├── Arithematic_O/
    │   ├── Assignment_O/
    │   ├── Bool_O/
    │   ├── Incre_decre_O/
    │   ├── Logical_O/
    │   ├── Relational_O/
    │   └── Type_Casting/
    ├── h_control_pgm_flow/                    # Control structures: if, nested-if, switch, ternary
    │   ├── Conditional_Opearators/
    │   ├── If_statements/
    │   ├── If-else_statements/
    │   ├── Nested-if_statements/
    │   └── switch_statements/
    ├── i_loop/                                # Iteration statements
    │   ├── 1._for_loop/                       # Traditional and range-based for loops
    │   │   └── range_based_for_loop/
    │   ├── 2._while_loop/                     # Event-driven loops
    │   ├── 3._do_while_loop/                  # Post-condition loops
    │   └── 4._nested_loop/                    # Nested loops, histograms, multiplication grids
    ├── j_characters_&_strings/                # C-style char arrays vs std::string, cipher challenge
    ├── k_functions/                           # Modular programming, recursion, call stack
    │   ├── 1.example/
    │   ├── 2.pass_by_value/
    │   ├── 3.parameters/
    │   ├── 4.pass_by_reference/
    │   ├── 5.func_scopes/
    │   ├── 6.call_stack/
    │   └── 7.recursion/
    ├── l_pointers_&_refrences/                # Heap memory, pointer arithmetic, const pointers
    │   ├── 1.basics_of_ptr/
    │   ├── 2.ptr_imp*/
    │   ├── 3.pass_to_func/
    │   └── references/
    ├── m_OOPS/                                # Object-Oriented Programming
    │   ├── 1.basics/                          # Classes, objects, access specifiers
    │   ├── 2.Member_methods/                  # Inline & external member methods
    │   └── 3.Constructor&De_Con/              # Default, parameterized, copy constructors
    ├── n_(STL)/                               # Standard Template Library
    │   ├── template func/                     # Function templates & generic code
    │   ├── vector/                            # std::vector & iterators
    │   ├── list/                              # std::list (doubly-linked list)
    │   ├── deque/                             # std::deque (double-ended queue)
    │   ├── queue/                             # std::queue (FIFO adapter)
    │   ├── priority_queue/                    # std::priority_queue (heap structure)
    │   ├── stack/                             # std::stack (LIFO adapter)
    │   ├── pair/                              # std::pair & nested pairs
    │   ├── maps/                              # std::map, std::multimap, std::unordered_map
    │   └── sets/                              # std::set, std::multiset, std::unordered_set
    ├── o_extras/                              # Template specialization, generic inheritance
    └── library_mgmt.md                        # Capstone project requirements document
```

---

## Curriculum & Module Breakdown

### 1. Basics & I/O (`0_sample_pgms`)
- **Focus**: C++ boilerplate, standard namespaces, formatted stream output (`std::cout`), stream input (`std::cin`), and basic interactive prompts.
- **Key Concepts**: Output formatting with `std::endl`, reading numerical input, simple room area computation.
- **Programs**: `pgm000.cpp`, `pgm003.cpp`, `pgm004.cpp`, `pgm005.cpp`.

### 2. Variables & Data Types (`a_variables`)
- **Focus**: Variable declaration, assignment, direct initialization vs list initialization (`int x {0}`), and fundamental arithmetic.
- **Key Concepts**: Working with mixed types (`int`, `float`, `double`, `char`, `std::string`), arithmetic operations (`+`, `-`, `*`, `/`).
- **Programs**: `pgm0001.cpp`, `pgm002.cpp`.

### 3. Primitive Types & Limits (`b_primitive_types`)
- **Focus**: Exploring signed/unsigned integers, overflow, character encoding, floating-point representations, and real-world record modelling.
- **Key Concepts**: `unsigned short int`, `long`, `long long`, `double`, boolean values, representation of employee profiles.
- **Programs**: `pgm006.cpp`, `pgm007.cpp`.

### 4. The `sizeof` Operator & Machine Bounds (`c_size_of_operators`)
- **Focus**: Inspecting platform-specific memory footprint (bytes allocated) and architecture limits.
- **Key Concepts**: `sizeof(type)`, `<climits>` (`INT_MIN`, `INT_MAX`, `CHAR_MIN`, `LLONG_MAX`), `<cfloat>` (`FLT_MIN`, `DBL_MAX`).
- **Programs**: `pgm008.cpp`.

### 5. Constants & Calculations (`d_constants`)
- **Focus**: Immutability with `const`, literal constants, and real-world calculation problems.
- **Key Concepts**:
  - *Carpet Cleaning Service*: Calculating service estimates, material charges, tax calculations, and estimate expiration logic.
  - *Currency Converter*: Breaking dollar amounts into change denominations (dollars, quarters, dimes, nickels, pennies).
- **Programs**: `pgm009.cpp`, `pgm010.cpp`, `imp_pgm.cpp`.

### 6. Fixed-Size Arrays (`e_arrays`)
- **Focus**: Static stack-allocated arrays, memory continuity, zero-based indexing, and element updates.
- **Key Concepts**: Array initialization list syntax, indexing pitfalls, out-of-bounds risks without runtime bounds checking.
- **Programs**: `pgm011.cpp`.

### 7. Dynamic Arrays / Vectors (`f_vectors`)
- **Focus**: The `std::vector` sequence container from the STL.
- **Key Concepts**: Dynamic resizing, push/pop operations (`push_back`), size checking (`size()`), array subscript (`[]`) vs safe bounds-checked indexing (`.at()`), 2D vectors (vectors of vectors) and copy-by-value semantics.
- **Programs**: `pgm012.cpp`, `pgm013.cpp`, `pgm014.cpp`, `pgmr02.cpp`.

### 8. Operators & Expressions (`g_Operators`)
- **Focus**: Core expressions and evaluating operator precedence/associativity.
- **Sub-modules**:
  - **Assignment (`Assignment_O`)**: Initialization vs assignment, l-values, assignment chaining (`pgm015.cpp`).
  - **Arithmetic (`Arithematic_O`)**: Addition, subtraction, multiplication, integer division vs remainder (`%`), USD to INR currency converter (`pgm016.cpp`, `pgm017.cpp`).
  - **Increment & Decrement (`Incre_decre_O`)**: Prefix (`++x`) vs postfix (`x++`) evaluation orders and side-effects (`pgm018.cpp`).
  - **Type Casting (`Type_Casting`)**: Explicit conversion with `static_cast<double>()` to prevent integer truncation (`pgm019.cpp`).
  - **Boolean (`Bool_O`)**: `bool` variables, truth evaluations, formatting output with `std::boolalpha` / `std::noboolalpha` (`pgm020.cpp`).
  - **Relational (`Relational_O`)**: Equality (`==`, `!=`) and comparison (`<`, `<=`, `>`, `>=`) (`pgm021.cpp`).
  - **Logical (`Logical_O`)**: Conjunction (`&&`), disjunction (`||`), negation (`!`), short-circuit evaluation, range checks (`pgm022.cpp`).
  - **Section Challenge**: Change distribution calculator with integer arithmetic and remainder operations (`pgm023.cpp`).

### 9. Program Flow Control (`h_control_pgm_flow`)
- **Focus**: Conditional decision making and branching logic.
- **Sub-modules**:
  - **If Statements (`If_statements`, `If-else_statements`)**: Threshold checks, boolean tests (`pgm024.cpp`, `pgm025.cpp`).
  - **Nested If Statements (`Nested-if_statements`)**: Multi-tier grading systems, shipping calculator with dimension and volume surcharges (`pgm026.cpp`, `pgm027.cpp`, `pgm028.cpp`).
  - **Switch Statements (`switch_statements`)**: `switch`-`case`-`break` flow, handling fallthrough, switching on enumeration values (`enum`) (`pgm029.cpp`, `pgm030.cpp`).
  - **Ternary Operators (`Conditional_Opearators`)**: Inline conditional operator `(cond ? val1 : val2)`, sign determination, nested ternary to find the maximum of 3 integers (`pgm031.cpp`, `pgm032.cpp`, `pgm033.cpp`).

### 10. Loops & Iteration (`i_loop`)
- **Focus**: Repetition logic, counters, accumulation, and pattern visualization.
- **Sub-modules**:
  - **Standard For Loop (`1._for_loop`)**: Loop counter initialization, conditions, step increments/decrements, summing sequences (`pgm034.cpp`, `pgm035.cpp`, `pgm036.cpp`).
  - **Range-Based For Loop (`range_based_for_loop`)**: C++11 range-for syntax across arrays and vectors, calculating grade totals and averages (`pgm037.cpp`, `pgm038.cpp`, `pgm039.cpp`).
  - **Nested Loops (`4._nested_loop`)**: Cartesian coordinates, 1–10 multiplication grid tables, ASCII histogram generator (`pgm043.cpp`, `pgm044.cpp`).
  - **While & Do-While**: Concept templates for pre-test and post-test event loops.

### 11. Characters, C-Strings & Modern Strings (`j_characters_&_strings`)
- **Focus**: Low-level C-style character arrays vs high-level modern `std::string`.
- **Key Concepts**:
  - Null-terminated strings (`\0`), `<cstring>` functions (`strlen`, `strcpy`, `strcat`, `strcmp`), `<cctype>` character classification (`isalpha`, `toupper`, etc.), line reading (`cin.getline()`) (`pgm046.cpp`).
  - C++ `std::string` class: Dynamic sizing, substring extraction (`substr`), string searching (`find`), concatenation (`+`), constructors (`pgm047.cpp`).
  - *Project: Substitution Cipher*: Message encryption and decryption using mapped key strings (`pgm048.cpp`).

### 12. Modular Functions & Call Stack (`k_functions`)
- **Focus**: Function definitions, prototypes, parameter passing mechanisms, and memory execution.
- **Sub-modules**:
  - **Standard Library Functions & Randomness (`1.example`)**: `<cmath>` calculations, pseudo-random generation with `rand()`, seeding with `srand(time(nullptr))`, array manipulation (`pgm051.cpp`, `pgm052.cpp`, `pgm062.cpp`).
  - **Pass by Value (`2.pass_by_value`)**: Copy semantics, parameter isolation, interest calculators (`pgm053.cpp` - `pgm056.cpp`).
  - **Default Arguments & Overloading (`3.parameters`)**: Default parameters, function overloading resolution (`pgm057.cpp`, `pgm058.cpp`).
  - **Pass by Reference (`4.pass_by_reference`)**: Reference parameters (`&`), mutating caller arguments directly, multiple returns via reference parameters (`pgm059.cpp`, `pgm060.cpp`, `pgm061.cpp`).
  - **Scope Rules (`5.func_scopes`)**: Local, global, and `static` local variables, lifetime, and shadowing (`pgm063.cpp`).
  - **Call Stack & Activation Records (`6.call_stack`)**: Stack frame layout, function push/pop lifecycle, memory visualization (`pgm064.cpp`).
  - **Recursion (`7.recursion`)**: Base case, recursive step, call stack unwinding, Fibonacci calculation, factorial computation (`pgm065.cpp`, `pgm066.cpp`).

### 13. Pointers & Memory Management (`l_pointers_&_refrences`)
- **Focus**: Low-level memory architecture, direct memory manipulation, and heap allocation.
- **Sub-modules**:
  - **Pointer Fundamentals (`1.basics_of_ptr`)**: Address-of operator (`&`), dereference operator (`*`), null pointers (`nullptr`), pointer sizes, dynamic heap allocation via `new` and `delete`, array-pointer duality (`pgm067.cpp` - `pgm072.cpp`).
  - **Pointer Arithmetic & Constness (`2.ptr_imp*`)**: Incrementing/decrementing pointers, offsets, pointers to constants (`const int*`), constant pointers (`int* const`), and constant pointers to constants (`const int* const`) (`pgm073.cpp`, `pgm074.cpp`).
  - **Passing Pointers to Functions (`3.pass_to_func`)**: Pointer parameters, dereferencing in caller context, memory swapping (`my_swap`), passing pointer to `std::vector` (`pgm075.cpp` - `pgm077.cpp`).
  - **Dynamic Array Generation**: Dynamically creating arrays on the heap inside a function and returning the pointer (`pgm078.cpp`).
  - **References vs Pointers (`references`)**: Alias semantics, non-null guarantees, syntax differences (`pgm079.cpp`).

### 14. Object-Oriented Programming (`m_OOPS`)
- **Focus**: Encapsulation, abstraction, classes, object lifecycles, and access control.
- **Sub-modules**:
  - **Class & Object Foundations (`1.basics`)**: Defining `class`, creating objects on the stack and heap (`new`), public vs private attributes, arrow operator (`->`) (`pgm080.cpp`, `pgm081.cpp`).
  - **Member Methods (`2.Member_methods`)**: In-class inline methods vs external definitions using the scope resolution operator (`::`), bank `Account` simulation with deposit and withdraw safeguards (`pgm082.cpp`, `pgm083.cpp`).
  - **Constructors & Destructors (`3.Constructor&De_Con`)**:
    - Default constructor initialization (`pgm084.cpp`).
    - Parameterized constructors and member initializer lists (`pgm085.cpp`).
    - Copy constructor implementation (`pgm086.cpp`).

### 15. Standard Template Library (`n_(STL)`)
- **Focus**: Generic programming, sequence containers, container adapters, and associative data structures.
- **Sub-modules**:
  - **Function Templates (`template func`)**: Generic algorithms (`template <typename T>`), multi-type templates, resolving namespace collisions (`pgm087.cpp`).
  - **Dynamic Sequences**:
    - `std::vector`: Random access, forward and reverse iterators (`pgm088.cpp`).
    - `std::list`: Doubly-linked list, constant time insertion/deletion, bidirectional traversal (`pgm089.cpp`).
    - `std::deque`: Double-ended queue, indexed random access with front/back insertion (`pgm090.cpp`).
  - **Utility Types**:
    - `std::pair`: Two-element tuples, nested pairs (`pair<int, pair<int, int>>`) (`pgm091.cpp`).
  - **Container Adapters**:
    - `std::stack`: LIFO adapter, `push`, `pop`, `top`, `swap` (`pgm092.cpp`).
    - `std::queue`: FIFO adapter, `push`, `pop`, `front`, `back`, `swap` (`pgm093.cpp`).
    - `std::priority_queue`: Max-heap structure, ordered priority processing (`pgm094.cpp`).
  - **Associative Maps**:
    - `std::map`: Ordered key-value pairs backed by Red-Black Self-Balancing Trees ($O(\log N)$) (`pgm095.cpp`).
    - `std::multimap`: Duplicate key support, range lookups, no `[]` operator (`pgm096.cpp`).
    - `std::unordered_map`: Hash table implementation ($O(1)$ average lookup), most common DSA container (`pgm097.cpp`).
  - **Associative Sets**:
    - `std::set`: Unique sorted keys, binary search lookups, count checks (`pgm098.cpp`).
    - `std::multiset`: Duplicate sorted keys, `lower_bound()` and `upper_bound()` binary searches (`pgm099.cpp`).
    - `std::unordered_set`: Unique hashed elements without order overhead (`pgm100.cpp`).

### 16. Templates, Inheritance & Advanced OOP (`o_extras`)
- **Focus**: Advanced generic programming and object patterns.
- **Key Concepts**:
  - Class templates with default type parameters (`template<typename T = int>`) and full template specialization for `std::string` (`pgm101.cpp`).
  - Generic class template inheritance: base class template specialized for derived classes (`pgm102.cpp`).
  - OOP class instantiation with raw pointers on the heap, constructor initialization, method invocation, and explicit deallocation (`pgm103.cpp`).

### 17. Capstone Project: Library Management System (`library_mgmt.md`)
- **Focus**: End-to-end integration of C++ templates, OOP, dynamic memory, and the STL.
- **Specification Overview**:
  - `Storage<T>` generic template container class.
  - `Book` entity class with attributes (`title`, `author`, `price`), constructor, and `display()` method.
  - Heap-allocated `Book*` pointer storage with manual memory management (`new`/`delete`).
  - Multi-container architecture utilizing 4 distinct STL containers:
    1. `std::unordered_map<string, Book*>`: Fast $O(1)$ book lookup by ID.
    2. `std::map<string, int>`: Sorted author book counts.
    3. `std::multimap<string, string>`: Genre to book title mappings (supporting duplicate genres).
    4. `std::set<string>`: Sorted unique genre collection.
  - Operations: `addBook()`, `findBook()`, `removeBook()`, `display()`, `topAuthor()`.

---

## Comprehensive Program Index

| Program | Relative Path | Primary Category | Core Topics & Description |
|:---|:---|:---|:---|
| `pgm000` | `basics/0_sample_pgms/pgm000.cpp` | Sample Programs | "Hello, World!" boilerplate, standard output |
| `pgm003` | `basics/0_sample_pgms/pgm003.cpp` | Sample Programs | Favorite number interactive prompt, `std::cin` |
| `pgm004` | `basics/0_sample_pgms/pgm004.cpp` | Sample Programs | Multiple `cin`/`cout` formatting patterns |
| `pgm005` | `basics/0_sample_pgms/pgm005.cpp` | Sample Programs | Room area calculator (width $\times$ length) |
| `pgm0001` | `basics/a_variables/pgm0001.cpp` | Variables | Variable declarations, primitive assignment, basic arithmetic |
| `pgm002` | `basics/a_variables/pgm002.cpp` | Variables | Multi-type variables (`int`, `float`, `char`, `string`) |
| `pgm006` | `basics/b_primitive_types/pgm006.cpp` | Primitive Types | Employee profile details (name, age, hourly wage) |
| `pgm007` | `basics/b_primitive_types/pgm007.cpp` | Primitive Types | Primitive type ranges, unsigned integers, character initialization |
| `pgm008` | `basics/c_size_of_operators/pgm008.cpp` | Sizeof Operator | Memory sizes of types via `sizeof`, `<climits>`, `<cfloat>` |
| `imp_pgm` | `basics/d_constants/imp_pgm.cpp` | Constants | Dollar-to-cents change denomination breakdown |
| `pgm009` | `basics/d_constants/pgm009.cpp` | Constants | Carpet cleaning service cost estimator (`const` variables) |
| `pgm010` | `basics/d_constants/pgm010.cpp` | Constants | Carpet cleaning service challenge (small vs large room pricing) |
| `pgm011` | `basics/e_arrays/pgm011.cpp` | Arrays | Fixed-size array initialization, indexing, modification |
| `pgm012` | `basics/f_vectors/pgm012.cpp` | Vectors | Dynamic arrays with `std::vector`, `.push_back()`, `.at()` |
| `pgm013` | `basics/f_vectors/pgm013.cpp` | Vectors | Vector input, dynamic growth, `.size()` query |
| `pgm014` | `basics/f_vectors/pgm014.cpp` | Vectors | 2D multidimensional vectors (`vector<vector<int>>`) |
| `pgmr02` | `basics/f_vectors/pgmr02.cpp` | Vectors | Vector practice exercise: element addition & bound verification |
| `pgm015` | `basics/g_Operators/Assignment_O/pgm015.cpp` | Operators | Assignment operator (`=`) vs list initialization (`{}`) |
| `pgm016` | `basics/g_Operators/Arithematic_O/pgm016.cpp` | Operators | Arithmetic operations (`+`, `-`, `*`, `/`, `%`) |
| `pgm017` | `basics/g_Operators/Arithematic_O/pgm017.cpp` | Operators | Real-time currency exchange calculation (USD to INR) |
| `pgm018` | `basics/g_Operators/Incre_decre_O/pgm018.cpp` | Operators | Prefix vs postfix increment (`++`) and decrement (`--`) |
| `pgm019` | `basics/g_Operators/Type_Casting/pgm019.cpp` | Operators | `static_cast<double>()` and integer division resolution |
| `pgm020` | `basics/g_Operators/Bool_O/pgm020.cpp` | Operators | Boolean evaluations and `std::boolalpha` stream formatting |
| `pgm021` | `basics/g_Operators/Relational_O/pgm021.cpp` | Operators | Relational equality and comparison operators |
| `pgm022` | `basics/g_Operators/Logical_O/pgm022.cpp` | Operators | Logical operators (`&&`, `||`, `!`) and bounds checking |
| `pgm023` | `basics/g_Operators/pgm023.cpp` | Operators | Section challenge: Cents / paisa change distributor |
| `pgm024` | `basics/h_control_pgm_flow/If_statements/pgm024.cpp` | Control Flow | Simple `if` conditional statements |
| `pgm025` | `basics/h_control_pgm_flow/If-else_statements/pgm025.cpp` | Control Flow | Two-way branching `if-else` threshold comparison |
| `pgm026` | `basics/h_control_pgm_flow/Nested-if_statements/pgm026.cpp` | Control Flow | Nested conditional logic and multi-tier evaluation |
| `pgm027` | `basics/h_control_pgm_flow/Nested-if_statements/pgm027.cpp` | Control Flow | Student score grade calculator (A, B, C, D, F) |
| `pgm028` | `basics/h_control_pgm_flow/pgm028.cpp` | Control Flow | Package shipping dimension check and surcharge calculator |
| `pgm029` | `basics/h_control_pgm_flow/switch_statements/pgm029.cpp` | Control Flow | Standard `switch-case-default` statement |
| `pgm030` | `basics/h_control_pgm_flow/switch_statements/pgm030.cpp` | Control Flow | `switch` statement evaluating user-defined `enum` directions |
| `pgm031` | `basics/h_control_pgm_flow/Conditional_Opearators/pgm031.cpp` | Control Flow | Ternary operator (`?:`) checking positive, negative, or zero |
| `pgm032` | `basics/h_control_pgm_flow/Conditional_Opearators/pgm032.cpp` | Control Flow | Finding maximum of 2 numbers using conditional operator |
| `pgm033` | `basics/h_control_pgm_flow/Conditional_Opearators/pgm033.cpp` | Control Flow | Finding maximum of 3 numbers using nested ternary expressions |
| `pgm034` | `basics/i_loop/1._for_loop/pgm034.cpp` | Loops | Standard `for` loop counting up and counting down |
| `pgm035` | `basics/i_loop/1._for_loop/pgm035.cpp` | Loops | Printing numbers 1–100 with newline after every 10th item |
| `pgm036` | `basics/i_loop/1._for_loop/pgm036.cpp` | Loops | Accumulating sum of first $N$ natural numbers |
| `pgm037` | `basics/i_loop/1._for_loop/range_based_for_loop/pgm037.cpp` | Loops | Range-based `for` loop across arrays and `vector` |
| `pgm038` | `basics/i_loop/1._for_loop/range_based_for_loop/pgm038.cpp` | Loops | Computing sum, count, and average marks using range-for |
| `pgm039` | `basics/i_loop/1._for_loop/range_based_for_loop/pgm039.cpp` | Loops | Range-for filtering and temperature conversions |
| `pgm043` | `basics/i_loop/4._nested_loop/pgm043.cpp` | Loops | Nested loop generating 1 to 10 multiplication tables |
| `pgm044` | `basics/i_loop/4._nested_loop/pgm044.cpp` | Loops | ASCII Histogram generator displaying data as horizontal bars |
| `pgm045` | `basics/i_loop/pgm045.cpp` | Loops | Looping section challenge placeholder |
| `pgm046` | `basics/j_characters_&_strings/pgm046.cpp` | Strings | C-style strings (`char[]`), `cin.getline()`, `cstring` functions |
| `pgm047` | `basics/j_characters_&_strings/pgm047.cpp` | Strings | C++ `std::string`: constructors, indexing, `.substr()`, `.find()` |
| `pgm048` | `basics/j_characters_&_strings/pgm048.cpp` | Strings | Substitution Cipher: secret message encryption and decryption |
| `pgm051` | `basics/k_functions/1.example/pgm051.cpp` | Functions | Inspecting `RAND_MAX` and platform randomness limits |
| `pgm052` | `basics/k_functions/1.example/pgm052.cpp` | Functions | Generating bounded random numbers with `rand()` and `srand(time)` |
| `pgm053` | `basics/k_functions/2.pass_by_value/pgm053.cpp` | Functions | Pass-by-value demonstration: parameter immutability in caller |
| `pgm054` | `basics/k_functions/2.pass_by_value/pgm054.cpp` | Functions | Function prototypes and forward declarations |
| `pgm055` | `basics/k_functions/2.pass_by_value/pgm055.cpp` | Functions | Parameter passing mechanics and formal vs actual arguments |
| `pgm056` | `basics/k_functions/2.pass_by_value/pgm056.cpp` | Functions | Simple interest calculator function |
| `pgm057` | `basics/k_functions/3.parameters/pgm057.cpp` | Functions | Default argument values in function declarations |
| `pgm058` | `basics/k_functions/3.parameters/pgm058.cpp` | Functions | Function overloading across different parameter signatures |
| `pgm059` | `basics/k_functions/4.pass_by_reference/pgm059.cpp` | Functions | Pass-by-reference with `&` vs pass-by-value on vectors |
| `pgm060` | `basics/k_functions/4.pass_by_reference/pgm060.cpp` | Functions | Multi-output statistics function via references (`updateStats`) |
| `pgm061` | `basics/k_functions/4.pass_by_reference/pgm061.cpp` | Functions | Reference parameter string transformations |
| `pgm062` | `basics/k_functions/1.example/pgm062.cpp` | Functions | Modifying array contents passed to functions |
| `pgm063` | `basics/k_functions/5.func_scopes/pgm063.cpp` | Functions | Scope rules: local, global, static local variables |
| `pgm064` | `basics/k_functions/6.call_stack/pgm064.cpp` | Functions | Visualizing the runtime execution call stack in memory |
| `pgm065` | `basics/k_functions/7.recursion/pgm065.cpp` | Functions | Recursive Fibonacci calculation and base cases |
| `pgm066` | `basics/k_functions/7.recursion/pgm066.cpp` | Functions | Recursive Factorial calculation ($N!$) |
| `pgm067` | `basics/l_pointers_&_refrences/1.basics_of_ptr/pgm067.cpp` | Pointers | Pointer declaration, address-of operator (`&`), memory addresses |
| `pgm068` | `basics/l_pointers_&_refrences/1.basics_of_ptr/pgm068.cpp` | Pointers | Storing addresses in typed pointer variables |
| `pgm069` | `basics/l_pointers_&_refrences/1.basics_of_ptr/pgm069.cpp` | Pointers | Inspecting uniform size of pointers across data types |
| `pgm070` | `basics/l_pointers_&_refrences/1.basics_of_ptr/pgm070.cpp` | Pointers | Dereferencing pointers (`*ptr`) to read and modify values |
| `pgm071` | `basics/l_pointers_&_refrences/1.basics_of_ptr/pgm071.cpp` | Pointers | Dynamic heap allocation & release using `new` and `delete` |
| `pgm072` | `basics/l_pointers_&_refrences/1.basics_of_ptr/pgm072.cpp` | Pointers | Equivalence relationship between pointers and arrays |
| `pgm073` | `basics/l_pointers_&_refrences/2.ptr_imp*/pgm073.cpp` | Pointers | Pointer arithmetic (`ptr++`, `ptr + offset`, subtraction) |
| `pgm074` | `basics/l_pointers_&_refrences/2.ptr_imp*/pgm074.cpp` | Pointers | Pointers and `const`: pointer to const vs const pointer |
| `pgm075` | `basics/l_pointers_&_refrences/3.pass_to_func/pgm075.cpp` | Pointers | Passing pointers to functions for in-place data mutation |
| `pgm076` | `basics/l_pointers_&_refrences/3.pass_to_func/pgm076.cpp` | Pointers | Classical value swapping via pointers (`my_swap`) |
| `pgm077` | `basics/l_pointers_&_refrences/3.pass_to_func/pgm077.cpp` | Pointers | Passing a pointer to a `std::vector<string>` |
| `pgm078` | `basics/l_pointers_&_refrences/pgm078.cpp` | Pointers | Allocating dynamic array on heap and returning its pointer |
| `pgm079` | `basics/l_pointers_&_refrences/references/pgm079.cpp` | Pointers | L-value references (`int &ref = x`): aliases vs pointers |
| `pgm080` | `basics/m_OOPS/1.basics/pgm080.cpp` | OOP | `Player` class definition, member attributes, stack instantiation |
| `pgm081` | `basics/m_OOPS/1.basics/pgm081.cpp` | OOP | Public/Private access specifiers, heap instantiation with `new` |
| `pgm082` | `basics/m_OOPS/2.Member_methods/pgm082.cpp` | OOP | `Account` class with member methods defined inside class |
| `pgm083` | `basics/m_OOPS/2.Member_methods/pgm083.cpp` | OOP | Member methods defined externally using scope resolution (`::`) |
| `pgm084` | `basics/m_OOPS/3.Constructor&De_Con/1.default/pgm084.cpp` | OOP | Default constructor initialization and invocation |
| `pgm085` | `basics/m_OOPS/3.Constructor&De_Con/2.parametarised/pgm085.cpp` | OOP | Parameterized constructor with member initialization list |
| `pgm086` | `basics/m_OOPS/3.Constructor&De_Con/3.copy/pgm086.cpp` | OOP | Copy constructor implementation and object duplication |
| `pgm087` | `basics/n_(STL)/template func/pgm087.cpp` | STL | Generic function templates (`template <typename T>`) |
| `pgm088` | `basics/n_(STL)/vector/pgm088.cpp` | STL | `std::vector`: forward iterators and traversal patterns |
| `pgm089` | `basics/n_(STL)/list/pgm089.cpp` | STL | `std::list`: doubly-linked list insertion, deletion, traversal |
| `pgm090` | `basics/n_(STL)/queue/deque/pgm090.cpp` | STL | `std::deque`: double-ended queue, `push_front`, random access |
| `pgm091` | `basics/n_(STL)/pair/pgm091.cpp` | STL | `std::pair` and nested pair data structures |
| `pgm092` | `basics/n_(STL)/stack/pgm092.cpp` | STL | `std::stack`: LIFO adapter, push/pop/top, stack swapping |
| `pgm093` | `basics/n_(STL)/queue/queue/pgm093.cpp` | STL | `std::queue`: FIFO adapter, push/pop/front/back, queue swapping |
| `pgm094` | `basics/n_(STL)/queue/priority_queue/pgm094.cpp` | STL | `std::priority_queue`: max-heap priority retrieval |
| `pgm095` | `basics/n_(STL)/maps/map/pgm095.cpp` | STL | `std::map`: ordered key-value storage, `insert`, `emplace` |
| `pgm096` | `basics/n_(STL)/maps/multimap/pgm096.cpp` | STL | `std::multimap`: duplicate keys, iteration without `[]` |
| `pgm097` | `basics/n_(STL)/maps/unordered_map/pgm097.cpp` | STL | `std::unordered_map`: hash-based $O(1)$ student record registry |
| `pgm098` | `basics/n_(STL)/sets/set/pgm098.cpp` | STL | `std::set`: unique ordered keys, duplicate rejection, `count()` |
| `pgm099` | `basics/n_(STL)/sets/multiset/pgm099.cpp` | STL | `std::multiset`: ordered duplicates, `lower_bound`, `upper_bound` |
| `pgm100` | `basics/n_(STL)/sets/unordered_set/pgm100.cpp` | STL | `std::unordered_set`: hash-based unique elements |
| `pgm101` | `basics/o_extras/pgm101.cpp` | Extras & Templates | Class template default types and full specialization |
| `pgm102` | `basics/o_extras/pgm102.cpp` | Extras & Templates | Class template inheritance (`Dog` inheriting from `Animal<T>`) |
| `pgm103` | `basics/o_extras/pgm103.cpp` | Extras & OOP | `Book` class with dynamic heap allocation and method dispatch |
| `Capstone` | `basics/library_mgmt.cpp` | Capstone Project | Full implementation of Library Management System (`Storage<T>`, `Book`, `new`/`delete`, and 4 STL containers) |
| `Capstone Spec` | `basics/library_mgmt.md` | Capstone Project | Architecture & problem requirements document |

---

## Compilation & Execution Guide

### Prerequisites
- Modern C++ compiler supporting C++17 or C++20:
  - **GCC** (`g++`) $\ge$ 9.0
  - **Clang** (`clang++`) $\ge$ 10.0 (Apple Clang $\ge$ 12.0)
- POSIX-compliant shell (`bash`, `zsh`) or Windows PowerShell/Terminal.

### Compiling Any Individual Program

To compile any source file with warnings enabled and standard enforcement:

```bash
# Using g++ or clang++ with C++17 standard
g++ -std=c++17 -Wall -Wextra -pedantic path/to/program.cpp -o program_bin

# Run the compiled binary
./program_bin
```

#### Example 1: Compiling & Running a Fundamentals Program
```bash
clang++ -std=c++17 basics/0_sample_pgms/pgm005.cpp -o pgm005
./pgm005
```

#### Example 2: Compiling & Running the Substitution Cipher
```bash
clang++ -std=c++17 basics/j_characters_&_strings/pgm048.cpp -o cipher
./cipher
```

#### Example 3: Compiling & Running an STL Map Program
```bash
clang++ -std=c++17 basics/n_\(STL\)/maps/unordered_map/pgm097.cpp -o pgm097
./pgm097
```

#### Example 4: Compiling & Running Template Specialization
```bash
clang++ -std=c++17 basics/o_extras/pgm101.cpp -o pgm101
./pgm101
```

### Cleaning Up Binaries

To remove generated binary executables and debug symbol directories (`*.dSYM`):

```bash
find basics -type f -perm +111 -not -name "*.cpp" -not -name "*.md" -delete
rm -rf basics/**/**/*.dSYM
```
