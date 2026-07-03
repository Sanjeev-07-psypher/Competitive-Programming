<h2><a href="https://codeforces.com/contest/1669/problem/G" target="_blank" rel="noopener noreferrer">1669G — Fall Down</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1669G](https://codeforces.com/contest/1669/problem/G) |

## Topics
`dfs and similar` `implementation`

---

## Problem Statement

<div class="header"><div class="title">G. Fall Down</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is a grid with $$$n$$$ rows and $$$m$$$ columns, and three types of cells: </p><ul> <li> An empty cell, denoted with '<span class="tex-font-style-tt">.</span>'. </li><li> A stone, denoted with '<span class="tex-font-style-tt">*</span>'. </li><li> An obstacle, denoted with the lowercase Latin letter '<span class="tex-font-style-tt">o</span>'. </li></ul><p>All stones fall down until they meet the floor (the bottom row), an obstacle, or other stone which is already immovable. (In other words, all the stones just fall down as long as they can fall.)</p><p>Simulate the process. What does the resulting grid look like?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n, m \leq 50$$$) — the number of rows and the number of columns in the grid, respectively.</p><p>Then $$$n$$$ lines follow, each containing $$$m$$$ characters. Each of these characters is either '<span class="tex-font-style-tt">.</span>', '<span class="tex-font-style-tt">*</span>', or '<span class="tex-font-style-tt">o</span>' — an empty cell, a stone, or an obstacle, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a grid with $$$n$$$ rows and $$$m$$$ columns, showing the result of the process.</p><p><span class="tex-font-style-bf">You don't need to output a new line after each test, it is in the samples just for clarity.</span></p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007338509132332457" id="id0015342273022205155" class="input-output-copier">Copy</div></div><pre id="id007338509132332457">3
6 10
.*.*....*.
.*.......*
...o....o.
.*.*....*.
..........
.o......o*
2 9
...***ooo
.*o.*o.*o
5 5
*****
*....
*****
....*
*****
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009281911246166717" id="id00605442026930335" class="input-output-copier">Copy</div></div><pre id="id009281911246166717">..........
...*....*.
.*.o....o.
.*........
.*......**
.o.*....o*

....**ooo
.*o**o.*o

.....
*...*
*****
*****
*****
</pre></div></div></div>