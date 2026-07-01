# 🔢 Decimal to Binary Converter

A lightweight and efficient C++ console application that converts standard decimal integers (Base-10) into their corresponding binary representation (Base-2). The program utilizes dynamic memory sequencing to store and reverse mathematical remainders for accurate output.

---

## **🛠️ Development Tools**

This project was built and managed using:
* **VS Code:** The text editor used for writing and organizing the C++ source code.
* **GCC / MinGW Compiler:** Used to compile the source code into an executable program.
* **Git & GitHub:** Used for local version control and cloud repository hosting.

---

## **Key Features**

* **Dynamic Bit Storage:** Uses `std::vector` to dynamically store binary bits without hardcoding size limits.
* **Zero-Case Handling:** Built-in edge-case validation to instantly process and output `0` without running unnecessary loops.
* **Reverse Order Printing:** Implements a reverse-iteration loop to correctly print bits from the Most Significant Bit (MSB) to the Least Significant Bit (LSB).

---

## **Technical Breakdown**

### **The Conversion Logic**
The program converts a decimal number to binary by continuously dividing the integer by $2$ and tracking the remainder ($0$ or $1$). 

The process follows these steps:
1. Divide the number by $2$.
2. Get the remainder using the modulo operator (`n % 2`) and store it.
3. Update the number to be the integer quotient (`n /= 2`).
4. Repeat until the number becomes $0$.

### **Mathematical Representation**
For any integer $n$, the binary bits are extracted using:

$$\text{Bit} = n \pmod 2$$

Inside the program, the loop runs with a time complexity of $O(\log_2 n)$, making the execution near-instantaneous even for very large integers.

---

## **Credits**

Conceptualized, structured, and developed by **Zyad**.

---

## **License**

This project is open-source and available under the [MIT License](LICENSE).
