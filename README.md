# Welcome to My Ngram
***

## Task
The task is to create a program called my_ngram that counts the occurrences of each character in one or multiple strings provided as arguments. The challenge lies in implementing the program using limited functions and syscalls, and ensuring that it displays the character count in alphabetical order.

## Description
The problem is solved by implementing a C program my_ngram.c that accepts multiple strings as command-line arguments. The program counts the occurrences of each character in the provided strings and displays the count for each character in alphabetical order.
The count_characters function within the program iterates over each character in the input string, incrementing the count for each character encountered. It then iterates over all possible ASCII characters and prints out the count for each character that has a non-zero count.

## Installation
To install the project, simply clone the repository and compile the my_ngram.c file using the provided Makefile. Ensure that you have gcc installed on your system.
git clone <repository-url>
cd <repository-directory>
make


## Usage
Once the project is compiled, you can use the my_ngram executable to count the occurrences of characters in one or more strings. The syntax is as follows:
./my_ngram string1 [string2 ...]
Replace string1, string2, etc. with the strings you want to analyze. For example:
./my_ngram hello world
This command will output the count of each character in the provided strings, ordered alphabetically.
``````

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
