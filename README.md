fizzbuzz
========

**Fizzbuzz** is a fascinating meta-phenomenon. As a quick test to see if a job candidate
can code *at all*, it's a rapid-fire way to weed out the estimated thirty to forty
percent of people whose résumés look impressive but can't actually program.<sup>[1](#ref1)</sup>
It's an extremely elementary probem, solvable with nothing more than arithmetic and basic
control structures, and it really doesn't serve the same purpose as asking programmers to
write a binary search. That &ldquo;other&rdquo; classic experiment (Jon Bentley's)
was all about boundary conditions and clear thinking and simulating code
in your head. Fizzbuzz is a different animal. It's a &ldquo;you must be *this* tall to
ride&rdquo; gate at the entrance to the interview; deal with it. Some people misunderstand
it and get upset.

I am always surprised when I run across people who have never heard of it. Of course, the
boss at my last job had never heard of GitHub.

Watch *this!*
-------------

I have watched skilled programmers vie to out-do each other on this seemingly trivial
problem. Asked sheepishly by an interviewer to code up a solution ("please don't be
offended"), any of them could do it straightforwardly in a minute. Yet on a forum like
[HN](http://news.ycombinator.com), they put forth elegant, beautiful, bizarre, or
terrifying implementations whose only purpose is to insert joy into the soul of a
programmer. *There are a over thousand* fizbuzz *repositories on GitHub.*<sup>[2](#ref2)</sup>
It's like doing crossword puzzles; I haven't solved it in Haskell, or Verilog, or by
running a DFA over a circularly linked list, or by bit-twiddling simulated flip-flops
in C, but here is my solution, one that follows good software engineering practice. It's
extensible, but mindful of YAGNI. It compiles with no warnings. It has documentation,
and tests, and a build procedure. "My God &mdash; it even has a ~~watermark~~license."

There are all kinds of other ways I can think of to do this, using pointer aliasing side
effects in C, self-modifying code in machine language, maybe using the bit mask counting
trick in HAKMEM 169....

My solution
-----------

A good solution to the problem is to define a function that returns the product
of the modular residues, then print the number if that function returns anything
other than zero.

```
int fizzbuzz(int i) {
	if (!(i % 3)) printf("fizz");
	if (!(i % 5)) printf("buzz");
	return i%3 * i%5;
}

int n;

for (n=1; n<=100; n++) {
	if (fizzbuzz(n)) printf ("%d", n);
	printf ("\n");
}
```

I have not seen this solution published elsewhere.

References
----------

1. <a name="ref1"/>Jeff Atwood. "Why Can't Programmers...Program?". The *Coding Horror*
blog (2007).  http://www.codinghorror.com/blog/2007/02/why-cant-programmers-program.html

2. <a name="ref2"/>Dave Fecak. "Hiring Indicators, OSS, and the Value of GitHub". *Job
Tips for Geeks* blog (2013). http://jobtipsforgeeks.com/2013/11/19/githubhiring/

