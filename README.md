[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/4OGeC8cb)
# 01-C-Microproject

A small C program which reads an input file, line by line. 

## Tasks:

Write a function called readFile(). It takes two parameters. One is a string for the name of the file. The other is an integer for the index. The function will return the string in the line that has the corresponding index.

The input files contain, on the first line, an integer number of lines to read after that first line. Each line after that will contain some character string.

## Example:
Suppose the input file is `input.txt`. It contains 4 lines. In your function definition, you should make an array of length 3, and populate the cells with the lines of the input file. Then return the lines specified by the index. So,

          readFile("input.txt", 1) will be the string "CSC344\n".

## Note:
1. Clone the whole project to your computer
2. You can use CLion to open the project or you can work in terminal directly.
   Don't change the main function. If your function works, You will see the output "Congratulations" when runnning main.

3. There are three ways to test your program.
   1) in Clion, choose test then click the green arrow
   2) in Terminal, enter 'make test'
   3) push your code to GitHub and check the Actions


