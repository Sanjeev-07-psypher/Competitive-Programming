<h2><a href="https://codeforces.com/contest/1849/problem/A" target="_blank" rel="noopener noreferrer">1849A — Morning Sandwich</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1849A](https://codeforces.com/contest/1849/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Morning Sandwich</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Monocarp always starts his morning with a good ol' sandwich. Sandwiches Monocarp makes always consist of bread, cheese and/or ham.</p><p>A sandwich always follows the formula: </p><ul> <li> a piece of bread </li><li> a slice of cheese or ham </li><li> a piece of bread </li><li> $$$\dots$$$ </li><li> a slice of cheese or ham </li><li> a piece of bread </li></ul><p>So it always has bread on top and at the bottom, and it alternates between bread and filling, where filling is a slice of either cheese or ham. Each piece of bread and each slice of cheese or ham is called a layer.</p><p>Today Monocarp woke up and discovered that he has $$$b$$$ pieces of bread, $$$c$$$ slices of cheese and $$$h$$$ slices of ham. What is the maximum number of layers his morning sandwich can have?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of testcases.</p><p>Each testcase consists of three integers $$$b, c$$$ and $$$h$$$ ($$$2 \le b \le 100$$$; $$$1 \le c, h \le 100$$$) — the number of pieces of bread, slices of cheese and slices of ham, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, print a single integer — the maximum number of layers Monocarp's morning sandwich can have.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003768062922047204" id="id003111016746857961" class="input-output-copier">Copy</div></div><pre id="id003768062922047204"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">2 1 1</div><div class="test-example-line test-example-line-even test-example-line-2">10 1 2</div><div class="test-example-line test-example-line-odd test-example-line-3">3 7 8</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006988590050424429" id="id009756568481684302" class="input-output-copier">Copy</div></div><pre id="id006988590050424429">3
7
5
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first testcase, Monocarp can arrange a sandwich with three layers: either a piece of bread, a slice of cheese and another piece of bread, or a piece of bread, a slice of ham and another piece of bread.</p><p>In the second testcase, Monocarp has a lot of bread, but not too much filling. He can arrange a sandwich with four pieces of bread, one slice of cheese and two slices of ham.</p><p>In the third testcase, it's the opposite — Monocarp has a lot of filling, but not too much bread. He can arrange a sandwich with three pieces of bread and two slices of cheese, for example.</p></div>