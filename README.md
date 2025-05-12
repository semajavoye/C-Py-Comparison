# C-Py-Comparison

This project demonstrates a speed and efficiency comparison between **C++** and **Python** using the same computational task: finding all prime numbers up to a given limit (default: 1,000,000).

It contains two files:
- `prime_cpp.cpp` – C++ implementation
- `prime_python.py` – Python implementation

## 🧪 Purpose

The goal is to show the performance difference between a compiled language (C++) and an interpreted one (Python) when solving a CPU-bound problem.

## 📂 Files

| File            | Language | Description                      |
|-----------------|----------|----------------------------------|
| `prime_cpp.cpp` | C++      | Efficient, compiled implementation |
| `prime_python.py` | Python | Simple, readable implementation  |

## 🚀 How to Run

### C++

Compile and run:
```bash
g++ prime_cpp.cpp -o prime_cpp -O2
./prime_cpp
```

### Python
python prime_python.py


#### Comparison

Running on an AMD Ryzen 5 3600 with 64 GB of RAM, the results were:

| Language | Execution Time | Number of Primes | Compiler/Interpreter      |
|----------|----------------|------------------|---------------------------|
| C++      | 0.3344 seconds | 78,498           | g++ 13.2.0                |
| C++      | 0.3257 seconds | 78,498           | g++ 13.2.0 (`-O2` flag)   |
| Python   | 3.39 seconds   | 78,498           | Python 3.11.2             |