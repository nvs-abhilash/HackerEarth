# [Cube Change Problem](https://www.hackerearth.com/problem/algorithm/cube-change-qualifier2/)

> This was a pretty straight forward question to solve.

##Question
Chandan gave his son a cube with side `N`. The `N X N X N` cube is made up of small `1 X 1 X 1` cubes.

Chandan's son is extremely notorious just like him. So he dropped the cube inside a tank filled with Coke. The cube got totally immersed in that tank. His son was somehow able to take out the cube from the tank. But sooner his son realized that the cube had gone all dirty because of the coke. Since Chandan did not like dirty stuffs so his son decided to scrap off all the smaller cubes that got dirty in the process. A cube that had coke on any one of its six faces was considered to be dirty and scrapped off. After completing this cumbersome part his son decided to calculate volume of the scrapped off material. Since Chandan's son is weak in maths he is unable to do it alone.

Help him in calculating the required volume.

## Solution
Well, the question in short coud be : 

A cube of side N containing of smaller cubes of side 1 is painted on its surface.
Find the total number of cubes each of side 1 which has at least one side painted.

####  Method 1

* So the answer was easy Total cubes (i.e. `N x N x N`) minus the interior part which was not coloured.
So the trick is to find the interior part. And by trial and error you can guess that to be `(N - 2) * (N - 2) * (N - 2)`.

* Hence the formula : ```(N * N * N) - (N - 2) * (N - 2) * (N - 2)```

####  Method 2

My process of thinking was a bit different .

I couldn't discover the formula `(N - 2) * (N - 2) * (N - 2)` cube. I looked the problem in a different way, i.e.

* The answer is the volume of a hollow cube of side `N`. So, assume a 3-D hollow cube in front of you. Now we could find its volume by splitting it. Split two ```N x N``` squares from both opposite sides of the cube.

* We get `(2 x N x N)` as volume taken. Now assume the remaining volume as combination of `(N - 2)` square rings. Volume of each hollow square is `(N + N + (N - 2) + (N - 2))`. (I know its tough, but try to imagine.). Hence for `(N - 2)` rings we get `(N - 2) x ( (4xN) - 4 )`.

* Hence the total volume turns out to be : `(2 * N * N) + (N - 2) * ( 4 * N - 4 )`
Which is another version of the first solution.


[_NVS Abhilash_](https://github.com/nvs-abhilash)
