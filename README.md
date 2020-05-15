Command-Line Calculator
===

@Author: Ishika Agarwal

Building
---

This repository uses `make`, a program to manage the build process for
other programs.  
All four of these commands should be run from the same directory
containing this README, the Makefile, and `calc.c`.

 * `make` or `make calc`: Both of these commands will build the program
   `calc` from the file `calc.c`.
 * `make test`: This command will run a set of tests against your
   program.
 * `make clean`: This command will clean up the build products from
   building the program `calc` or a submission tarball.
 

Running Instruction
---

Unlike many other operating systems, the default configuration of most
Unix systems does not include the current directory in the shell's
command search path.  Therefore, you must provide a _relative_ or
_absolute_ path to a binary in the current directory in order to run it.
The special directory entry `.` represents the current directory, so a
relative path to the `calc` binary created by `make calc` is `./calc`.
You can type `./calc` at the command prompt to run your built binary.
(You will need to provide command line arguments to run it properly!)

Testing Your Project
---

`make test` will run some tests against your
project.  They will, however, test _only_ `isinteger()` and
`parseint()`.  You are responsible for designing and running your own
tests against the calculator functionality of your project.


## Author
Ishika Agarwal (ia.ishikaagarwal@gmail.com)

## License
This project is licensed under the GNU General Public License - see the [LICENSE](https://github.com/ishikaag/Calculator/blob/master/LICENSE) file for details

