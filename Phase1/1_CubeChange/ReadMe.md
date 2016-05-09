# [Cube Change Problem](https://www.hackerearth.com/problem/algorithm/cube-change-qualifier2/)

## Question:
Chandan gave his son a cube with side `N`. The `N X N X N` cube is made up of small `1 X 1 X 1` cubes.

Chandan's son is extremely notorious just like him. So he dropped the cube inside a tank filled with Coke. The cube got totally immersed in that tank. His son was somehow able to take out the cube from the tank. But sooner his son realized that the cube had gone all dirty because of the coke. Since Chandan did not like dirty stuffs so his son decided to scrap off all the smaller cubes that got dirty in the process. A cube that had coke on any one of its six faces was considered to be dirty and scrapped off. After completing this cumbersome part his son decided to calculate volume of the scrapped off material. Since Chandan's son is weak in maths he is unable to do it alone.

Help him in calculating the required volume.

## Solution:
We have to find the volume of scrapped off unit cubes. Which is nothing but "(N*N*N) - volume of interior cubes", i.e. volume of cubes with at least one side painted.

* I thought of it like first we calculate the volume of two opposite faces, which is (2*N*N). Then volume of remaining cubes is ((N-2) * N+N+(N-2)+(N-2)). Imagine it in your mind. Area for remaining cubes is (4*N - 4) & multiply it with height (N-2) to get volume. So, total volume of scrapped off cubes is equals to ((2*N*N) + ((N-2) * (4*N - 4))).

* On solving above formula, it comes out to be same as (N-2)*(N-2)*(N-2).

You can thank me :P

**_PRIYAMWAD_PATHAK_**(https://github.com/priyamwad-pathak)