fizzbuzz
========

**Fizzbuzz** is a fascinating meta-phenomenon. As a quick test to see if a programming
job candidate can code *at all*, it's a rapid-fire way to weed out the estimated thirty
to forty percent of people whose résumés look impressive but can't actually program. It's
an extremely elementary probem, solvable with nothing more than arithmetic and basic
control structures, and it really doesn't serve the same purpose as asking programmers to
write a binary search. That &ldquo;other&rdquo; classic experiment is all about boundary
conditions and clear thinking and simulating code in your head. Fizzbuzz is a different
animal. It's a &ldquo;you must be *this* tall to ride&rdquo; gate at the entrance to the
interview; deal with it. Some people misunderstand it and get upset.

I am always surprised when I run across people who have never heard of it.

Watch *this!*
-------------

I have seen skilled programmers vie to out-do each other on this seemingly trivial
problem. Asked sheepishly by an interviewer to code up a solution, any of them could do
it straightforwardly in a minute. Yet on a forum like HN, they put forth masterworks
of elegant, beautiful, bizarre, or terrifying implementations of fizzbuzz whose only
purpose is to insert joy into the soul of a programmer. I haven't solved it in Haskell,
or Verilog, or by running a DFA over a circularly linked list, or by bit-twiddling
simulated flip-flops in C, but here is my solution, a fairly elegant implementation, I
think, that follows good software engineering practice.

My solution
-----------

A good solution to the problem is to define a function that returns the product
of the modular residues, then print the number if the function returns anything
other than zero.

This is a solution I have not seen published elsewhere.

