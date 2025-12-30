Aim:

To install VS Code and GCC compiler, and execute a simple C program.

Requirements:

Computer with Windows/Linux/Mac

Internet connection

Procedure:
Step 1: Install GCC Compiler

Go to the website for MinGW (Windows) or use package manager for Linux/Mac.

Windows: https://sourceforge.net/projects/mingw/

Linux (Ubuntu): sudo apt install build-essential

Mac: Install Xcode Command Line Tools: xcode-select --install

Download and run the installer (for Windows).

During installation, select mingw32-gcc-g++ package.

Add C:\MinGW\bin to the system PATH environment variable (Windows).

Test installation:

Open Command Prompt (Windows) or Terminal (Linux/Mac).

Type:

gcc --version


It should display GCC version.

Step 2: Install VS Code

Go to https://code.visualstudio.com/

Download VS Code for your OS and install.

Open VS Code.

Install C/C++ extension from Microsoft:

Go to Extensions (Ctrl+Shift+X) → Search “C/C++” → Install.

Step 3: Write First C Program

Open VS Code.

Create a new file and save it as hello.c.

Write the following code:

#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

Step 4: Compile and Run C Program

Open Terminal in VS Code (`Ctrl+``).

Compile the program using GCC:

gcc hello.c -o hello


Run the compiled program:

Windows: hello.exe

Linux/Mac: ./hello

Output should be:

Hello, World!

Observation:

The program runs successfully and prints “Hello, World!” on the terminal.

Conclusion:

VS Code and GCC compiler were successfully installed. The first C program compiled and executed correctly.