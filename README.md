# CodingChallenge

## Thought Process
I started off by writing some test cases, since I wanted to make sure that I was accounting for all the edge cases and I think that test-driven development makes the most sense for a program like this.  I decided to split the functionality into 2 parts:  DecimaltoRoman and RomantoDecimal, since it's not exactly a symmetric problem.  

For the Roman numerals to Decimal problem, I decided to read it in chunks of 2 characters at a time so that it catches subtraction, and I shorten the string by one character at a time if it ends up not being subtraction for those 2 integers.  This ensures that there won't be any errors with skipping over the subtraction in a string such as "CIX".  I also included error handling within this function so that it doesn't simply crash when the user inputs an unexpected character.

For the Decimal to Roman numerals problem, I wrote what I thought would be the most readable and straightforward solution that makes the most logical sense.  While it's possible that I could have removed some duplicate code and created a separate function to handle each of the 100's, 10's, or 1's places, I felt that that would unnecessarily complicate the code and make it less readable.  I didn't include error handling within the function since it would error out when converted to an integer if the user input a string that had integers at first and non-integer characters afterwards.

This program accepts as many strings or integers as the user inputs.  To run on a windows, I had to go through gitBash and run the executable within that terminal.  I didn't have success in running it on a windows PowerShell terminal.  I wrote the program in C++

## Time taken
I took a total of 3 1/2 hours on the challenge, with about 2 hours dedicated to coding the core functionality, half an hour working on getting it to accept user input directly from the command line, and another hour formatting it and writing notes.
