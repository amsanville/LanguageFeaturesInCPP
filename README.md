# Language Features in C++
This repository contains what amounts to a digitized series of notes on some of the language features of C++. I've completed what amounts to the basics of C++ in the MIT course. However, there are many language features that I've never even touched on. I hope to use this library as an attempt to explore some of these features and play around more with what can be done in C++.

In order to break this up into manageable chunks, I've created a new header file (and possibly corresponding source file if appropriate) for each topic. I plan to use this README as a collection of notes on each of these topics. For the most part, I've been exposed to these topics in some of the game making tutorials I've come across. As my ultimate goal is to be a better C++ programmer, I want to actually learn what these features are as they get used. For minor things (think `#pragma once`), I've included some annotations.

I've also included some of the best practices or things to remember when writing code that's meant to have some lifetime to it.
## Key Words and Features
Here are some minor notes on key words and features that show up in modern C++ but were not formally covered in some of the course work material that you did. For testing and examples (where appropriate), I've included code in `main.cpp`:
* `#pragma once` can be used in place if the inclusion guard (`#ifndef` and `#define` stuff). It ensures it's only included once in the compilation. It can break, and if it does go back to the standard inclusion guards.
* `auto` is used to get type definitions from well specified initializer. It uses context clues from implied data types or return statements of functions. Can lead to weird behaviour if ambiguous (think Python `int` v. `double` casting not working the way you think it does).

## Aliasing Data Types
In addition to the more basic structs and classes, we can also simply alias one type as another. This amounts to calling a data type that is one thing by another name. Aliasing has the benefit of not creating the layers (and thus overhead) inherent to defining new data types in those other ways. This feature seems to be entirely about clarity in code. See some of the things that can be done with aliasing in `Aliasing.h`.

Where I've seen it used: the use case I came across was when we wanted an ID number for our game objects, but rather than floating around a random `int` (or in that case `size_t`) we called it a `ComponentID`.

For completeness sake, I've also included some stuff about `class`, `struct`, `enum`, and `union`. A `class` is the sort of the fundamental unit of object oriented programming. The idea of a class is that you have a set of data or collection of data that you want to perform some sort of repeated operations on. The idea is to compartmentalize all the code for re-usability and clarity. Classes (in addition to many other things).

A `struct` is like a class with only public access fields and no functions. These provide low level ways to gather packets of information. The example that comes to mind is student information, like ID number, name, data of birth, student status, GPA, etc. Each student will have each of those pieces of information and it is unlikely that they will be all the same data type. I find myself wanting to use a `struct` when I want to collect disparate data types, but don't want the overhead of a class.

An `enum`, or enumeration, is a list of names associated with a number. It provides a way to create an encoding flag style variables. For example, in game programming, you might run some sort of state machine that determines how the UI behaves. You can use an `enum` to map out the state. Then code like `state == MAIN_MENU`, the `MAIN_MENU` will automatically be genereted with a unique number.

A `union` holds only one of its members at a time. The idea is that all the members share the same memory, so the union will only be as big as its biggest member. Unions get used in things like key listeners or exception handling. The union is paired with a discriminator to determine which field of the union is active. Thus, when I see what key is pressed, I can just ask the union. The union also stays compact. I don't know if that's how it actually works in the libraries like SDL, but it seems like a good use case to me.

As find other language features like these, I will add them here.