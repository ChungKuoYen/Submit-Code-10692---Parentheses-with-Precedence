# Submit-Code-10692---Parentheses-with-Precedence
Description

A string is said to be valid if it satisfies one of the following rules:

(1) The string is an empty string.

(2) If strings S1 and S2 are both valid, then S1S2 is valid.

(3) If a string S is valid, then {S}, [S], (S) and <S> are valid as long as S does not contain any parentheses with higher precedence than its enclosing parentheses. The precedence order of parentheses from high to low is { }, [ ], ( ), < >.  Therefore, a string of {[]()} is valid, but a string of {([])} is not.

Given a string consisting of parentheses, determine if it is a valid string.

 
Input

The first line of the input contains an integer N (N ≤ 10000) denoting the number of test cases. Each of the next N lines corresponds to a test case, which contains a string consisting of parentheses, and the maximum string length is no more than 1000 characters.

Note that an empty string (a line which contains the newline character only) may be present in the input and it should be considered as a valid string according to rule (1).

 

Subtask 1: N≤50

Subtask 2: N≤100

Subtask 3: N≤1000

Subtask 4: N≤10000
Output

For each test case, print “Yes” or “No” to indicate that the string is valid or not and a newline in the end of each line.
