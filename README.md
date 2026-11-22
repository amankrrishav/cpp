# 🚀 My Modern C++ Learning Journey (100% Hand-Typed | Zero AI Code)

[![C++ CI](https://github.com/amankrrishav/cpp/actions/workflows/ci.yml/badge.svg)](https://github.com/amankrrishav/cpp/actions)
[![C++ Standard](https://img.shields.io/badge/Standard-C%2B%2B17%20%2F%20C%2B%2B20-00599C?logo=c%2B%2B&logoColor=white)](https://en.cppreference.com/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Programs](https://img.shields.io/badge/Programs-107%20Handwritten-orange.svg)](basics/)
[![Clean Build](https://img.shields.io/badge/Build-Passing-brightgreen.svg)](#quick-start--how-to-run)

> **Hey there! 👋**  
> I created this repository while learning C++ from absolute scratch all the way to Object-Oriented Programming, memory management, and the Standard Template Library (STL).  
>
> ✍️ **100% Hand-Typed — Zero AI-generated code:** Every single program, comment, and exercise here was manually typed, compiled, and debugged by me. I wrote these files to deeply understand *why* things work under the hood—from pointer arithmetic and stack frames to template specialization and hash maps.

---

## ⭐ Why Star This Repo?

If you are a fellow student, beginner, or developer preparing for **DSA**, **systems programming**, or **coding interviews**, here is why you will find this repository useful:

1. **Zero Fluff, Straight to Working Code**: Every single `.cpp` file is standalone, self-contained, and runnable. No massive dependencies, no confusing build systems—just open a file and see clean, commented C++.
2. **Step-by-Step Learning Progression**: 107 programs arranged in logical numbered order (`pgm000` to `pgm103`), with no sudden jumps in difficulty.
3. **Pointers & Memory Made Simple**: Dedicated, bite-sized examples explaining the hardest parts of C++: heap memory (`new`/`delete`), pointer arithmetic, `const` pointer variations, and pass-by-reference.
4. **All Major STL Containers Covered**: Real examples comparing `vector`, `list`, `deque`, `stack`, `queue`, `priority_queue`, `map`, `multimap`, `unordered_map`, `set`, and `unordered_set`.
5. **Real Mini-Projects & Capstone**: Includes practical challenges like a **Substitution Cipher** and a complete **Library Management System** combining Templates, OOP, raw pointers, and 4 STL containers.
6. **Automated CI Verified**: Every program is automatically tested and verified with both `g++` and `clang++` via GitHub Actions on every push.

---

## 🗺️ The Learning Roadmap

Here is how the concepts progress through this repository:

| Stage | Folder | What You'll Learn | Notable Files |
|:---|:---|:---|:---|
| **0. Hello World & I/O** | [`basics/0_sample_pgms/`](basics/0_sample_pgms/) | Standard I/O streams (`cin`, `cout`, `endl`), basic formatting, arithmetic | `pgm000`, `pgm004`, `pgm005` |
| **1. Variables & Types** | [`basics/a_variables/`](basics/a_variables/) | Variable initialization types (`{}` list init vs `=`), primitive data types | `pgm0001`, `pgm002` |
| **2. Primitives & Limits** | [`basics/b_primitive_types/`](basics/b_primitive_types/) | Signed vs unsigned, overflow safety, character representations | `pgm006`, `pgm007` |
| **3. Memory Footprint** | [`basics/c_size_of_operators/`](basics/c_size_of_operators/) | `sizeof` operator, machine limits, `<climits>`, `<cfloat>` | `pgm008` |
| **4. Constants & Math** | [`basics/d_constants/`](basics/d_constants/) | `const` keyword, literal constants, change calculation challenge | `imp_pgm`, `pgm009`, `pgm010` |
| **5. Static Arrays** | [`basics/e_arrays/`](basics/e_arrays/) | Stack-allocated fixed arrays, indexing, array bounds pitfalls | `pgm011` |
| **6. Dynamic Vectors** | [`basics/f_vectors/`](basics/f_vectors/) | `std::vector`, `.push_back()`, bounds-checked `.at()`, 2D vectors | `pgm012`, `pgm014`, `pgmr02` |
| **7. Operators & Casting** | [`basics/g_Operators/`](basics/g_Operators/) | Precedence, prefix/postfix (`++`), `static_cast`, `boolalpha`, logic | `pgm016`–`pgm023` |
| **8. Control Flow** | [`basics/h_control_pgm_flow/`](basics/h_control_pgm_flow/) | `if`, `if-else`, nested conditionals, `switch` on `enum`, ternary `?:` | `pgm024`–`pgm033` |
| **9. Loops & Iteration** | [`basics/i_loop/`](basics/i_loop/) | `for`, C++11 range-based for, `while`, `do-while`, histograms, Collatz | `pgm034`–`pgm050` |
| **10. Strings & Ciphers** | [`basics/j_characters_&_strings/`](basics/j_characters_&_strings/) | C-style `char[]` vs `std::string`, string methods, Substitution Cipher | `pgm046`, `pgm047`, `pgm048` |
| **11. Functions & Memory** | [`basics/k_functions/`](basics/k_functions/) | Prototypes, pass-by-value vs pass-by-reference (`&`), call stack, recursion | `pgm051`–`pgm066` |
| **12. Pointers & Heap** | [`basics/l_pointers_&_refrences/`](basics/l_pointers_&_refrences/) | Addresses `&`, dereference `*`, `new`/`delete`, pointer arithmetic, `const` ptrs | `pgm067`–`pgm079` |
| **13. OOP Fundamentals** | [`basics/m_OOPS/`](basics/m_OOPS/) | Classes, objects, `public`/`private`, member methods (`::`), constructors | `pgm080`–`pgm086` |
| **14. The STL Mastery** | [`basics/n_(STL)/`](basics/n_(STL)/) | Templates, `vector`, `list`, `deque`, `stack`, `queue`, `map`, `set` | `pgm087`–`pgm100` |
| **15. Advanced Templates** | [`basics/o_extras/`](basics/o_extras/) | Template default types, specialization for strings, generic inheritance | `pgm101`–`pgm103` |
| **16. Capstone Project** | [`basics/library_mgmt.cpp`](basics/library_mgmt.cpp) | Full Library System: `Storage<T>`, `Book`, `new`/`delete`, 4 STL containers | `library_mgmt.cpp` |

---

## 💡 Key Concept Highlights

Here are some of the most useful snippets and concepts you will find in this repo:

### 1. Pointer Arithmetic & Const Variations (`pgm074.cpp`)
Confused about `const int*` vs `int* const`?
- **Pointer to Const (`const int* ptr`)**: Data pointed to cannot be changed, but pointer address can point elsewhere.
- **Const Pointer (`int* const ptr`)**: Pointer address cannot change, but the value stored there can.
- **Const Pointer to Const (`const int* const ptr`)**: Neither the address nor the value can change.

### 2. Pass by Reference vs Pass by Value (`pgm053.cpp` vs `pgm059.cpp`)
- Pass-by-value makes an expensive copy (especially for large `vector` or `string` objects).
- Pass-by-reference (`void update(vector<int> &vec)`) directly accesses the caller's memory with zero overhead.

### 3. STL Map vs Unordered Map (`pgm095.cpp` vs `pgm097.cpp`)
- `std::map`: Backed by Red-Black Self-Balancing BST. Keys are always stored in **sorted order**. Operations are $O(\log N)$.
- `std::unordered_map`: Backed by a Hash Table. Keys are stored in arbitrary order. Average lookup is $O(1)$—essential for fast DSA lookups!

---

## 🏆 Capstone: Library Management System

Located at [`basics/library_mgmt.cpp`](basics/library_mgmt.cpp) (and detailed in [`basics/library_mgmt.md`](basics/library_mgmt.md)), this capstone ties everything together into a clean, unified project:

- **Template Class (`Storage<T>`)**: A generic container that logs all system actions.
- **OOP (`Book` class)**: Encapsulated attributes (`title`, `author`, `genre`, `price`) with clean constructor initialization.
- **Manual Memory Management**: All books are dynamically allocated on the heap (`new`) and safely deallocated (`delete`) in the destructor.
- **Multi-Container Architecture (4 STL Containers)**:
  - `std::unordered_map<string, Book*>`: $O(1)$ instant book retrieval by ID.
  - `std::map<string, int>`: Keeps authors and their total book counts automatically sorted.
  - `std::multimap<string, string>`: Maps genres to book titles (supports multiple books per genre).
  - `std::set<string>`: Maintains a sorted set of unique genres.

---

## ⚡ Quick Start / How to Run

### 1. Clone the repository
```bash
git clone https://github.com/amankrrishav/cpp.git
cd cpp
```

### 2. Run any program with the included `Makefile`
You can compile and run any individual program with a single command:

```bash
# Run Hello World
make run FILE=basics/0_sample_pgms/pgm000.cpp

# Run the Substitution Cipher
make run FILE=basics/j_characters_&_strings/pgm048.cpp

# Run the Capstone Library Management System
make run FILE=basics/library_mgmt.cpp
```

### 3. Verify all 107 programs
```bash
# Check syntax of all files
make check

# Clean up any generated binaries
make clean
```

---

## 🤝 Contributing & Feedback

This repository reflects my personal grind and learning log in C++. If you spot a bug, have an idea for an optimization, or want to suggest a new topic, feel free to open an **Issue** or submit a **Pull Request**!

---

## ⭐ Support This Journey

If this repository helped you understand a C++ concept, served as a handy cheat sheet, or inspired your own learning grind:

👉 **Please consider starring (⭐) this repository!** It motivates me to continue documenting and sharing clean code as I tackle advanced topics.
