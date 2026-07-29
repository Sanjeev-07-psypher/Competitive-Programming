<h2><a href="https://codeforces.com/contest/2120/problem/C" target="_blank" rel="noopener noreferrer">2120C — Divine Tree</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2120C](https://codeforces.com/contest/2120/problem/C) |

## Topics
`constructive algorithms` `greedy` `math` `sortings` `trees`

---

## Problem Statement

<div class="header"><div class="title">C. Divine Tree</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>  </p><p>Harshith attained enlightenment in Competitive Programming by training under a Divine Tree. A divine tree is a rooted tree$$$^{\text{∗}}$$$ with $$$n$$$ nodes, labelled from $$$1$$$ to $$$n$$$. The divineness of a node $$$v$$$, denoted $$$d(v)$$$, is defined as the smallest node label on the unique simple path from the root to node $$$v$$$.</p><p>Aryan, being a hungry Competitive Programmer, asked Harshith to pass on the knowledge. Harshith agreed on the condition that Aryan would be given two positive integers $$$n$$$ and $$$m$$$, and he had to construct a divine tree with $$$n$$$ nodes such that the total divineness of the tree is $$$m$$$, i.e., $$$\displaystyle\sum\limits_{i=1}^n d(i)=m$$$. If no such tree exists, Aryan must report that it is impossible.</p><p>Desperate for knowledge, Aryan turned to you for help in completing this task. As a good friend of his, help him solve the task.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$A tree is a connected graph without cycles.  A rooted tree is a tree where one vertex is special and called the root. </p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows. </p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n \le 10^6$$$, $$$1 \le m \le 10^{12}$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^6$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer $$$k$$$ in one line — the root of the tree.</p><p>Then $$$n-1$$$ lines follow, each containing a description of an edge of the tree — a pair of positive integers $$$u_i,v_i$$$ ($$$1\le u_i,v_i\le n$$$, $$$u_i\ne v_i$$$), denoting the $$$i$$$-th edge connects vertices $$$u_i$$$ and $$$v_i$$$.</p><p>The edges and vertices of the edges can be printed in any order. If there are multiple solutions, print any of them.</p><p>If there is no solution, print "-1" instead.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0017018157132056477" id="id009548255261399534" class="input-output-copier">Copy</div></div><pre id="id0017018157132056477"><div class="test-example-line test-example-line-even test-example-line-0">2</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2</div><div class="test-example-line test-example-line-even test-example-line-2">4 6</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002910836488796078" id="id003553590258467627" class="input-output-copier">Copy</div></div><pre id="id002910836488796078">-1
3
3 1
1 2
2 4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, there is a single node with a value of $$$1$$$, so getting a sum of $$$2$$$ is impossible.</p><p>In the second test case, getting a sum of $$$6$$$ is possible with the given tree rooted at $$$3$$$.</p></div>