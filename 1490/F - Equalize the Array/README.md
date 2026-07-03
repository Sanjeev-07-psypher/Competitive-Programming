<h2><a href="https://codeforces.com/contest/1490/problem/F" target="_blank" rel="noopener noreferrer">1490F — Equalize the Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1490F](https://codeforces.com/contest/1490/problem/F) |

## Topics
`binary search` `data structures` `greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">F. Equalize the Array</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp was gifted an array $$$a$$$ of length $$$n$$$. Polycarp considers an array beautiful if there exists a number $$$C$$$, such that each number in the array occurs either zero or $$$C$$$ times. Polycarp wants to remove some elements from the array $$$a$$$ to make it beautiful.</p><p>For example, if $$$n=6$$$ and $$$a = [1, 3, 2, 1, 4, 2]$$$, then the following options are possible to make the array $$$a$$$ array beautiful: </p><ul> <li> Polycarp removes elements at positions $$$2$$$ and $$$5$$$, array $$$a$$$ becomes equal to $$$[1, 2, 1, 2]$$$; </li><li> Polycarp removes elements at positions $$$1$$$ and $$$6$$$, array $$$a$$$ becomes equal to $$$[3, 2, 1, 4]$$$; </li><li> Polycarp removes elements at positions $$$1, 2$$$ and $$$6$$$, array $$$a$$$ becomes equal to $$$[2, 1, 4]$$$; </li></ul><p>Help Polycarp determine the minimum number of elements to remove from the array $$$a$$$ to make it beautiful.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first line of each test case consists of one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the length of the array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — array $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer — the minimum number of elements that Polycarp has to remove from the array $$$a$$$ to make it beautiful.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008564347107763993" id="id0048758221891516174" class="input-output-copier">Copy</div></div><pre id="id008564347107763993">3
6
1 3 2 1 4 2
4
100 100 4 100
8
1 2 3 3 3 2 6 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0041189233009353776" id="id006512001557609961" class="input-output-copier">Copy</div></div><pre id="id0041189233009353776">2
1
2
</pre></div></div></div>