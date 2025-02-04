# Competitive Programming Toolkit

## 📌 Overview
The **Competitive Programming Toolkit** is a command-line utility designed to streamline problem-solving in coding competitions. It provides essential tools for:
- **Running test cases** automatically and verifying output.
- **Generating random test cases** within specified constraints.
- **Measuring execution time** to analyze efficiency.
- **Debugging solutions** step by step (optional).

This toolkit helps competitive programmers test their code efficiently, saving time during contests.

---

## 📂 Project Structure
```
Competitive-Programming-Toolkit/
│── src/                    # Source files
│   │── main.cpp             # CLI entry point
│   │── test_runner.cpp      # Runs test cases
│   │── input_generator.cpp  # Creates random test cases
│   │── timer.cpp            # Measures execution time
│   │── debugger.cpp         # (Optional) Step-by-step execution
│── include/                 # Header files
│   │── test_runner.h
│   │── input_generator.h
│   │── timer.h
│   │── debugger.h
│── test_cases/              # Directory for storing test cases
│── README.md                # Documentation
│── .gitignore               # Ignore compiled binaries
│── Makefile                 # (Optional) For compiling easily
```

---

## 🚀 Features
✅ **Test Runner** – Automatically executes test cases and verifies output.  
✅ **Input Generator** – Creates randomized test cases for efficient testing.  
✅ **Execution Timer** – Measures runtime performance of code.  
✅ **Debugger (Optional)** – Step through execution for better debugging.  

---

## 🛠 Installation & Setup
### 1️⃣ Clone the Repository
```sh
git clone https://github.com/your-username/Competitive-Programming-Toolkit.git
cd Competitive-Programming-Toolkit
```

### 2️⃣ Compile the Toolkit
Using **Makefile** (recommended):
```sh
make
```
Manually:
```sh
g++ -o toolkit src/*.cpp
```

---

## 🔧 How to Use
### **1️⃣ Running Test Cases**
```sh
./toolkit
```
- Select **Run test cases**.
- Enter the test case file name.
- The program will execute tests and display results.

### **2️⃣ Generating Test Cases**
```sh
./toolkit
```
- Select **Generate test cases**.
- Specify the number of cases and value range.
- A test file is created in the `test_cases/` directory.

### **3️⃣ Measuring Execution Time**
```sh
./toolkit
```
- Select **Measure execution time**.
- The program will calculate the runtime of your solution.

---

## 📜 File Descriptions
### **1️⃣ Main Program (CLI Interface)**
- **`src/main.cpp`** → Entry point of the program.
  - Provides a menu for users to:
    - Run test cases.
    - Generate test cases.
    - Measure execution time.

### **2️⃣ Test Runner (Handles Test Execution)**
- **`include/test_runner.h`** → Header file for test execution functions.
- **`src/test_runner.cpp`** → Implementation of test case execution.
  - Reads input/output test files.
  - Runs the user’s code on test cases.
  - Compares expected vs. actual output.
  - Displays pass/fail results.

### **3️⃣ Input Generator (Creates Random Test Cases)**
- **`include/input_generator.h`** → Header file for test case generation.
- **`src/input_generator.cpp`** → Implementation of test case creation.
  - Generates test cases within given constraints.
  - Saves generated test cases to a file.

### **4️⃣ Execution Timer (Measures Runtime Performance)**
- **`include/timer.h`** → Header file for execution timing.
- **`src/timer.cpp`** → Measures execution time of code.
  - Uses high-resolution clocks to track performance.
  - Outputs the total runtime of a function.

### **5️⃣ Debugger (Optional - Step-by-Step Execution)**
- **`include/debugger.h`** → Header file for debugging utilities.
- **`src/debugger.cpp`** → Provides debugging tools.
  - Logs variable values at different stages.
  - Helps trace logic errors in competitive programming.

### **6️⃣ Test Cases (Stores Sample Inputs/Outputs)**
- **`test_cases/`** → Directory for storing test cases.
  - Contains input files (e.g., `test1.in`) and expected output files (`test1.out`).
  - Used by the test runner to validate solutions.

---

## 👨‍💻 Contributing
1. **Fork the repository** 🍴
2. **Create a new branch**: `git checkout -b feature-name`
3. **Commit changes**: `git commit -m "Added new feature"`
4. **Push to branch**: `git push origin feature-name`
5. **Open a Pull Request** 🚀

---

## 📜 License
This project is licensed under the MIT License. Feel free to use and modify it!

