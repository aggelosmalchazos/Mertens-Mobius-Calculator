# Mertens-Mobius-Calculator
A calculator for the Mertens and Mobius mathematical functions
This project focuses on some simple and interesting mathematical functions. 
The Möbius function states the following (taken from Wikipedia):
μ(n) = +1 if n is a square-free positive integer with an even number of prime factors.
μ(n) = −1 if n is a square-free positive integer with an odd number of prime factors.
μ(n) = 0 if n has a squared prime factor.

The Mertens function is the sum of the Mobius values from 1 to n and is symbolized as Μ(n). A zero point is each number n for which M(n)=0, and we'll call it ZP from now on.

Consider the function s() that returns the sum of the divisors of a number, excluding the number itself. For example, s(18)=1+2+3+6+9=21.

A number is considered perfect when s(n)=n.
A number is considered deficient when s(n)<n.
A number is considered abudant when s(n)>n.

A number is called square free when none of its divisors, excluding 1, is a squared number.

So this program finds the Mertens values for n in [1,10^(MAXEXP)+9] and prints out the ones that are in [10^K-9,10^K+9] for each K in [1,MAXEXP]. It also finds and prints the ZP numbers in [1,10^MAXEXP+9], and the perfect numbers in [2,1000*ZP]. Finally, it keeps a count of how many deficient and abudant numbers are there in [2,1000*ZP].


This project was completed for the course Introduction to Programming, by professor Panagiotis Stamatopoulos, Department of Informatics and Telecommunications(DIT), University of Athens (UOA). More information can be found here:https://cgi.di.uoa.gr/~ip/iphw2223_1.pdf
