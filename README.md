# Tower of Hanoi – Recursive Solution (C++)

## Overview
The **Tower of Hanoi** is a classic problem in computer science that is commonly used to demonstrate and understand the concept of **recursion** and algorithmic thinking.

The problem consists of:
- Three rods: **A (source)**, **B (auxiliary)**, and **C (destination)**
- A number of disks of different sizes stacked on rod A
- The objective is to move all disks from rod A to rod C while respecting a set of rules

---

## Problem Rules
1. Only **one disk** can be moved at a time  
2. A **larger disk may never be placed on top of a smaller disk**  
3. All moves must use only the three given rods  

---

## Solution Idea
The solution to the Tower of Hanoi problem is inherently **recursive**.

To move `n` disks from the source rod to the destination rod:
1. Move the top `n-1` disks from the source rod to the auxiliary rod  
2. Move the largest disk (`n`) directly to the destination rod  
3. Move the `n-1` disks from the auxiliary rod to the destination rod  

This process repeats recursively until the base case (`n = 1`) is reached.

---

## Code Explanation
- The `hanoi` function implements the recursive solution  
- Each valid disk movement is printed to the console  
- The total number of moves is tracked using the `moves` variable  
- The program reads the number of disks from user input and displays the complete sequence of moves  

---

## Time Complexity
The time complexity of the algorithm is:# Tower of Hanoi – Recursive Solution (C++)

## Overview
The **Tower of Hanoi** is a classic problem in computer science that is commonly used to demonstrate and understand the concept of **recursion** and algorithmic thinking.

The problem consists of:
- Three rods: **A (source)**, **B (auxiliary)**, and **C (destination)**
- A number of disks of different sizes stacked on rod A
- The objective is to move all disks from rod A to rod C while respecting a set of rules

---

## Problem Rules
1. Only **one disk** can be moved at a time  
2. A **larger disk may never be placed on top of a smaller disk**  
3. All moves must use only the three given rods  

---

## Solution Idea
The solution to the Tower of Hanoi problem is inherently **recursive**.

To move `n` disks from the source rod to the destination rod:
1. Move the top `n-1` disks from the source rod to the auxiliary rod  
2. Move the largest disk (`n`) directly to the destination rod  
3. Move the `n-1` disks from the auxiliary rod to the destination rod  

This process repeats recursively until the base case (`n = 1`) is reached.

---

## Code Explanation
- The `hanoi` function implements the recursive solution  
- Each valid disk movement is printed to the console  
- The total number of moves is tracked using the `moves` variable  
- The program reads the number of disks from user input and displays the complete sequence of moves  

---

## Time Complexity
The time complexity of the algorithm is:# Tower of Hanoi – Recursive Solution (C++)

## Overview
The **Tower of Hanoi** is a classic problem in computer science that is commonly used to demonstrate and understand the concept of **recursion** and algorithmic thinking.

The problem consists of:
- Three rods: **A (source)**, **B (auxiliary)**, and **C (destination)**
- A number of disks of different sizes stacked on rod A
- The objective is to move all disks from rod A to rod C while respecting a set of rules

---

## Problem Rules
1. Only **one disk** can be moved at a time  
2. A **larger disk may never be placed on top of a smaller disk**  
3. All moves must use only the three given rods  

---

## Solution Idea
The solution to the Tower of Hanoi problem is inherently **recursive**.

To move `n` disks from the source rod to the destination rod:
1. Move the top `n-1` disks from the source rod to the auxiliary rod  
2. Move the largest disk (`n`) directly to the destination rod  
3. Move the `n-1` disks from the auxiliary rod to the destination rod  

This process repeats recursively until the base case (`n = 1`) is reached.

---

## Code Explanation
- The `hanoi` function implements the recursive solution  
- Each valid disk movement is printed to the console  
- The total number of moves is tracked using the `moves` variable  
- The program reads the number of disks from user input and displays the complete sequence of moves  

---

## Time Complexity
The time complexity of the algorithm is:   O(2^n)
This indicates that the number of required moves grows exponentially as the number of disks increases.

---

## How to Run
1. Compile the source code using a C++ compiler (e.g., `g++`)  
2. Run the executable  
3. Enter the number of disks when prompted  
4. The program will output all moves along with the total move count  

---

## Project Purpose
This project is intended for **educational purposes**, focusing on:
- Understanding recursion
- Developing algorithmic problem-solving skills
- Analyzing time complexity of recursive algorithms







