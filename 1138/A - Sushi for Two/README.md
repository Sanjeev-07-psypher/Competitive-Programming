<h2><a href="https://codeforces.com/contest/1138/problem/A" target="_blank" rel="noopener noreferrer">1138A — Sushi for Two</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1138A](https://codeforces.com/contest/1138/problem/A) |

## Topics
`binary search` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Sushi for Two</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Arkady invited Anna for a dinner to a sushi restaurant. The restaurant is a bit unusual: it offers $$$n$$$ pieces of sushi aligned in a row, and a customer has to choose a continuous subsegment of these sushi to buy.</p><p>The pieces of sushi are of two types: either with tuna or with eel. Let's denote the type of the $$$i$$$-th from the left sushi as $$$t_i$$$, where $$$t_i = 1$$$ means it is with tuna, and $$$t_i = 2$$$ means it is with eel.</p><p>Arkady does not like tuna, Anna does not like eel. Arkady wants to choose such a continuous subsegment of sushi that it has equal number of sushi of each type and each half of the subsegment has only sushi of one type. For example, subsegment $$$[2, 2, 2, 1, 1, 1]$$$ is valid, but subsegment $$$[1, 2, 1, 2, 1, 2]$$$ is not, because both halves contain both types of sushi.</p><p>Find the length of the longest continuous subsegment of sushi Arkady can buy.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$2 \le n \le 100\,000$$$) — the number of pieces of sushi.</p><p>The second line contains $$$n$$$ integers $$$t_1$$$, $$$t_2$$$, ..., $$$t_n$$$ ($$$t_i = 1$$$, denoting a sushi with tuna or $$$t_i = 2$$$, denoting a sushi with eel), representing the types of sushi from left to right.</p><p>It is guaranteed that there is at least one piece of sushi of each type. Note that it means that there is at least one valid continuous segment.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the maximum length of a valid continuous segment.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006783778693710248" id="id007876930844420684" class="input-output-copier">Copy</div></div><pre id="id006783778693710248">7
2 2 2 1 1 2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008379065815877982" id="id002892672120625177" class="input-output-copier">Copy</div></div><pre id="id008379065815877982">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0036206491810245867" id="id002942288185872408" class="input-output-copier">Copy</div></div><pre id="id0036206491810245867">6
1 2 1 2 1 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003408165753888863" id="id007581042610660768" class="input-output-copier">Copy</div></div><pre id="id003408165753888863">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0006555517832202995" id="id006844063249885244" class="input-output-copier">Copy</div></div><pre id="id0006555517832202995">9
2 2 1 1 1 2 2 2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0036018130257409764" id="id003842644445434602" class="input-output-copier">Copy</div></div><pre id="id0036018130257409764">6
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example Arkady can choose the subsegment $$$[2, 2, 1, 1]$$$ or the subsegment $$$[1, 1, 2, 2]$$$ with length $$$4$$$.</p><p>In the second example there is no way but to choose one of the subsegments $$$[2, 1]$$$ or $$$[1, 2]$$$ with length $$$2$$$.</p><p>In the third example Arkady's best choice is the subsegment $$$[1, 1, 1, 2, 2, 2]$$$.</p></div>