<h2><a href="https://codeforces.com/contest/1105/problem/A" target="_blank" rel="noopener noreferrer">1105A — Salem and Sticks </a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1105A](https://codeforces.com/contest/1105/problem/A) |

## Topics
`brute force` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Salem and Sticks </div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Salem gave you $$$n$$$ sticks with integer positive lengths $$$a_1, a_2, \ldots, a_n$$$.</p><p>For every stick, you can change its length to any other positive integer length (that is, either shrink or stretch it). The cost of changing the stick's length from $$$a$$$ to $$$b$$$ is $$$|a - b|$$$, where $$$|x|$$$ means the absolute value of $$$x$$$.</p><p>A stick length $$$a_i$$$ is called <span class="tex-font-style-it">almost good</span> for some integer $$$t$$$ if $$$|a_i - t| \le 1$$$.</p><p>Salem asks you to change the lengths of some sticks (possibly all or none), such that all sticks' lengths are almost good for some positive integer $$$t$$$ and the total cost of changing is minimum possible. The value of $$$t$$$ is not fixed in advance and you can choose it as any positive integer. </p><p>As an answer, print the value of $$$t$$$ and the minimum cost. If there are multiple optimal choices for $$$t$$$, print any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$1 \le n \le 1000$$$) — the number of sticks.</p><p>The second line contains $$$n$$$ integers $$$a_i$$$ ($$$1 \le a_i \le 100$$$) — the lengths of the sticks.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the value of $$$t$$$ and the minimum possible cost. If there are multiple optimal choices for $$$t$$$, print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00861047867193833" id="id000786408651811763" class="input-output-copier">Copy</div></div><pre id="id00861047867193833">3
10 1 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0037880482450255015" id="id007865151741751358" class="input-output-copier">Copy</div></div><pre id="id0037880482450255015">3 7
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008642271037053153" id="id008735409620066328" class="input-output-copier">Copy</div></div><pre id="id008642271037053153">5
1 1 2 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0047776371605177836" id="id0022197811207202922" class="input-output-copier">Copy</div></div><pre id="id0047776371605177836">2 0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, we can change $$$1$$$ into $$$2$$$ and $$$10$$$ into $$$4$$$ with cost $$$|1 - 2| + |10 - 4| = 1 + 6 = 7$$$ and the resulting lengths $$$[2, 4, 4]$$$ are almost good for $$$t = 3$$$.</p><p>In the second example, the sticks lengths are already almost good for $$$t = 2$$$, so we don't have to do anything.</p></div>