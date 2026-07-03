<h2><a href="https://codeforces.com/contest/2074/problem/C" target="_blank" rel="noopener noreferrer">2074C — XOR and Triangle</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2074C](https://codeforces.com/contest/2074/problem/C) |

## Topics
`bitmasks` `brute force` `geometry` `greedy` `probabilities`

---

## Problem Statement

<div class="header"><div class="title">C. XOR and Triangle</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>This time, the pink soldiers have given you an integer $$$x$$$ ($$$x \ge 2$$$).</p><p>Please determine if there exists a <span class="tex-font-style-bf">positive</span> integer $$$y$$$ that satisfies the following conditions.</p><ul> <li> $$$y$$$ is <span class="tex-font-style-bf">strictly</span> less than $$$x$$$. </li><li> There exists a <span class="tex-font-style-bf">non-degenerate triangle</span>$$$^{\text{∗}}$$$ with side lengths $$$x$$$, $$$y$$$, $$$x \oplus y$$$. Here, $$$\oplus$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a>. </li></ul><p>Additionally, if there exists such an integer $$$y$$$, output any.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$A triangle with side lengths $$$a$$$, $$$b$$$, $$$c$$$ is non-degenerate when $$$a+b  \gt  c$$$, $$$a+c  \gt  b$$$, $$$b+c  \gt  a$$$.</p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 2000$$$). The description of the test cases follows. </p><p>The only line of each test case contains a single integer $$$x$$$ ($$$2 \le x \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer on a separate line. The integer you must output is as follows:</p><ul> <li> If there exists an integer $$$y$$$ satisfying the conditions, output the value of $$$y$$$ ($$$1 \le y  \lt  x$$$); </li><li> Otherwise, output $$$-1$$$. </li></ul><p>If there exist multiple integers that satisfy the conditions, you may output any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0025699705060451994" id="id009193160557132102" class="input-output-copier">Copy</div></div><pre id="id0025699705060451994"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div><div class="test-example-line test-example-line-even test-example-line-4">3</div><div class="test-example-line test-example-line-odd test-example-line-5">69</div><div class="test-example-line test-example-line-even test-example-line-6">4</div><div class="test-example-line test-example-line-odd test-example-line-7">420</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003629923180576472" id="id0008330968966534746" class="input-output-copier">Copy</div></div><pre id="id003629923180576472">3
-1
5
-1
66
-1
320
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, there exists a non-degenerate triangle with side lengths $$$3$$$, $$$5$$$, and $$$3 \oplus 5 = 6$$$. Therefore, $$$y=3$$$ is a valid answer.</p><p>In the second test case, $$$1$$$ is the only possible candidate for $$$y$$$, but it cannot make a non-degenerate triangle. Therefore, the answer is $$$-1$$$.</p></div>