 # CS 2400 C++ Coding Style
 ### Contact: David Chelberg (chelberg@ohio.edu)

---

* Use a consistant style for naming identifiers
  * ```camelCase``` or ```snake_case```
* Use meaningful variable names that describe the content of the variable, the purpose of the function, or the class.
  * ```employeeSalary``` instead of ```es```
  * ```Employee``` instead of ```e```
* Add a space around operators
  * ```total = amount + tax;``` instead of ```total=amount+tax;```
* Add documentations throughout your program
  * Start by adding documentation for the whole program at the top of the file that includes:
    * File name
    * Author name
    * Date
    * Description of the program
	* Below is an example:
	```cpp
	/******************************************************************* 
	*  \file <filename goes here, e.g. prog1.cc>
	*  \brief <brief desription of program goes here>
	*                                                                     
	*  Author:      your name
	*  Email:       your email address
	*                                                                    
	*  Lab Section: section number and instructor's name
	*                                                                    
	*  Description: description of the program                    
	*                                                                    
	*  Date:        date of completion
	*                                                                    
	*******************************************************************/
	```
	* The following is an example of an introductory comment block that follows the format above:

	```cpp
	/********************************************************************
	*  \file prog1.cc
	*  \brief Project 1  -- Video Calculator
	*                                                                    
	*  Author:      Elwood Scuggins
	*  Email:       Clueless@ace.cs.ohio.edu
	*                                                                    
	*  Lab Section: 10 (Chris Hayes)
	*                                                                    
	*  Description: This program inputs the total number of minutes, 
	*               the number of minutes for commercials, and the 
	*               number of minutes for episodes.  The program 
	*               computes the total number of minutes for videos, 
	*               the number of videos, and the number of seconds 
	*               left over.
	*                                                                    
	*  Date:        January 26, 2020
	*                                                                    
	********************************************************************/
	```

* Each statement should be on a line by itself
* Add documentation, for each of the functions, above the prototype. We will be using [Doxygen](http://www.doxygen.nl/manual/docblocks.html) style of documentation. The comments should start with `/**`.  For example:
  ```cpp
  /*******************************************************************
  *
  *  Function:   find_space_cost
  *                                                                  
  *  Purpose:    calculates and returns the charge for shipping cargo  
  *              between two planets.                                  
  *                                                                  
  *  Parameters: @param distance - distance in miles between two planets
  *              @param weight   - weight in pounds of item being shipped
  *
  *              @return - the charge for shipping cargo between
  *                        two planets 
  *
  * Member/Global Variables: none
  *
  * Pre Conditions: variables distance and weight have valid values
  *
  * Post Conditions: returns the cost in dollars of shipping a
  *                  package that weighs weight pounds a distance
  *                  of distance miles.
  *
  * Calls:       function cargo_rates
  *                                                                  
  *******************************************************************/
  ```

* Use triple slashes `///` for [Doxygen](http://www.doxygen.nl/manual/docblocks.html) style line comments
* Always prompt the user for input
* The program output should be readable and clearly labeled
* Use lower case letters for identifier names. If an identifier has multiple words, then use one of the styles mentioned above for naming identifiers (example: ```employeeSalary``` instead of ```es```)
* All constants must be in upper case letters. For example: ```const double OHIO_TAX = 0.07;```. Use underscore character to separate words in the constant name.
* Indent blocks for ```if```, ```while```, ```for``` etc. For example:

  ```cpp
  if (hours <= 40) {
      wages = hours * hourlyRate;
  }
  ```

* Keep lines at a reasonable length
* Break long statements into either multiple statements or multiple lines
* Skip lines between logical groups of statements
* Limit the scope of variables. Use local variables
* Avoid global variables
* Always initialize your variables before using them
* Always check for failure when you open a file

  ```cpp
  inStream.open("somefile.txt");
  if (inStream.fail()) { /// check for failure
      cout << "File is not accessable" << endl;
      exit(1);
  }
  ```
    
* Always compile with ```-Wall``` option to detect and eliminate all warnings

## Classes and Structures

* Capitalize class and structure names
* All member variables should be in the private section of the class
* Always include a default constructor
* When using dynamic allocation always include a destructor and a copy constructor
* Always include getter (accessors) and setters (mutators)
* When using separate compilation, always guard against multiple includes of the same class (using `#ifndef`)
* Class example:

  ```cpp
  #ifndef STUDENT_H
  #define STUDENT_H
  class Student {
  public:
      /** Default constructor
       * Initializes the id to 0 and the name to "N/A"
       */
      Student();

      /** getID - an accessor for the id
       *  @return - the student's id value
       */  
      int getId();

      /**
       * getName - an accessor for the name
       * @return - the student's name
       */ 
      string getName();

      /**
       * setId - a mutator for the student id
       * @param newId - the newId must be a valid id >= 0
       */ 
      void setId(int newId);

      /**
       * setName - a mutator for the student name
       * @param newName - a valid name string != ""
       */
      void setName(string newName);

  private:
      int id;
      string name;
  };
  #endif
  ```
