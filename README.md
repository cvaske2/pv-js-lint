# pv-js-lint
A subpar Javascript linter built in C

To run the executable, use `path/to/lint <arg1> <arg2> ...` where <arg> is the path to the JS file you would like to lint. You can supply as many filepaths as you like.

# Vision
I *really* hate Javascript for its syntax. Many text editors aren't very good at handling it either.
The goal of this project is to implement a few linting capabilities on JS files using rudimentary syntactical analysis.
This project is not intended to have particularly useful applications compared to that of other JS linters. I'm just doing this to gain a better understanding of C (which is why I chose it over any other language that would provide easier string handling).

# TODO:
 - Implement recursive linting of JS files when supplied a path instead of a file
 - Automate tabbing
 - Automate adding line endings `;`