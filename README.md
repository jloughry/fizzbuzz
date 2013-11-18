fizzbuzz
========

**Fizzbuzz** is a fascinating meta-phenomenon. As a quick test to see if a job candidate
can code *at all*, it's a rapid-fire way to weed out the estimated thirty to forty
percent of people whose résumés look impressive but can't actually program.<sup>[1](#ref1)</sup>
It's an extremely elementary probem, solvable with nothing more than arithmetic and basic
control structures, and it really doesn't serve the same purpose as asking programmers to
write a binary search. That &ldquo;other&rdquo; classic experiment (Jon Bentley's on
binary search) was all about boundary conditions and clear thinking and simulating code
in your head. Fizzbuzz is a different animal. It's a &ldquo;you must be *this* tall to
ride&rdquo; gate at the entrance to the interview; deal with it. Some people misunderstand
it and get upset.

I am always surprised when I run across people who have never heard of it. Of course, the
boss at my last job had never heard of GitHub, either.

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

All kinds of other ways I can think of to do this, using pointer aliasing side effects
in C, self-modifying code in machine language, maybe using the bit mask counting trick
in HAKMEM 169....

My solution
-----------

A good solution to the problem is to define a function that returns the product
of the modular residues, then print the number if the function returns anything
other than zero.

It is a solution I have not seen published elsewhere.

References
----------

1. <a name="ref1"/>Jeff Atwood, "Why Can't Programmers...Program?" The *Coding Horror*
blog (2007).  http://www.codinghorror.com/blog/2007/02/why-cant-programmers-program.html

