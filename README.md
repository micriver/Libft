<p align="center">
  <div align="center">
   <img src="assets/libft_path.png" width="425px"</img><br>
    <em><small><i>Your first libary...</i></small></em>
  </div>
</p>

# Libft

This is my first project in the [42 Silicon Valley](http://42.us.org) curriculum. As incoming students, we're tasked with re-coding a set of standard ```libc``` functions, as defined by their man pages. We're also tasked with coding other useful functions from a given set of descriptions.

This project forces us to re-write these standard ```libc``` functions so that we may further understand and better implement them in future C projects.

I'll be using this library for the duration of my studies here at 42. We're encouraged to continuously develop it as we work through the curriculum.

Per the project, all of our functions must begin with ```ft_``` for, _Forty-Two_.

**Project Document:**
[Libft.pdf](https://github.com/micriver/docs/libft.en%20.pdf)

All functions were created according to 42's coding standard,
[the Norm](https://github.com/micriver/docs/norme.en%20.pdf).


## Installation

Download the repository by copying and pasting the commands below.

```bash
git clone https://github.com/micriver/Libft.git
cd Libft
```

You can compile the library using the Makefile.

Command       |  Action
:-------------|:-------------
`make`        | Compile the library.
`make clean`  | Remove objects files.
`make fclean` | Remove objects files and the library.
`make re`     | Re-compile the library.

## Usage

After compilation, the library can be used alongside your programs with the following command:

```bash
gcc libft.a -I ./header <your_file.c> -o <output_name>
```
