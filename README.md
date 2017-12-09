# Suitor Elimination
A program that uses a vector to determine which position you should stand in to marry the princess if ther are
n suitors.

### Synopsis
In an ancient land, the beautiful princess Eve had many suitors. She decided on the following procedure to 
determine which suitor would marry her. First, all of the suitors would be lined up one after the other
and assigned numbers. The first suitor would be number 1, the second suitor number 2, and so on up to the 
last suitor, number n. Starting at the first suitor she would then count 3 suitors down the line
(because of the three letters in her name) and the third suitor would be eliminated from winning her hand
in marriage and removed from the line. Eve would then continue, counting three more suitors, and eliminating
every third suitor. When she reached the end of the line she would continue counting from the beginning.

For example, if there are six suitors then the elimination process would proceed as follows:

**123456**&nbsp;&nbsp;&nbsp;&nbsp;initial list of suitors, starting from 1<br />
**12456**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;suitor 3 eliminated, continue counting from 4<br />
**1245**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;suitor 6 eliminated, continue counting from 1<br />
**125**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;suitor 4 eliminated, continue counting from 5<br />
**15**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;suitor 2 eliminated, continue counting from 5<br />
**1**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;suitor 5 eliminated, 1 is the lucky winner!<br />

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/suitor-elimination-process.git
   ```
    or [download as ZIP](https://github.com/cramaechi/suitor-elimination-process/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd suitor-elimination-process
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./suitors
```

Sample Output:
```
How many suitors are there for the beautiful princess Eve? 6                                                          
                                                                                                                      
If you want to marry the beautiful princess Eve, you should stand in position 1.
How many suitors are there for the beautiful princess Eve? 4                                                          
                                                                                                                      
If you want to marry the beautiful princess Eve, you should stand in position 1.
How many suitors are there for the beautiful princess Eve? 19                                                         
                                                                                                                      
If you want to marry the beautiful princess Eve, you should stand in position 17.
How many suitors are there for the beautiful princess Eve? 15                                                         
                                                                                                                      
If you want to marry the beautiful princess Eve, you should stand in position 5. 
```
