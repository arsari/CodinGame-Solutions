# CodinGame-Solutions
Solutions to various CodinGame challenge puzzles. Each puzzle have a tag identifiying the language used to resolved the puzzle. This repository is created as a reference tool to the community.

## Classic Puzzle – Easy

### Temperatures (cpp)
**Topics:** *Arrays, Loops, Conditions*

#### Statement
Your program must analyze records of temperatures to find the closest to zero.

#### Story
It's freezing cold out there! Will you be able to find the temperature closest to zero in a set of temperatures readings?

#### Rules
Write a program that prints the temperature closest to 0 among input data. If two numbers are equally close to zero, positive integer has to be considered closest to zero (for instance, if the temperatures are -5 and 5, then display 5).

### The Descent (cpp)
**Topics:** *Loops*

#### Statement
A simple problem to try out the CodinGame platform: your program must find the highest mountain out of a list of mountains.

#### Story
The Enterprise ship is in danger: drawn towards the surface of an unknown planet, it is at risk of crashing against towering mountains. Help Kirk and Spock destroy the mountains... Save the Enterprise!

#### Rules
At the start of each game turn, you are given the height of the 8 mountains from left to right. By the end of the game turn, you must fire on the highest mountain by outputting its index (from 0 to 7). Firing on a mountain will only destroy part of it, reducing its height. Your ship descends after each pass.

## Classic Puzzle – Medium

### Shadows of the Knight - Episode 1 (cpp)
**Topics:** *Binary Search, Intervals*

#### Statement
The goal of this puzzle is to guess the coordinate of a bomb (line and column of a 2 dimensional array). You will have to make a guess at each step of the puzzle and adjust it from given feedbacks. Of course, you have a limited number of guess.

#### Story
*NA NA NA NA NA BATMAN*

We love Batman's adventures : The Joker, bombs, hostages, and a hero. But this time, it is you who are the hero. Your job is to find the bombs before they explode! Don't worry, Alfred's got you covered, he's handed you a heat detector set to recognize the thermal signature of the Joker's bombs. Easy? Let's find out.

#### Rules
Before each jump, the heat-signature device will provide Batman with the direction of the bombs based on Batman current position:
  * U (Up)
  * UR (Up-Right)
  * R (Right)
  * DR (Down-Right)
  * D (Down)
  * DL (Down-Left)
  * L (Left)
  * UL (Up-Left)

Your mission is to program the device so that it indicates the location of the next window Batman should jump to in order to reach the bombs' room as soon as possible. Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index (0,0).
