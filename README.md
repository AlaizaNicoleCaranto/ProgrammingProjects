# Programming Projects

A collection of programming assignments and practice projects covering introductory programming concepts, data handling, and application development.

---

## Table of Contents

- [Overview](#overview)
- [Repository Contents](#repository-contents)
- [Prerequisites](#prerequisites)
- [Running an Assignment](#running-an-assignment)
- [Notes](#notes)

---

## Overview

This repository contains independent projects written in **C**, **C# / .NET**, and **COBOL**. Each assignment is kept in its own folder and can be explored or run separately.

The projects cover topics such as console input and output, arithmetic and operators, structures and records, dynamic memory, file handling, CSV data, and a REST API.

## Repository Contents

| Folder | Language | Description |
| --- | --- | --- |
| [`ATM/`](ATM/) | C# / .NET | Console ATM simulation with PIN entry, balance checks, and withdrawals. |
| [`OPERATORS/`](OPERATORS/) | C# / .NET | Console exercise demonstrating arithmetic, comparison, and logical operators. |
| [`CoffeeMenuApi/`](CoffeeMenuApi/) | C# / ASP.NET Core | Web API project for retrieving coffee menu items, using Entity Framework Core and SQLite. |
| [`FileOpeningLab/`](FileOpeningLab/) | C | File I/O practice: opening, writing, appending, and updating text files. |
| [`ProjectPokemon/`](ProjectPokemon/) | C | Console Pokémon list and team manager that stores data in CSV files. See its [project README](ProjectPokemon/README.md) for details. |
| [`StudentData/`](StudentData/) | C | Student record example using structures, including address and date-of-birth data. |
| [`StudentPerformanceAnalyzer/`](StudentPerformanceAnalyzer/) | C | Calculates student averages and identifies each student's highest subject score. |
| [`StudentReport/`](StudentReport/) | C | Student report and file-based data exercises. |
| [`DynamicStudentDirectory/`](DynamicStudentDirectory/) | C | Student directory exercise. |
| [`dataModel/`](dataModel/) | C | Student data model and record display exercise. |
| [`studentRecord/`](studentRecord/) | C | Console exercise for entering and displaying a student record. |
| [`transformDigit/`](transformDigit/) | C | Character and digit transformation exercise. |
| [`cob/`](cob/) | COBOL | Small COBOL practice programs, including arithmetic, data movement, and student records. |

## Prerequisites

Install the tools appropriate for the project you want to run:

- **C projects:** a C compiler such as GCC.
- **C# projects:** the **.NET 8 SDK**.
- **COBOL projects:** a COBOL compiler such as GnuCOBOL.

## Running an Assignment

Run commands from the relevant project folder. The commands below are examples; use the source file and project path that match the assignment.

### C

Compile a C source file with GCC:

```sh
gcc StudentPerformanceAnalyzer.c -o StudentPerformanceAnalyzer
```

Run the resulting executable:

```sh
./StudentPerformanceAnalyzer
```

On Windows, run `StudentPerformanceAnalyzer.exe` instead.

### C# / .NET

For the console projects, change to the project directory and run:

```sh
dotnet run
```

For the coffee menu API:

```sh
cd CoffeeMenuApi/CoffeeMenuApi
dotnet run
```

### COBOL

With GnuCOBOL installed, compile a source file and run its executable:

```sh
cobc -x StudentRecord.cob -o StudentRecord
./StudentRecord
```

On Windows, run `StudentRecord.exe` instead.

## Notes

- These are independent learning projects, not one combined application.
- Some assignments read or write files in their working directory. Keep their required input files alongside the program when running them.
- Build output and generated files may vary depending on your compiler and operating system.
