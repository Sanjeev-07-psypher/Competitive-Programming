<h2><a href="https://codeforces.com/contest/1260/problem/B" target="_blank" rel="noopener noreferrer">1260B — Obtain Two Zeroes</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1260B](https://codeforces.com/contest/1260/problem/B) |

## Topics
`binary search` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Obtain Two Zeroes</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two integers $$$a$$$ and $$$b$$$. You may perform any number of operations on them (possibly zero).</p><p>During each operation you should choose any positive integer $$$x$$$ and set $$$a := a - x$$$, $$$b := b - 2x$$$ or $$$a := a - 2x$$$, $$$b := b - x$$$. Note that you may choose different values of $$$x$$$ in different operations.</p><p>Is it possible to make $$$a$$$ and $$$b$$$ equal to $$$0$$$ simultaneously?</p><p>Your program should answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>Then the test cases follow, each test case is represented by one line containing two integers $$$a$$$ and $$$b$$$ for this test case ($$$0 \le a, b \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print the answer to it — <span class="tex-font-style-tt">YES</span> if it is possible to make $$$a$$$ and $$$b$$$ equal to $$$0$$$ simultaneously, and <span class="tex-font-style-tt">NO</span> otherwise.</p><p>You may print every letter in any case you want (so, for example, the strings <span class="tex-font-style-tt">yEs</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> and <span class="tex-font-style-tt">YES</span> will all be recognized as positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00133397114675742" id="id00531379442926982" class="input-output-copier">Copy</div></div><pre id="id00133397114675742">3
6 9
1 1
1 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005663200788988139" id="id001273017109506518" class="input-output-copier">Copy</div></div><pre id="id005663200788988139">YES
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case of the example two operations can be used to make both $$$a$$$ and $$$b$$$ equal to zero:</p><ol> <li> choose $$$x = 4$$$ and set $$$a := a - x$$$, $$$b := b - 2x$$$. Then $$$a = 6 - 4 = 2$$$, $$$b = 9 - 8 = 1$$$; </li><li> choose $$$x = 1$$$ and set $$$a := a - 2x$$$, $$$b := b - x$$$. Then $$$a = 2 - 2 = 0$$$, $$$b = 1 - 1 = 0$$$. </li></ol></div>