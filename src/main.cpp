//
// Created by Maikol Guzman on 21/11/23.
//

#include "BankAccount.h"
#include <iostream>

using namespace std;

/*!
 * \mainpage Technical documentation of the example.
 * \section buildingproject Building the Project
 *
 * \subsection step1 Creating a Build Directory
 *
 * It's a good practice to do an out-of-source build. This keeps your build files separate from your source files.
 * \code{.sh}
 * mkdir build
 * cd build
 * \endcode
 * \subsection step2 Running CMake
 * From within the build directory, run CMake to generate the build system.
 *
 * \code{.sh}
 * cmake ..
 * \endcode
 *
 * \subsection step3 Compiling the Project
 * After CMake has done its job, you can use the generated build system to compile the project.
 *
 * \code{.sh}
 * make
 * \endcode
 * This will compile your project and generate an executable in the build directory.
 *
 * \section references References
 *
 * <a href="https://github.com/una-eif201-progra1-master/dev.funda.oop-encapsulation">Github repository of the example</a>
 *
 * \date 2021-11-23
 * \author Maikol Guzman Alan
 * \copyright <a href="https://mikeguzman.dev/">mikeguzman.dev</a>
 *
 * \file main.cpp
 * \brief The main.cpp file contains the entry point of the program.
 */

int main() {
    BankAccount account{};
    account.setBalance(1000.0);
    cout << "Balance: $" << account.getBalance();  // Output: Balance: $1000.0
    return 0;
}