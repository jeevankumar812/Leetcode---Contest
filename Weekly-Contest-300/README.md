# LeetCode Weekly Contest 300

## Contest Information

* **Contest:** LeetCode Weekly Contest 300
* **Language:** C++
* **Problems Solved:** 4 / 4
* **Topics Covered:** Hashing, Matrix Simulation, Dynamic Programming, DFS + Memoization

---

# Problems Solved

## 1. Decode the Message

### Difficulty

Easy

### Topics

* Hash Map
* String Manipulation

### Key Idea

Create a substitution mapping using the first occurrence of each character in the key and decode the given message accordingly.

### Concepts Learned

* Character Mapping
* Hash Table Usage
* String Traversal

### Complexity

* Time: O(n)
* Space: O(1)

---

## 2. Spiral Matrix IV

### Difficulty

Medium

### Topics

* Matrix Traversal
* Simulation
* Linked List

### Key Idea

Fill an `m × n` matrix in spiral order using values from the linked list. Remaining cells are filled with `-1`.

### Concepts Learned

* Spiral Traversal
* Boundary Management
* Simulation Problems

### Complexity

* Time: O(m × n)
* Space: O(m × n)

---

## 3. Number of People Aware of a Secret

### Difficulty

Medium

### Topics

* Dynamic Programming
* Simulation

### Key Idea

Track how many people learn the secret on each day while considering sharing delays and forgetting periods.

### Concepts Learned

* DP on Days
* State Transitions
* Delayed Contributions

### Complexity

* Time: O(n²) (Basic DP)
* Optimized: O(n)

---

## 4. Number of Increasing Paths in a Grid

### Difficulty

Hard

### Topics

* DFS
* Memoization
* Dynamic Programming on Grids

### Key Idea

Count all increasing paths starting from every cell using DFS and cache results to avoid recomputation.

### Concepts Learned

* DFS + Memoization
* Grid DP
* Directed Acyclic Graph (DAG) Thinking

### Complexity

* Time: O(m × n)
* Space: O(m × n)

---

# Contest Learnings

This contest provided exposure to multiple important interview patterns:

### Hashing

* Character substitution
* First occurrence mapping

### Matrix Simulation

* Spiral traversal
* Boundary handling

### Dynamic Programming

* Day-based state transitions
* Delayed effects in recurrence relations

### DFS + Memoization

* Grid state caching
* Avoiding exponential recursion

---

# Key Takeaways

* Always define the DP state clearly before writing transitions.
* Use memoization whenever DFS revisits the same state.
* Simulation problems require careful handling of boundaries.
* Hash maps are powerful for custom character mappings.
* Contest problems often combine multiple concepts together.

---

## Languages Used

```cpp
C++17
```

## Author

**Jeevan**

* Backend Development Enthusiast
* Daily DSA Practitioner
* LeetCode & GeeksforGeeks Solver
