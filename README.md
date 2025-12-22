# ft_printf
* This project has been created as part of the 42 curriculum by aboussab 

## “Description”
* ft_printf is a project where we have to creat a fct that behaive as the printf fct from <stdio.h>  its goal is  discover variadic functions in C. usigne the systeme call "write" and the varidice fct that holde infinitife number of arguments this is the main tools alowed to use


## “Instructions”
* Ft_printf is a simple C project after you cloned the git repo , check the make file by then "make all" to creat the lib "libftprintf.a". then, you creat a simple main.c were you put the test cases (such as %c, %s, %d, %i, %u, %x, %X, and %p) that's it 


## “Resources”
* for this project i used as a resources :
	- A simple web site that called guid ft_printf (https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf)
	- Geeks_for_geeks (https://www.geeksforgeeks.org/c/variadic-functions-in-c/)
* For the ai i use it in diffrent ways to ask confsing basic QSTs that's it :
	- Chat Gpt
	- Claude.ai

## “Detailes”
* On my project i used a simple algorithme a  variadic functions that holde one fixed arguments as a string and unlimeted number of  argements , after that it search from the fixed string for '%' characters to identify format specifiers. The algorithm iterates through each character in the format string sequentially, printing regular characters directly while processing format specifiers by extracting corresponding arguments from the va_list. This linear parsing approach ensures O(n) time complexity where n is the length of the format string, making it efficient for most use cases. The va_list data structure from stdarg.h was chosen because it provides a standardized way to handle variable arguments in C without requiring the function to know the exact number or types of arguments at compile time. This design allows the function to process arguments on-demand as format specifiers are encountered, avoiding the need for complex data structures or multiple passes through the arguments. Alternative approaches like using arrays or linked lists for argument storage were considered but rejected due to increased memory overhead and complexity, while recursive parsing was avoided to prevent stack overflow risks with long format strings. The chosen implementation prioritizes simplicity, efficiency, and safety while maintaining compatibility with the standard printf interface.