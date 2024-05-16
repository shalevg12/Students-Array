# Students Array

This project is a C++ application that simulates managing student records and performing operations on arrays of students and other types. The project includes a `Student` class and a template class `MyArr` for handling arrays of general types.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [Acknowledgements](#acknowledgements)

## Introduction

The **Students Array** project aims to manage student records and manipulate arrays efficiently. The project involves defining a `Student` class and a `MyArr` template class to perform various operations, such as adding, removing, and sorting elements in the array.

## Features

- Manage student records with attributes: first name, last name, date of birth, ID, grades, and average grade.
- Validate student data upon creation.
- Overloaded operators for comparisons, printing, and equality checks.
- Template class `MyArr` with the following functionalities:
  - Add and remove elements.
  - Check if the array is sorted.
  - Find the maximum and minimum values.
  - Print array details and elements.
  - Handle invalid indices and array resizing.

## Installation

1. Clone the repository to your local machine:
    ```sh
    git clone https://github.com/your-username/students-array.git
    ```
2. Navigate to the project directory:
    ```sh
    cd students-array
    ```
3. Compile the project using your preferred C++ compiler:
    ```sh
    g++ -o students_array Main.cpp Student.cpp Date.cpp MyArr.h
    ```

## Usage

1. Run the compiled program:
    ```sh
    ./students_array
    ```
2. Follow the on-screen instructions to manage student records and arrays.

## File Structure

- `Student.cpp`, `Student.h`: Implements the `Student` class with attributes and methods for managing student data.
- `Date.cpp`, `Date.h`: Implements the `Date` class for handling date operations.
- `MyArr.h`: Template class for managing arrays of general types.
- `Main.cpp`: Contains the main function and controls the flow of the program.

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes. Ensure that your code follows the project's coding standards and is well-documented.

## Acknowledgements

Project owner: Shalev Gabay
