<h2><a href="https://codeforces.com/contest/1201/problem/C" target="_blank" rel="noopener noreferrer">1201C — Maximum Median</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1201C](https://codeforces.com/contest/1201/problem/C) |

## Topics
`binary search` `greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">C. Maximum Median</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of $$$n$$$ integers, where $$$n$$$ is odd. You can make the following operation with it:</p><ul> <li> Choose one of the elements of the array (for example $$$a_i$$$) and increase it by $$$1$$$ (that is, replace it with $$$a_i + 1$$$). </li></ul><p>You want to make the median of the array the largest possible using at most $$$k$$$ operations.</p><p>The median of the odd-sized array is the middle element after the array is sorted in non-decreasing order. For example, the median of the array $$$[1, 5, 2, 3, 5]$$$ is $$$3$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 2 \cdot 10^5$$$, $$$n$$$ is odd, $$$1 \le k \le 10^9$$$) — the number of elements in the array and the largest number of operations you can make.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the maximum possible median after the operations.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00501734430822047" id="id007439353690755681" class="input-output-copier">Copy</div></div><pre id="id00501734430822047">3 2
1 3 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008004870931551588" id="id007706604836569381" class="input-output-copier">Copy</div></div><pre id="id008004870931551588">5</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00678364910774735" id="id0038814907939803966" class="input-output-copier">Copy</div></div><pre id="id00678364910774735">5 5
1 2 1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0019429904779612162" id="id00551519126021208" class="input-output-copier">Copy</div></div><pre id="id0019429904779612162">3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00015076485212554558" id="id007600335240616322" class="input-output-copier">Copy</div></div><pre id="id00015076485212554558">7 7
4 1 2 4 3 4 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005374334097749865" id="id001392569110239128" class="input-output-copier">Copy</div></div><pre id="id005374334097749865">5</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, you can increase the second element twice. Than array will be $$$[1, 5, 5]$$$ and it's median is $$$5$$$.</p><p>In the second example, it is optimal to increase the second number and than increase third and fifth. This way the answer is $$$3$$$.</p><p>In the third example, you can make four operations: increase first, fourth, sixth, seventh element. This way the array will be $$$[5, 1, 2, 5, 3, 5, 5]$$$ and the median will be $$$5$$$.</p></div>