A first year assignment in my university degree was to build a game similar to the viral 2048 app. We were given restrictive specifications, but also had plenty of room for creativity and improvements. We needed to take into account all possible edge cases. Good coding practices and versatility of our code were also taken into account for marking.

The game was programmed in C++. A program report was authored, explaining how the code functions in detail. It includes a review of the program and prospects for improvements.

The game features a four-by-four grid of numerical cells. By default, the cells' values are 0, which is equivalent to the cell being void. At the beginning of the game, the values of cells could be initalised using a pre-written text file.

The game functioned in rounds. Each round the player would perform one swipe, which displaced cell values and caused merges in some instances. The prerequisites for merges were simple rules but led to several edge cases due careful consideration. After each round, the program generates a inserts a low value to one of the void cells. The goal of the game is for the player to achieve the highest cell value possible (via merges) before being overwhelmed by the random insertions filling up the grid and being left no valid moves.

Since most monitors are not touchscreen, the swiping mechanic was implemented via the keyboard buttons w, a, s and d.